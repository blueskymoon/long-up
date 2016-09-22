/*************************************************************************
    > File Name: kaobei.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年09月22日 星期四 12时59分33秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Array
{
	public:
	 Array();
	~Array();
	Array(const Array & arr);
	void setArray(int x);
	int getArray();
	private:
	int m_iX;
};

Array::Array()
{
	;
}
Array::~Array()
{
	;
}
Array::Array(const Array & arr)
{
	m_iX =arr.m_iX;
	cout<<"拷贝"<<endl;
}

void Array::setArray(int x)
{
	m_iX= x;
}
int Array::getArray()
{
	return m_iX;
}


int main(void)
{
	Array p1;
	p1.setArray(3);
	Array p2(p1);
	cout<<p1.getArray()<<"  "<<p2.getArray()<<endl;
	return 0;
}
