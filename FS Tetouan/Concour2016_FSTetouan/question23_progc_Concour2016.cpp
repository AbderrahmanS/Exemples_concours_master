#include<stdio.h>
main(){
	int x=2;
	int y=3;
	y*=x++ -1;
	printf("la valeur de x est %d et de y est %d",x,y);
}
