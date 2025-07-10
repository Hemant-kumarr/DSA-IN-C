#include<stdio.h>
int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
    

}
int main(){
    int n ;
    printf("Enter the number: ");
    scanf("%d",&n);
    long int res = factorial(n);
    printf("Factorial of %d is : %ld",n , res);

}