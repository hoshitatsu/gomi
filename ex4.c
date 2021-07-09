#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(){
  srand(time(NULL));
  int a, i,dice[2], total;

printf("please roll your dice...\n");
for(a=0; a<2; a++){
  dice[a]=rand()%6+1;
    printf("dice%d: %d\n",a+1,dice[a]);
    total+=dice[a];
}
 printf("total: %d\n",total);
return 0;
}
