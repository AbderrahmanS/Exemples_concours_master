#include<stdio.h>
/*
int recherche(int T[],int x,int n){
for(int i=0;i<n;++i)
	if(T[i]==x) return i;
	else ++i;
	return -1;	

}
*/

int recherche(int T[],int x,int n){
for(int i=0;i<n;++i)
	if(T[i]==x) return i;
	return -1;	
}

main(){
     int n=10,x=10;
     int A[10] = {0,2,3,4,5,6,7,8,9};
     printf("%d",recherche(A,x,n));	
}	
