#include<stdio.h>
int main(){
    typedef int age;   //typedef 
    age arr[5] = {1};
    
    for(int i = 0 ; i<5 ; i++){
        printf("%d\n" ,arr[i]);
    }
    return 0;
}