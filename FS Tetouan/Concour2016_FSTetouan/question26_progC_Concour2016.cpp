#include<stdio.h>
main(){
       
       int r=4;
       int i=r--;
       int x;
       while(i<7){
       	for(x=3;x>1;--x)
       	r*=i;
       	i+=2;
       }	
printf("la valeur de r est %d et la valeur de i est %d",r,i);
}
