#pragma once
#include <iostream>
#include <string>
#include <vector>     //����
#include <algorithm>  //��׼�㷨
using namespace std;
/*vector������ ���� 
�������鳤����ȷ���ģ���vector �����ǿ��Ա仯��
vecor�Ķ�̬���ȱ仯��������ԭ��λ�øı䣬����ֵ��һ���¿ռ�
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


