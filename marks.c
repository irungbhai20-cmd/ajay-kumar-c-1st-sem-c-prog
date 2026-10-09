#include<stdio.h>
int main(){
int marks;
scanf("%d",&marks);
if(marks>=90 && marks<=100)
  printf("grade A");
else if(marks>=70 && marks<90)  
  printf("grade B");
else if(marks>=50 && marks<70)
  printf("grade C");
else
printf("grade D" );
return 0;
}     

