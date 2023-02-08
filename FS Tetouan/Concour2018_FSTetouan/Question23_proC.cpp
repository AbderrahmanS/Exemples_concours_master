#include<stdio.h>
main(){
      int i,j;
      int N[5][5];
      //remplissage de la matrice
      for(i=0;i<5;++i)	
        for(j=0;j<5;++j){
         N[i][j]=(i-j);
        
          }
      //affichage de la matrice
      for(i=0;i<5;++i)	
      {
        for(j=0;j<5;++j)
        printf("%d",N[i][j]);
        printf("\n");
       }    
          
}
