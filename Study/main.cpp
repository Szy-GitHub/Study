// Study.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <memory>
#include <stdlib.h>
#include <string.h>
#include "printArr.h"
#include "quickSort.h"
#include "shellSort.h"
#include "instanceHungry.h"
#include "smartPtr.h"

void test01()
{
    int arr[] = { 3,1,6,4,9,7,2,5,8,0 };
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "before sort" << endl;
    printArr(arr, len);
    quickSort(arr, 0, len - 1);
    cout << "after sort" << endl;
    printArr(arr, len);
}

void test02()
{
    int arr[] = { 3,1,6,4,9,7,2,5,8,0 };
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "before sort" << endl;
    printArr(arr, len);
    shellSort(arr, len);
    cout << "after sort" << endl;
    printArr(arr, len);
}

void test03()
{
    taskQueue* obj = taskQueue::getInstance();
    obj->helllWorld();
}

void test04()
{
    smartPtr* ptr = new smartPtr;
    ptr->helloWorld();
}

void test05()
{
    shared_ptr<smartPtr> sptr1(new smartPtr);
    sptr1->sharedPointer();
    cout << sptr1.use_count() << endl;
    shared_ptr<smartPtr> sptr2(std::move(sptr1));
    sptr2->sharedPointer();
    cout << sptr2.use_count() << endl;

    unique_ptr<smartPtr> uptr1(new smartPtr);
    unique_ptr<smartPtr> uptr2 = move(uptr1);
    uptr1.reset();

    uptr2.reset(new smartPtr);
    uptr2->uniquePointer();
    cout << uptr2.get() << endl;

    weak_ptr<smartPtr> wptr1(sptr1);
    sptr1->weakPointer();
    cout << wptr1.use_count() << endl;

}

void test06()
{
    int a[5] = { 0 };
    cout << &a[0] << endl;
    cout << a << endl;
    cout << (int)&a << endl;
    cout << (int)(&a + 1) << endl;
    cout << sizeof(&a) << endl;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << "*" << j << "=" << i * j << "   ";
        }
        cout << endl;
    }
}

char* mystrcat(char* dest, const char* src)
{
    int len1 = 0, len2 = 0;
    while (dest[len1])
    {
        len1++;
    }
    while (src[len2])
    {
        len2++;
    }
    for (int i = 0; i < len2; i++)
    {
        dest[len1 + i] = src[i];
    }
    return dest;
}

void test07()
{
    char p[64] = "12abc213242abc23423abc3234";
    char temp = ' ';
    int begin = 0;
    int end = strlen(p) - 1;
    while (begin < end)
    {
        temp = p[begin];
        p[begin] = p[end];
        p[end] = temp;
        begin++;
        end--;
    }
    cout << p << endl;
}

void test08()
{
    char dest[32] = "sdslxplf";
    const char* src = "22";
    char* (*ptr)(char* des, const char* src);
    ptr = mystrcat;
    char* str = ptr(dest, src);
    cout << str << endl;
}

void test09()
{
    union UNION_T {
        char a;
        int b;
    }data;
    data.b = 0x12345678;
    printf("%x\n", data.a);

    char* p = (char*)malloc(50);
    char buf[] = "abcdef";
    int n = strlen(buf);
    int i = 0;
    char* temp = p;
    for (i = 0; i < n; i++)
    {
        *p = buf[i];
        p++; //修改原指针指向
    }

    free(temp);
}

#pragma pack(4)

typedef struct _STUDENT {
    int a;
    char b;
    double c;
    float d;
}Student;

class Person
{
public:
    Person(){}
    ~Person() {
        cout << "析构" << endl;
    }
};

void test10()
{
    printf("sizeof Student:%d\n", sizeof(Student));
    Person* p = new Person[10];
    delete []p;

}

void test11()
{
    int arr[] = { 3,1,6,4,9,7,2,5,8,0 };
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printArr(arr, len);
}

int main()
{
    //test01();
    //test02();
    //test03();
    //test04();
    //test05();
    //test06();
    //test07();
    //test08();
    //test09();
    //test10();
    test11();
    return 0;
}
