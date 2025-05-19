#include<stdio.h>
#include<locale.h>
int main(){
  setlocale(LC_ALL,"")
  int a,b;
  //recuperation du variable
  scanf("%d %d",&a,&b);
  //echange sans variable temporaire
  a=a+b;
  b=a-b;
  a=a-b;
  //affichage du resultat
  printf("Après échange: a = %d, b = %d",a,b);
}
