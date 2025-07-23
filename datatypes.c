#include<stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};


union Data {
    int i;
    float f;
};


int main(){
    printf("Primitive data type:\n");
    int a = 1;
    printf("This is integer data types %d size = %lu byte\n",a ,sizeof(a));
    char ch ='A';
    printf("This is character variable %c size = %lu byte\n",ch , sizeof(ch));
    float f = 4.2;
    printf("This is floating point variable %f size = %lu byte\n",f , sizeof(f));
    double db1 = 10000;
    double db2 = -10000;
    printf("This is Double  variable %lf size = %lu byte\n",db1 , sizeof(db1));
    printf("This is Double  variable %lf size = %lu byte\n",db2 , sizeof(db2));
    unsigned int b = 100;
    unsigned int c = -100; //why if unsigned int store only positive value why it not give any warning
    printf("This is unsigned int  variable %u size = %lu byte\n",b , sizeof(b));
    printf("This is unsigned int  variable %u size = %lu byte\n",c , sizeof(c));

    printf("Derived data type data type: \n");
    printf("1.Array: \n");
    int array[5] = {1,2,3,4,5};
    for(int i = 0 ; i<5 ; i++){
        printf("Element on idx %d is = %d\n",i , array[i]);
    }
    printf("Size of Array is = %lu\n",sizeof(array));
    printf("2.pointer: \n");
    int h = 10;
    int *ptr = &h;
    printf("Actual value of h: %d\n",h);
    printf("Actual value of h: %d\n",*ptr);
    printf("Address of h: %p\n",ptr);
    printf("Size of Address: %lu\n",sizeof(ptr));
    printf("3.String:\n"); //There is no string data type in c (sequce of char)
    char str[] = "Hemant";
    printf("Sequece of charter : %s\n",str);
    int ln = sizeof(str)/sizeof(str[0]);                    // sizeof(str ---->Total size
    for(int i = 0 ; i<ln ; i++){
        printf("Element at idx %d is = %c\n",i,str[i]);    // strlen(str) ---->Only length
    }
    printf("Size of string : %lu\n", sizeof(str));   //why its size is 7

    printf("User difined Data type: \n");
    printf("1.Structure: \n");
    struct Student s1 = {1, "Hemant", 95.5};
    printf("Name: %s, Roll: %d, Marks: %.2f\n", s1.name, s1.roll, s1.marks);
    struct Student st[3];
    for(int i = 1 ; i<=3 ; i++){
        printf("Enter the Details of Student %d:\n",i);
        printf("Enter Student %d Roll N0. :\n",i);
        scanf("%d",&st[i].roll);
        printf("Enter Student %d Name :\n",i);
        scanf("%s",st[i].name);
        printf("Enter Student %d Marks :\n",i);
        scanf("%f",&st[i].marks);
    }
    printf("Details of Student's \n");
    for(int i = 1 ; i<=3 ; i++){
        printf("Name: %s, Roll: %d, Marks: %.2f\n", st[i].name, st[i].roll, st[i].marks);
    }

    union Data d;
    d.i = 10;
    d.f = 3.14;  // Overwrites `i`
    printf("f = %.2f\n", d.f);
    printf("%lu" , sizeof(d));
    return 0;
}