#include<stdio.h>

	void f(int a,int b,int *c){
		a= b + *c;
		b= *c + a;
		*c=a+b;
	}
	int main(void){
		int x=1,y=2,z=3;
		f(x,y,&z);
		printf("x= %d , y=%d , Z=%d\n",x,y,z);
		return 0;
	}

