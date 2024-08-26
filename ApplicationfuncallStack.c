#include<stdio.h>
void fun4()
{
     printf("Inside :fun4 function\n");
     return;
}
void fun3()
{   
     fun4();
     printf("Inside :fun3 function\n");
     return;
}
void fun2()
{ 
      fun3();
     printf("Inside :fun2 function\n");
     return;
}
void fun1()
{   
     fun2();
     printf("Inside :fun1 function\n");
     return;
}
int main()
{
     printf("Execution started.. from main(function)\n");
     fun1();
     printf("Execution endded... from main(Function)");
     return 0;
}