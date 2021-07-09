#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//ask name part
int main(){
 srand(time(NULL));
  int a, i,dice[2], total;
  char str[10];
printf("who are you?" );
scanf("%s" ,str);
printf("Hello, %s\n" ,str);
//dice part
 
printf("please roll your dice...\n");
for(a=0; a<2; a++){
  dice[a]=rand()%6+1;
    printf("dice%d: %d\n",a+1,dice[a]);
    total+=dice[a];
}
 printf("total: %d\n",total);
if(total>7)printf("%s" won! ,str);
  else printf("%s lose" ,name);
  return 0;
}
