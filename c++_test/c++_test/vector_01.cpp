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
	//���ֹ��캯��
	vector<int> v1;
	for (int i = 0; i < 7; i++) v1.push_back(i);
	print_vector(v1);

	vector<int> v2(8, 100);   //8��100
	print_vector(v2);

	vector<int> v3(v2.begin(), v2.end());
	print_vector(v3);
	
	//��������
	vector<int> v4(v1);
	print_vector(v4);
}

void input_02()    //vector��ֵ
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
	v4.assign(4, 100); //4��100
	print_vector(v4);  //100 100 100 100
}

void input_03()  //vector �������ʹ�С
{
	vector<int> v1;
	for (int i = 0; i < 6; i++) v1.push_back(i);
	print_vector(v1);   //0 1 2 3 4 5 

	int t1=v1.empty();  //v1Ϊ�յĻ�Ϊ��
	int t2=v1.size();  //v1�Ĵ�С   6  �������ݵĴ�С
	int t3=v1.capacity();  //v1������    6   �ܴ����ݵĴ�С
	cout << t3<<endl;

	v1.resize(10);   //ָ����СΪ10   Ĭ�Ͽյĵط���0���
	v1.resize(10,7);  //ָ����СΪ10   �յĵط��� 7 ���
	v1.resize(5);   //�������ָ���ĳ��ȱ�ԭ���Ķ��򳬳�����ɾ��
}

void input_04()  //vector�Ĳ����ɾ��
{
	vector<int> v1;
	v1.push_back(20);   //β������
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	print_vector(v1);

	v1.pop_back();    //β��Ԫ��ɾ��

	v1.insert(v1.begin(), 100);  //����  ��ͷ������100
	v1.insert(v1.begin(),3,100); //����  ��ͷ������3��100

	v1.erase(v1.begin());    //ɾ��  ɾ��ͷ������
	v1.erase(v1.begin(),v1.end());  //��ͷ��βȫ��ɾ��

	v1.clear();     //ɾ��  ȫ�����
}

void input_05()     //vector ����Ԫ��
{
	vector<int> v1;
	for (int i = 0; i < 6; i++) v1.push_back(i);

	for (int i = 0; i < v1.size(); i++)cout << v1[i]<<' '<< endl;

	for (int i = 0; i < v1.size(); i++) cout << v1.at(i)<<' '<< endl;

	cout << v1.front() << endl;    //��ȡ��һ��Ԫ��
	cout << v1.back() << endl;     //��ȡ���һ��Ԫ��
}

void input_06()   //vector �����Ļ���
{
	vector<int> v1;
	for (int i = 10; i >0; i--) v1.push_back(i);

	vector<int> v2;
	for (int i = 1; i < 11; i++) v2.push_back(i);

	v1.swap(v2);     //v1��v2����

	vector<int>(v1).swap(v1);    //��swap�����ڴ�
	//v1.resize(5);   ��v1��С��Ϊ5 ������������  �������������Ҳ���5
	//   ector<int>(v1)    .swap(v1)   ��������
}

void input_07()  //vector Ԥ���ռ�
{
	//��������Ҫ��vector v1 �����100000���������ͻ��Զ����¿ռ䣬��ô���ǿ���һ����λһ�ξ͸�����ô��ռ�����ֻ���ƶ�һ��
	vector<int> v1;
	int* p = NULL;
	int n = 0;   //��¼���ƶ��˶��ٴ�
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			n++;
		}
	}

	//һ����λ ֱ��һ��Ԥ��100000�Ŀռ�
	v1.reserve(100000);

	
	
}