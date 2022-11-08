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

void input_02()    //vector赋值
{

	vector<int> v1;
	for (int i = 0; i < 8; i++) v1.push_back(i);
	print_vector(v1);

	vector<int> v2;
	v2 = v1;
	print_vector(v2);

	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	print_vector(v3);
	
	vector<int> v4;
	v4.assign(4, 100); //4个100
	print_vector(v4);  //100 100 100 100
}

void input_03()  //vector 的容量和大小
{
	vector<int> v1;
	for (int i = 0; i < 6; i++) v1.push_back(i);
	print_vector(v1);   //0 1 2 3 4 5 

	int t1=v1.empty();  //v1为空的话为真
	int t2=v1.size();  //v1的大小   6  所含数据的大小
	int t3=v1.capacity();  //v1的容量    6   能存数据的大小
	cout << t3<<endl;

	v1.resize(10);   //指定大小为10   默认空的地方用0填充
	v1.resize(10,7);  //指定大小为10   空的地方用 7 填充
	v1.resize(5);   //如果重新指定的长度比原来的短则超出部分删除
}

void input_04()  //vector的插入和删除
{
	vector<int> v1;
	v1.push_back(20);   //尾部插入
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	print_vector(v1);

	v1.pop_back();    //尾部元素删除

	v1.insert(v1.begin(), 100);  //插入  在头部插入100
	v1.insert(v1.begin(),3,100); //插入  在头部插入3个100

	v1.erase(v1.begin());    //删除  删除头部数据
	v1.erase(v1.begin(),v1.end());  //从头到尾全部删除

	v1.clear();     //删除  全部清空
}

void input_05()     //vector 访问元素
{
	vector<int> v1;
	for (int i = 0; i < 6; i++) v1.push_back(i);

	for (int i = 0; i < v1.size(); i++)cout << v1[i]<<' '<< endl;

	for (int i = 0; i < v1.size(); i++) cout << v1.at(i)<<' '<< endl;

	cout << v1.front() << endl;    //获取第一个元素
	cout << v1.back() << endl;     //获取最后一个元素
}

void input_06()   //vector 容器的互换
{
	vector<int> v1;
	for (int i = 10; i >0; i--) v1.push_back(i);

	vector<int> v2;
	for (int i = 1; i < 11; i++) v2.push_back(i);

	v1.swap(v2);     //v1和v2互换

	vector<int>(v1).swap(v1);    //用swap收缩内存
	//v1.resize(5);   把v1大小变为5 但是容量不是  利用这个把容量也变成5
	//   ector<int>(v1)    .swap(v1)   匿名对象
}

void input_07()  //vector 预留空间
{
	//例如我们要在vector v1 里插入100000个数，他就会自动找新空间，那么我们可以一步到位一次就给他这么大空间他就只用移动一次
	vector<int> v1;
	int* p = NULL;
	int n = 0;   //记录被移动了多少次
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			n++;
		}
	}

	//一步到位 直接一次预留100000的空间
	v1.reserve(100000);

	
	
}