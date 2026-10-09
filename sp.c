#include<stdio.h>
int main(){
int X,Y,Z,rent,sp,cp;
scanf("%d%d%d%d%d%d",&X,&Y,&Z,&rent,&sp,&cp);
sp=(X*Y)-(X*Z);
printf("the profit is %d",sp-rent);
return 0;
}


