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
	string s1 = "��";
	s1 += "Ҫshake";
	cout << s1 << endl; //��Ҫshake
	string s2 = "andjk";
	s1.append("andjk", 3);//��Ҫshakeand
	//s1.append(s2, 3);   //��Ҫshakejk
	cout << s1 << endl; 

}

void string_04()
{
	//����
	string s1 = "abcdhj";
	//int ps = s1.find("b"); //ps=1;�ҵ������±꣬û�ҵ�����-1  �������ַ�Ҳ�������ַ��� �������Ҳ���
	//int ps1=s1.rfind("b");    //��find() ��ֻ࣬�������Ǵ�������
	//cout << ps<<endl;
	//�滻
	s1.replace(1, 3, "safff");     //���±�1��ʼ�滻����λ�õĵط�Ϊsafff
	cout << s1 << endl;       //asafffhj


}

void string_05()
{
	//�Ƚϴ�С
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
	//string �� ȡ
	string s1 = "hello";
	cout << s1[0]<<endl;  //h
	cout << s1.at(0) << endl; //h
	s1[0] = 'x';   //xello
	s1.at(0) = 'x';
}

void string_07()
{
	//���� ɾ��
	string s1 = "hello";
	s1.insert(2, "xx");    //�±�2��λ�ÿ�ʼ����xx     hexxllo
	s1.erase(2,3);    //�±�2��λ�ÿ�ʼɾ��3��
	cout << s1<<endl;

}

void string_08()
{
	//��ȡ�Ӵ�
	string s1 = "hello";
	string s2=s1.substr(1, 3);    //s2=ell  ���±�1��ʼ��ȡ3��
	cout << s2 << endl;

}