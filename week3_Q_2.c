#include<stdio.h>
int GDC(int x,int y);
int LCM(int x,int y);
void main(){
    int a,b,gdc;
    printf("Value of a is ");
    scanf("%d",&a);
    printf("Value of b is ");
    scanf("%d",&b);
    gdc=GDC(a,b);
    printf("%d",gdc);
}

int GDC(int x,int y){
    if(y==0)
    {
    return x;
    }
    else
    {
      return GDC(x,x%y);
    }
}
