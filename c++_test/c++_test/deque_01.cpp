#include "deque_rq.h"

void print_deque(const deque<int>& d1)     //const  �޶�����ֻ���� �����const_iterator ���������
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

	deque<int> d3(10, 100);    //10��100
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

	if(d1.empty()){ }      //��Ϊ��
	d1.size();  //�д�Сû����

	//����ָ����С
	d1.resize(10);   //ָ����СΪ10   Ĭ�Ͽյĵط���0���
	d1.resize(10, 7);  //ָ����СΪ10   �յĵط��� 7 ���
	d1.resize(5);   //�������ָ���ĳ��ȱ�ԭ���Ķ��򳬳�����ɾ��



}

void dq_04()
{
	deque<int> d1;
	int i = 34;
	d1.push_back(i);   //β������
	d1.push_front(i);  //ͷ������
	d1.pop_back();  //ɾ�����һ��Ԫ��
	d1.pop_front(); //ɾ����һ��Ԫ��

	d1.insert(d1.end(), i); // ��ͷ������Ԫ��i   ������������λ��
	d1.insert(d1.begin(), 5, i);  //��ͷ������5��Ԫ��i��  �޷���
	d1.insert(d1.begin(), 3, 6);   //��ͷ��λ�ò��� 3-6�����������3,6   �޷���
	d1.insert(d1.begin()+1, i);    //��ͷ��+1λ�ò���i     d1.begin()���������ִ���

	d1.clear();  //�����������

	d1.erase(d1.begin(), d1.begin()+3);  //ɾ�������������
	d1.erase(d1.begin());  //ɾ�����λ�õ�����
}