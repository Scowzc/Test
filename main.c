#include<stdio.h>
#include"jjcc.h"
int main() {
    int a,b;
   	scanf("%d%d",&a,&b);
    printf("%d + %d = %d\n",a,b,add(a,b));
 	printf("%d - %d = %d\n",a,b,sub(a,b));
	printf("%d * %d = %d\n",a,b,mul(a,b));
    printf("%d / %d = %d\n",a,b,div(a,b));
    return 0;
}