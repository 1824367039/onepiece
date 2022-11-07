#pragma once
/*string 是一个类*/
#include <iostream>
#include <string>
#include <vector>     
#include <algorithm>  
using namespace std;

void string_01()
{
	const char* str = "the very is buteaful";
	string s1(str);
	cout << "1:" << s1<<endl;

	string s2(s1);
	cout <<"2:"<< s2<<endl;

	string s3(10, 'a');
	cout << "3:" << s3 << endl;

}

void string_02()
{
	//之所以可以直接等于  是利用string_01原形加 =的重载operator
	string s1;
	s1 = "the good boy";
	cout << "1:" << s1 << endl;

	string s2 = s1;
	cout << "2:" << s2 << endl;

}

void string_03()
{
	//string 的拼接
	string s1 = "我";
	s1 += "要shake";
	cout << s1 << endl; //我要shake
	string s2 = "andjk";
	s1.append("andjk", 3);//我要shakeand
	//s1.append(s2, 3);   //我要shakejk
	cout << s1 << endl; 

}

void string_04()
{
	//查找
	string s1 = "abcdhj";
	//int ps = s1.find("b"); //ps=1;找到返回下标，没找到返回-1  可以是字符也可以是字符串 从左向右查找
	//int ps1=s1.rfind("b");    //和find() 差不多，只不过他是从右向左
	//cout << ps<<endl;
	//替换
	s1.replace(1, 3, "safff");     //从下标1开始替换三个位置的地方为safff
	cout << s1 << endl;       //asafffhj


}

void string_05()
{
	//比较大小
	string s1 = "sdf";
	string s2 = "ghj";
	int ps = s1.compare(s2);
	cout << ps << endl; //1    
	//s1>s2   1
	//s1=s2   0
	//s1<s2   -1
}

void string_06()
{
	//string 存 取
	string s1 = "hello";
	cout << s1[0]<<endl;  //h
	cout << s1.at(0) << endl; //h
	s1[0] = 'x';   //xello
	s1.at(0) = 'x';
}

void string_07()
{
	//插入 删除
	string s1 = "hello";
	s1.insert(2, "xx");    //下标2的位置开始插入xx     hexxllo
	s1.erase(2,3);    //下标2的位置开始删除3个
	cout << s1<<endl;

}

void string_08()
{
	//截取子串
	string s1 = "hello";
	string s2=s1.substr(1, 3);    //s2=ell  从下标1开始截取3个
	cout << s2 << endl;

}