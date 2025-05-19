#include<stdio.h>
main(){
  //Les variable
  int i,P;
  scanf("%d",&i);
  //recuperation du reste du division par 2
  P=i%2;
  //si reste du division par 2 est égale à 0 alors
  if (P==0){
      printf("%d est pair.",i);}
  //sinon le nbre est impair
  else{
    printf("%d est impair.",i);}
}
