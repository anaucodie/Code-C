#include <stdio.h>
#include <stdlib.h>

void print_tab(int size, int tab[]){
  for(int i=0;i<size;i=i+1)
      printf("%d\n",tab[i]);
}


int find_max(int size, int tab[]){
  int max=tab[0];
  for(int i=1; i<size; i=i+1){
    if(max<tab[i]);
      max=tab[i];
}
  return (max);
}

int find_min(int size, int tab[]){
  int min=tab[0];
  for(int i=1; i<size; i=i+1){
    if(min>tab[i]);
      min=tab[i];
}
  return (min);
}
int secondTableau(int size, int tab[]){ /*problème dans cette fonction*/
  int max2=tab[0];
  int a=find_max(size, tab);
  for(int i=1; i<size; i=i+1){
    if((max2<tab[i]) && (tab[i]<a));
      max2=tab[i];
  return (max2);
}
}

int main(int argc, char ** argv)
{
  int tab[]={1,3,4,5,6,58};
  printf("le 2ndmax est %d\n",secondTableau(6, tab));
  printf("le max est %d\n",find_max(6, tab));
}







  /*int i=0;
  int tab[500];
  for(i=0;i<499;i=i+1){
    tab[i]=(rand()%2);
    printf("tab[%d] = %d\n",i, tab[i]);
}
    printf("Randmax = %d\n",RAND_MAX);

int tab_pair(int size,){

  int max=tab[0];
  for(int i=1; i<499; i=i+1){
    int max=(max<tab[i]) ? tab[i]:


}
    printf("le max est %d\n",max);
}
*/
