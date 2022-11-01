/*
STL ��׼ģ���standerd template library
�������㷨�����������º��������������ռ�������
*/

#include "vector_rq.h"


void test03()
{
    //����Ƕ������
    vector<vector<int>> v4;

    vector<int>vv1;
    vector<int>vv2;
    vector<int>vv3;
    vector<int>vv4;
    for (int i = 0; i < 5; i++)
    {
        vv1.push_back(i + 1);
        vv2.push_back(i + 2);
        vv3.push_back(i + 3);
        vv4.push_back(i + 4);
    }

    v4.push_back(vv1);
    v4.push_back(vv2);
    v4.push_back(vv3);
    v4.push_back(vv4);

    for (vector<vector<int>>::iterator it = v4.begin(); it != v4.end(); it++)
    {
        for (vector<int>::iterator itx = (*it).begin(); itx != (*it).end(); itx++)
        {
            cout << *itx << " ";
        }
        cout << endl;
    }


}

void test02()
{
    //����,��ָ��
    vector<Person> v2;
    vector<Person*> v3;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);

    v2.push_back(p1);
    v2.push_back(p2);
    v2.push_back(p3);
    v2.push_back(p4);
    v2.push_back(p5);

    v3.push_back(&p1);
    v3.push_back(&p2);
    v3.push_back(&p3);
    v3.push_back(&p4);
    v3.push_back(&p5);

    for (vector<Person>::iterator it = v2.begin(); it != v2.end(); it++)
    {
        cout << "����:" << (*it).m_name << "����:" << (*it).m_age << endl;
    }

    for (vector<Person*>::iterator itx = v3.begin(); itx != v3.end(); itx++)
    {
        cout << "����:" << (*itx)->m_name << "����:" << (*itx)->m_age << endl;
    }
}

void test01()
{
    vector<int> v;

    //��������������
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //ͨ��������������������
    vector<int>::iterator itBegin = v.begin();  //��ʼ������ ָ��������һ��Ԫ��
    vector<int>::iterator itEnd = v.end();      //ָ���������һ��Ԫ�ص���һ��λ��

    //��������
    for (; itBegin != itEnd; itBegin++)
    {
        cout << *itBegin << " ";
    }
}



