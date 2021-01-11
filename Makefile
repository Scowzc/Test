#静态库
#ar -crv libjjcc.a add.o sub.o div.o mul.o
#gcc -o test main.o libjjcc.a
#动态库
#gcc -shared -fPIC -o libjjcc.so add.o sub.o mul.o div.o
#gcc main.c libjjcc.so -o testD
RMRF = rm -rf
CC = gcc
MAI = main.c
OBJ = main.o
TAR = test
TARD = testD
LIB_PATH = -I ./JJCC
LJ_PATH = -L ./JJCC
LIBS = -ljjcc
LIBJ = -l:libjjcc.a

.PHONY:clean cleanall all
all:test1 test2
test1:$(TAR)
test2:$(TARD)
$(TAR):$(OBJ)
	$(CC) -o $@ $^ $(LJ_PATH) $(LIBJ)
$(TARD):$(MAI)
	$(CC) -o $@ $^ $(LIB_PATH) $(LIBS)
%.o:%.c
	$(CC) -o $@ -c $^ $(LIB_PATH)

clean:
	$(RMRF) $(OBJ)
cleanall:
	$(RMRF) $(OBJ) $(TAR) $(TARD)