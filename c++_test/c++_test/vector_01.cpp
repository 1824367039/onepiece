#include "vector_rq.h"

void print_vector(vector<int> &v)
{
	for (vector<int>::iterator p = v.begin(); p != v.end(); p++)
	{
		cout << *p << ' ';
	}
	cout<<endl;

}

void input_01()
{
	//三种构造函数
	vector<int> v1;
	for (int i = 0; i < 7; i++) v1.push_back(i);
	print_vector(v1);

	vector<int> v2(8, 100);   //8个100
	print_vector(v2);

	vector<int> v3(v2.begin(), v2.end());
	print_vector(v3);
	
	//拷贝构造
	vector<int> v4(v1);
	print_vector(v4);
}

void input_02()
{
	

}