/*************************************************************************
    > File Name: line.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年09月19日 星期一 17时03分38秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Coordinate
{
	public:
		Coordinate(int x,int y);
		~Coordinate();
		void setX(int x);
		int getX();
		void setY(int y);
		int getY();
	private:
		int m_iX;
		int m_iY;
};

class Line
{
	public:
		Line(int x1,int y1,int x2,int y2);
		~Line();
		void setA(int x,int y);
		void setB(int x,int y);
		void printInfo();
	private:
		Coordinate m_coorA;
		Coordinate m_coorB;
};
Line::Line(int x1,int y1,int x2,int y2):m_coorA(x1,y1),m_coorB(x2,y2)
{

	cout<<"Line()"<<endl;
}
Line::~Line()
{
	cout<<"~Line()"<<endl;

}

void Line::setA(int x,int y)
{
	m_coorA.setX(x);
	m_coorA.setY(y);
}

void Line::printInfo()
{
	cout<<"("<<m_coorA.getX() <<"," <<m_coorA.getY()<<")"<<endl;
	cout<<"("<<m_coorB.getX() <<", "<<m_coorB.getY()<<")"<<endl;
}


Coordinate::Coordinate(int x,int y)
{
	m_iX=x;
	m_iY=y;
	cout<<"Coordinate()"<<m_iX<<" "<<m_iY<<endl;
}

Coordinate::~Coordinate()
{
	cout<<"~Coordinate()"<<m_iX<<" "<<m_iY<<endl;
}

void Coordinate::setX(int x)
{
	m_iX=x;
}
int Coordinate::getX()
{
	return m_iX;
}

void Coordinate::setY(int y)
{
	m_iY=y;
}

int Coordinate::getY()
{
	return m_iY;
}



int main(void)
{
	Line *p = new Line(1,2,3,4);
	p->printInfo();
	delete p;
	p=NULL;
	return 0;
}
