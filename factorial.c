#include<stdio.h>
main(){
  //variable
  int v=1,a,i;
  scanf("%d",&a);
  //boucle pour multiplier plusièurs nbre
  for (i=a;i>=1;i--)
      v*=i;
  printf("Le factoriel de %d est : %d",a,v);
}
