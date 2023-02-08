#include<stdio.h>
main(){
	short a[8] = {10,20,30,40,50,60,70,80};
	short *p=a+1;
	printf("%d\n",*a+3);
	printf("%d\n",*(a+3));
	printf("%d\n",*p+3);
	printf("%d\n",*(p+3));
	
}
