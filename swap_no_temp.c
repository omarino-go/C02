#include<stdio.h>
//bibliothèque qui gère les accents
#include<locale.h>
int main(){
  setlocale(LC_ALL, "");
  int a,b;
  //recuperation du variable
  scanf("%d",&a);
  scanf("%d",&b);
  //echange sans variable temporaire
  a=a+b;
  b=a-b;
  a=a-b;
  //affichage du resultat
  printf("Après échange: a = %d, b = %d",a,b);
  return 0;
}
