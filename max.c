#include <stdio.h>

int main(int argc, char ** argv)
{
  int tab[]={1,2,3,4,60,5,45,46};
  /*int size=8;*/
  int max=tab[0];
  for(int i=1; i<7; i=i+1){
    if(max<tab[i])
      max=tab[i];


  }
  printf("%d\n",max);


}
