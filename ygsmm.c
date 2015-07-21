#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

inline uint64_t rdmsr(uint32_t msr_id)
{
    uint64_t msr_value;
    asm volatile ( "rdmsr" : "=A" (msr_value) : "c" (msr_id) );
    return msr_value;
}


void show_smram() {
    uint64_t rdmsr1 = rdmsr(0xc0000010);
    uint64_t rdmsr2 = rdmsr(0xc0010111);
    printf("0xc0000010 : %" PRIu64 "\n", rdmsr1);
    printf("0xc0010111 : %" PRIu64 "\n", rdmsr2);
    return;
}



int main() {
    printf("yonggon's smm interface\n");

    // TODO
    // 1. SMI handler implementation
    // 2. SMI handler register
    // 3. SMI call interface
    // 4. SMRAM status monitoring

    show_smram(); 
    return 0;
}
