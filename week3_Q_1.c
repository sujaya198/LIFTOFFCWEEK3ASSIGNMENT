#include<stdio.h>
int factorial(int number);
int main(){
    int n,c;
    printf("Enter number :: ");
    scanf("%d",&n);
    c=factorial(n);
    printf("factorial of the number is %d",c);
    return 0;
}
int factorial(int number){
    for(int i=number;i>1;i--){
       number*=(i-1);
    }
    return number;
}
