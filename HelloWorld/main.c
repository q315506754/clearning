#include <stdlib.h>
#include <string.h>
//#include <stdio.h>
#include "commons/commons.h"
#include "printer.c"

//
//D:\minGW\bin\gcc main
//cd  D:\cProjects\HelloWorld
//d:
//gcc main.cpp
//g++ main.cpp -o mytest
struct Student{
    int age;
    int gender;
    char name[10];
    char *address;
}zhangsan;
struct BitField{
    int age:4;
    int gender:4;
    char name:6;
}bitField;
extern void myprint(int x);
int main() {
//    cout << "Hello, Woggr44!" << endl;

    //printf test
    printf("the max value of %d,%d is %d %s",5,9,MAX(5,9),LINE_END);
    printf("the min value of %d,%d is %d %s",5,9,MIN(5,9),LINE_END);

    //macro test
    int T_3=99;
    MACRO_A(3) = 12;
    int x=88;
    printf("the MACRO_A(3) value is %d %s",MACRO_A(3),LINE_END);
//    printf("the MACRO_A(3) value is %d %s",MACRO_B(4),LINE_END);
    printf("the MACRO_A(3) value is %s %s",MACRO_C(asd),LINE_END);

    //function test
    myprint(MAX_BYTE);

    int32 i32 = 33;
    printf("the i32 value is %d %s",i32,LINE_END);

    //string test
    char myname[] = "jiangli";
    char *myname2 = "jiangli2";
    char myname3[] = {"jiangli3"};
//    char myname4 [] ;// x
    char *myname5  ;
    myname5 = "jiangli5";
    printf("myname is :%s%s", myname,LINE_END); //%s -> %d Ҳ���ᱨ��
    printf("myname2 is :%s%s", myname2,LINE_END); //%s -> %d Ҳ���ᱨ��
    printf("myname3 is :%s%s", myname3,LINE_END); //%s -> %d Ҳ���ᱨ��
    printf("myname5 is :%s%s", myname5,LINE_END); //%s -> %d Ҳ���ᱨ��
    printf("myname 's address is :%o%s", myname,LINE_END); //8����
    printf("myname 's address is :%x%s", myname,LINE_END); //ʮ������
    printf("myname 's address is :%10x%s", myname,LINE_END); //�������ַ�����10λ�ģ����10λ��ȣ��Ҷ��룬�յ�һλ�����ַ�

    puts("~~~~~~~~~please input:");
    char inputChar[10];
    gets(inputChar);
    char aftercate[30]="your put is:";
    strcat(aftercate,inputChar);
//    puts(strcat("your put is:",inputChar));
    puts(aftercate);
//    strcpy(aftercate,"-end-end");
    strncpy(aftercate,"-end-end",3);
    puts(aftercate);
//    struct test
    zhangsan.age=1;
    zhangsan.gender=2;
//    zhangsan.name="gula";
    strcpy(zhangsan.name, "hello my name is 'guagua'");

    char tempAddress[] = "�Ͼ���·west nanjing road";
    zhangsan.address = tempAddress;
//    strcpy(zhangsan.address, "hello");
    printf("zhangsan's age:%d%s", zhangsan.age,LINE_END);
    printf("zhangsan's gender:%d%s", zhangsan.gender,LINE_END);
    printf("zhangsan's name:%s%s", zhangsan.name,LINE_END);
    printf("zhangsan's address:%s%s", zhangsan.address,LINE_END);
    tempAddress[13] = 'B';
    printf("after change :tempAddress:%s%s", tempAddress,LINE_END);
    printf("after change :zhangsan's address:%s%s", zhangsan.address,LINE_END);//˵������ǵ�ַ

    zhangsan.address= (char*)calloc(10,sizeof(char));
    printf("after calloc :zhangsan's address:%s%s", zhangsan.address,LINE_END);//

    strcpy(zhangsan.address, "after calloc!!!");
    printf("after calloc&strcpy:zhangsan's address:%s%s", zhangsan.address,LINE_END);//

    zhangsan.address= (char*)malloc(sizeof(char) * 10);
    printf("after malloc :zhangsan's address:%s%s", zhangsan.address,LINE_END);//

    strcpy(zhangsan.address, "after malloc!!!");
    printf("after malloc&strcpy:zhangsan's address:%s%s", zhangsan.address,LINE_END);//

    //malloc &calloc
    //1�����ò�����һ��
//    2��malloc�����ڴ�󣬲���������ڴ����㣬��calloc������
    //calloc��Ȼ���ڴ�����˳�ʼ����ȫ����ʼ��Ϊ0�� ����Ч��
    //calloc�൱��
//    p = malloc();
//    memset(p, 0,size);


    free(zhangsan.address);
    printf("after free :zhangsan's address:%s%s", zhangsan.address,LINE_END);//

//    system("notepad ");
    system("pause");
    return 0;
}