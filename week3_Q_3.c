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
    if(number==0){
        return 1;
    }
    else{
        return  number * factorial(number-1);
    }
}
