#include "deque_rq.h"

void print_deque(const deque<int>& d1)     //const  限定容器只读， 下面的const_iterator 用这个才行
{
	for (deque<int>::const_iterator it = d1.begin(); it != d1.end(); it++)
	{
		cout << *it << ' ';
	}
	cout << endl;

}

void dq_01()
{
	deque<int> d1;
	for (int i = 0; i < 8; i++) d1.push_back(i);
	print_deque(d1);

	deque<int> d2(d1.begin(), d1.end());
	print_deque(d2);

	deque<int> d3(10, 100);    //10个100
	print_deque(d3);

	
}

void dq_02()
{
	deque<int> d1;
	for (int i = 0; i < 8; i++) d1.push_back(i);
	print_deque(d1);

	deque<int> d2;
	d2 = d1;
	print_deque(d2);
	deque<int> d3;

	d3.assign(d1.begin(), d1.end());
	print_deque(d3);

	deque<int> d4;
	d4.assign(10, 100);
	print_deque(d4);
}

void dq_03()
{
	deque<int> d1;
	for (int i = 0; i < 8; i++) d1.push_back(i);
	print_deque(d1);

	if(d1.empty()){ }      //空为真
	d1.size();  //有大小没容量

	//重新指定大小
	d1.resize(10);   //指定大小为10   默认空的地方用0填充
	d1.resize(10, 7);  //指定大小为10   空的地方用 7 填充
	d1.resize(5);   //如果重新指定的长度比原来的短则超出部分删除



}

void dq_04()
{
	deque<int> d1;
	int i = 34;
	d1.push_back(i);   //尾部插入
	d1.push_front(i);  //头部插入
	d1.pop_back();  //删除最后一个元素
	d1.pop_front(); //删除第一个元素

	d1.insert(d1.end(), i); // 在头部插入元素i   ，返回新数据位置
	d1.insert(d1.begin(), 5, i);  //在头部插入5个元素i；  无返回
	d1.insert(d1.begin(), 3, 6);   //在头部位置插入 3-6区间的数包含3,6   无返回
	d1.insert(d1.begin()+1, i);    //在头部+1位置插入i     d1.begin()不能用数字代替

	d1.clear();  //清除容器数据

	d1.erase(d1.begin(), d1.begin()+3);  //删除这个区间数据
	d1.erase(d1.begin());  //删除这个位置的数据
}