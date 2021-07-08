<stdio.h>
#include<stdlib.h>

int main(){
  int a, i, heads=0,tails=0;
printf("please toss your coin \n");
for(a=0; a<3; a++){
i = rand();
if(i%2==0){
printf("%d: Head\n",a+1);
heads++;
}
else{
printf("%d: Tail\n",a+1);
}
}
printf("Heads: %d, Tails: %d\n", heads, tails);
return 0;
}
