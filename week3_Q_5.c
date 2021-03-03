#include<stdio.h>
int palindrome(int num);
int main(){
    int n,c,reverse;
    printf("Enter n :: ");
    scanf("%d",&n);
    c=palindrome(n);
    return 0;
}
int palindrome(int num){
    int a;
    a=num;
    int reverse=0,digit;
    while(a!=0){
    reverse=reverse*10;
    reverse=reverse+a%10;
    a/=10;
    }
     if(num==reverse){
        printf("palindrome");
    }
    else{
        printf("Not palindrome");
    }
}
