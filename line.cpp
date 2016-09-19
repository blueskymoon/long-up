/*************************************************************************
    > File Name: line.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年09月19日 星期一 17时03分38秒
 ************************************************************************/



#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;



class Coordinate
{
	public:
	Coordinate();
	~Coordinate();
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
	private:
	int m_iX;
	int m_iY;
};
class Line
{
	public:
	Line();
	~Line();
	void setA(int x,int y);
	void setB(int x,int y);
	void printInfo();
	private:
	Coordinate m_coorA;
	Coordinate m_coorB;

};


Line::Line()
{

	cout<<"Line()"<<endl;
}
Line::~Line()
{
	cout<<"~Line"<<endl;
}

void Line::setA(int x,int y)
{
	m_coorA.setX(x);
	m_coorA.setY(y);
	cout<<"Line::setA(int x ,int y)"<<endl;
}
void Line::setB(int x,int y)
{
	m_coorB.setX(x);
	m_coorB.setY(y);
	cout<<"Line::setB(int x,int y)"<<endl;
}
Coordinate::Coordinate()
{
	cout<<"Coordinate()"<<endl;
}

Coordinate::~Coordinate()
{
	cout<<"~Coordinate()"<<endl;
}

void Coordinate::setX(int x)
{
	m_iX=x;
}
void Coordinate::setY(int y)
{
	m_iY=y;
}

int Coordinate::getX()
{
	return m_iX;
}

int Coordinate::getY()
{
	return m_iY;
}

void Line::printInfo()
{
	cout<<m_coorA.getX()<<" "<<m_coorA.getY()<<" "<<endl;
	cout<<m_coorB.getX()<<" "<<m_coorA.getY()<<" "<<endl;
}


int main(void)
	{
		Line *p = new Line();
		
	//	printInfo();
		delete p;
		p=NULL;
		return 0;
	}
