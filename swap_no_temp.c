#include<stdio.h>
int main(){
  int a, b;
  //recuperation du variable
  scanf("%d", &a);
  scanf("%d", &b);
  //echange sans variable temporaire
  a=a+b;
  b=a-b;
  a=a-b;
  //affichage du resultat
  printf("Après échange: a = %d, b = %d\n", a, b);
  return 0;
}
