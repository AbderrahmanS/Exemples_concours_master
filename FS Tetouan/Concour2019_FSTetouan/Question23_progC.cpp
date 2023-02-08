#include<stdio.h>
main(){
	int n=10,x=2,i=4;
	int T[n]={0,1,2,3,4,5,6,7,8,9};
	for(int j=n;j>i;--j){
		T[j]=T[j-1];
	}
	T[i] =x;
	++n;
	for(int j=0;j<n;j++){
		printf("%d",T[j]);
	}   
	
}
