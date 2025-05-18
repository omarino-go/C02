#include<stdio.h>
int main(){
  int a,b;
  //recuperation du variable
  scanf("%d %d",&a,&b);
  //echange sans variable temporaire
  a=a^b;
  b=a^b;
  a=a^b;
  //affichage du resultat
  printf("Apres echange: a = %d, b = %d",a,b);
  return 0;
}
