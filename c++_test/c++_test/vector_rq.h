#pragma once
#include <iostream>
#include <string>
#include <vector>     //����
#include <algorithm>  //��׼�㷨
using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        this->m_name = name;
        this->m_age = age;

    }
    string m_name;
    int m_age;
};

void test01();
void test02();
void test03();


