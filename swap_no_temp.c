#include<stdio.h>
int main(){
  int a,b,c;
  //recuperation du variable
  scanf("%d %d",&a,&b);
  //echange sans variable temporaire
  c=a;
  b=a;
  a=c;
  //affichage du resultat
  printf("Après échange: a = %d, b = %d",a,b);
}
