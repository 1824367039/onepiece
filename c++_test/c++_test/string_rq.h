#pragma once
/*string ��һ����*/
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
	//֮���Կ���ֱ�ӵ���  ������string_01ԭ�μ� =������operator
	string s1;
	s1 = "the good boy";
	cout << "1:" << s1 << endl;

	string s2 = s1;
	cout << "2:" << s2 << endl;

}

void string_03()
{
	//string ��ƴ��

}