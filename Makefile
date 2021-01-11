#静态库
#ar -crv libjjcc.a add.o sub.o div.o mul.o
#gcc -o test main.o libjjcc.a
#动态库
#gcc -shared -fPIC -o libjjcc.so add.o sub.o mul.o div.o
#gcc main.c libjjcc.so -o testD
RMRF = rm -rf
CC = gcc
TAR = test
TARD = testD
.PHONY: all clean
clean:
	$(RMRF) $(TAR) $(TARD)