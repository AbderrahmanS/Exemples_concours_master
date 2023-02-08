#include<stdio.h>
main(){   
/* 	int a=2,b=3,c;
	 c=a;
	 a=b;
	 b=c;
	printf("la valeur de a est %d,la valeur de b est %d",a,b);*/
	int a=2,b=3;
	b=a+b;
	a=b-a;
	b=b-a;
	printf("la valeur de a est %d,la valeur de b est %d",a,b);
	
}
