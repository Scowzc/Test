C语言 .c ——————> .exe
	预处理：把 .h .c 展开形成一个文件。宏定义直接替换 头文件 库文件 .i
	gcc -E hello.c -o hello.i

	编译：.i 生成一个汇编代码文件 .S
	gcc -S hello.i -o hello.S

	汇编：.S 生成一个 .o .obj
	gcc -c hello.S -o hello.o

	链接：.o 链接 .elf .exe
	gcc hello.o -o hello

脚本语言： Makefile
	Linux C/C++ 必须要使用的一个编译脚本.


结合话机和SIP的规范，用话机验证一下SIP的主要功能使用

熟悉SIP发起呼叫、完成帐号注册的流程（大致能画出交互流程（SIP FLOW））
怎样是注册成功
怎样是注册失败，有哪些错误类型
标准通话建立-挂断的流程
音频通话与视频通话的区别（除了SIP还要了解SIP消息中的媒体SDP协商)