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
TAR=test
OBJ=add.o sub.o mul.o div.o
CC:=gcc
RMRF:=rm -rf
$(TAR):$(OBJ)
	$(CC) $^ -o $@
%.o:%.c
	$(CC) -c $^ -o $@
.PHONY:
clearall:
	$(RMRF) $(OBJ) $(TAR)
clear:
	$(RMRF) $(OBJ)



