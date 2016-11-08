#include <stdlib.h>
#include <windows.h>
#include <cstdio>
#include "printer.c"
#include "commons/commons.h"

//
//D:\minGW\bin\gcc main
//cd  D:\cProjects\HelloWorld
//d:
//gcc main.cpp
//g++ main.cpp -o mytest
int main() {
//    cout << "Hello, Woggr44!" << endl;
    printf("Hello, Woggr 44! MAX_BYTE %d \r\n",MAX_BYTE);
    myprint(MAX_BYTE);
    printf("Hello blueshell1949");
    int x = MessageBoxA(0, "HELLO blueshell1949", "First C", 1);
    printf("x:%d", x);// x = 1 || 2
    system("pause");
    return 0;
}