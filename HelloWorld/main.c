#include <stdlib.h>
//#include <stdio.h>
#include "commons/commons.h"
#include "printer.c"

//
//D:\minGW\bin\gcc main
//cd  D:\cProjects\HelloWorld
//d:
//gcc main.cpp
//g++ main.cpp -o mytest
extern void myprint(int x);
int main() {
//    cout << "Hello, Woggr44!" << endl;

    printf("the max value of %d,%d is %d %s",5,9,MAX(5,9),LINE_END);
    printf("the min value of %d,%d is %d %s",5,9,MIN(5,9),LINE_END);

    int T_3=99;
    MACRO_A(3) = 12;
    int x=88;
    printf("the MACRO_A(3) value is %d %s",MACRO_A(3),LINE_END);
//    printf("the MACRO_A(3) value is %d %s",MACRO_B(4),LINE_END);
    printf("the MACRO_A(3) value is %s %s",MACRO_C(asd),LINE_END);


    myprint(MAX_BYTE);

    int32 i32 = 33;
    printf("the i32 value is %d %s",i32,LINE_END);

    system("notepad ");
    system("pause");
    return 0;
}