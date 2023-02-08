#include<stdio.h>
main(){
	int r=4,i=3,x;
	while(i<5){
		for(x=1;x<3;x++)
		r=r+2;
		i=i+2;
	}
	printf("la valeur de r est : %d",r);
}
