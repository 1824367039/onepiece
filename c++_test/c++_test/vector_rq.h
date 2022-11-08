#pragma once
#include <iostream>
#include <string>
#include <vector>     //容器
#include <algorithm>  //标准算法
using namespace std;
/*vector和数组 类似 
但是数组长度是确定的，而vector 长度是可以变化的
vecor的动态长度变化不是在其原有位置改变，而赋值到一段新空间
*/
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
void input_01();
void input_02();
void input_03();
void input_04();
void input_05();
void input_06();
void input_07();


