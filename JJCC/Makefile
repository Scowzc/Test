#	注释
#第一层：显示规则
#目标文件：依赖文件
#[TAB]指令
#
#第一个目标文件是我的最终目标
#
#rm -rf hello.o hello.S hello.i hello
#伪目标：.PHONY:
#
#第二层：变量   =（替换）	+= （追加） :=（常量）
#					使用变量 $(变量名)	替换
#第三层：隐含规则	%.c %.o 任意的.c或者.o		*.c *.o 所有 的.c .o
#第四层：通配符：$^  所有的依赖文件	$@ 所有的目标文件	$< 所有依赖文件的第一个文件
#
#静态库
#ar -crv libjjcc.a add.o sub.o div.o mul.o
#gcc -o test main.o libjjcc.a
#动态库
#gcc -shared -fPIC -o libjjcc.so add.o sub.o mul.o div.o
#gcc main.c libjjcc.so -o testD
# TAR=test
# TARD=testD
# A=libjjcc
# LIBPATH=/usr/lib
# AA=$(A).a
# AAA=$(A).so
# OBJ=add.o sub.o mul.o div.o
# MAI=main.o
# MM=main.c
# ARC=ar -crv
# MV=mv
# CC:=gcc
# RMRF:=rm -rf
# SHA=-shared -fPIC
# all:Test TestD
# Test:$(TAR)
# TestD:$(TARD)

# $(TAR):$(MAI) $(AA)
# 	$(CC) $^ -o $@
# $(TARD):$(MM)
# 	$(CC)  -o $@ $^ -ljjcc
# $(AA):$(OBJ)
# 	$(ARC) $@ $^
#添加进动态库gcc -shared -fPIC -o libjjcc.so add.o sub.o mul.o div.o
# $(AAA):$(OBJ)
# 	$(CC) $(SHA) -o $@ $^
# $(MV) $@ $(LIBPATH) 
# %.o:%.c
# 	$(CC) -c $^ -o $@

# .PHONY: clean all
# clean: clean1 clean2
# clean1:
# 	$(RMRF) $(OBJ) $(MAI) $(AA) 
# clean2:
# 	$(RMRF)  $(TAR) $(TARD)
OBJ = add.o sub.o mul.o div.o
LIB = libjjcc.a
LIBS = libjjcc.so
CC = gcc
SHA = -shared -fPIC
ARC = ar -crv
RMRF = rm -rf
all:test1 test2
test1:$(LIB)
test2:$(LIBS)
$(LIB):$(OBJ)
	$(ARC) $@ $^
$(LIBS):$(OBJ)
	$(CC) $(SHA) -o $@ $^
%.o:%.c
	$(CC) -c $^ -o $@
.PHONY:clean all
clean1: 
	$(RMRF) $(OBJ)
clean: clean1 clean2
clean2:
	$(RMRF) $(LIB)