#include <stdio.h>


void datatypes()
{
    struct Struct1
    {
        char a;
        int b;
        float c;
    };

    struct Struct2
    {
        char a1;
        char a2;
        int b1;
        int b2;
        double d;
    };

    struct Struct3
    {
        char a1;
        int b;
        int b1;
        float c1;
        float c;
        double  d;
    };

    struct Struct4
    {
        double a;
        double b;
        char c;
        int d;
    };

    char a = 'a';
    int b = 10;
    float c = 1.1;
    double d = 11.11;
    //void f = 1;


    printf("value of char : %c\n",a);
    printf("value of int : %d\n",b);
    printf("value of float : %f\n",c);
    printf("value of double : %lf\n",d);
    //printf("value of double : %d\n",f);
    printf("\n");


    printf("size of int :%d\n",sizeof(char));
    printf("size of int :%d\n",sizeof(int));
    printf("size of int :%d\n",sizeof(float));
    printf("size of int :%d\n",sizeof(double));
    printf("\n");

    //size of structure.
    printf("size of Struct1 :%d\n",sizeof(struct Struct1));
    printf("size of Struct2 :%d\n",sizeof(struct Struct2));
    printf("size of Struct3 :%d\n",sizeof(struct Struct3));
    printf("size of Struct4 :%d\n",sizeof(struct Struct4));
    printf("\n");

    //const.
    const int A = 100;
    printf("Size of  int: %d\n", sizeof(A));

    //pointers.
    printf("size of int pointer :%d\n",sizeof(int*));
    printf("size of char pointer :%d\n",sizeof(char*));
    printf("size of void pointer :%d\n",sizeof(void*));
    printf("size of void  :%d\n",sizeof(void));
}
