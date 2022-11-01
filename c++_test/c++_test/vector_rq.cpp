/*
STL 标准模板库standerd template library
容器，算法，迭代器，仿函数，适配器，空间配置器
*/

#include "vector_rq.h"


void test03()
{
    //容器嵌套容器
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
    //存类,类指针
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
        cout << "姓名:" << (*it).m_name << "年龄:" << (*it).m_age << endl;
    }

    for (vector<Person*>::iterator itx = v3.begin(); itx != v3.end(); itx++)
    {
        cout << "姓名:" << (*itx)->m_name << "年龄:" << (*itx)->m_age << endl;
    }
}

void test01()
{
    vector<int> v;

    //向容器插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //通过迭代器访问容器数据
    vector<int>::iterator itBegin = v.begin();  //起始迭代器 指向容器第一个元素
    vector<int>::iterator itEnd = v.end();      //指向容器最后一个元素的下一个位置

    //遍历容器
    for (; itBegin != itEnd; itBegin++)
    {
        cout << *itBegin << " ";
    }
}



