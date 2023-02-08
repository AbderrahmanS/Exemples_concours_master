#include<stdio.h>
main(){
	int unites;float prix;
	printf("Nombre d unites : ");
	scanf("%d",&unites);
	if(unites<10)prix=unites*4;
	else if(unites<20)prix=unites*3;
	else prix=unites*2;
	printf("Le prix a payer est: %f\n",prix);
}
