all:
#     gcc -Wall -Werror evil.c -o evil -lSMM -L./lib/ -lpci -lz
#     gcc -Wall -Werror libSMM_test.c -o test -lSMM -L./lib/ -lpci -lz
	gcc -Wall -Werror ygsmm.c -o ygsmm

# clean:
#     (cd ./lib/ && make clean)
#     rm -f evil test exploit
#     
# cleanall:
#     (cd ./lib/ && make cleanall)
#     make clean
