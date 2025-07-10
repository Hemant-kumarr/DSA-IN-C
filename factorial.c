#include<stdio.h>
void factorial(int n){
    long int result=1;
    for(int i = n ; i>0 ; i--){
        result = result*i;
    }
    printf("Factorial of %d is : %ld",n , result);

}
int main(){
    int n ;
    printf("Enter the number: ");
    scanf("%d",&n);
    factorial(n);
}