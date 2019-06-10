// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class B
{
public:
	B();
	B(int i);
	~B();
	void print() const;
private:
	int b;
};
B::B()
{
	b = 0;
	cout << "B's default constructor called." << endl;
}
B::B(int i)
{
	b = i;
	cout << "B's constructor called." << endl;
}
B::~B()
{
	cout << "B's constructor called." << endl;
}
void B::print() const
{
	cout << b << endl;
}
class C :public B
{
public:
	C();
	C(int i, int j);
	~C();
	void print() const;
private:
	int c;
};
C::C()
{
	c = 0;
	cout << "C's default constructor called." << endl;
}
C::C(int i,int j):B(i),c(j)
{
	c = i;
	cout << "C's constructor called." << endl;
}
C::~C()
{
	cout << "C's constructor called." << endl;
}
void C::print() const
{
	B::print();
	cout << c << endl;
}
int main()
{
	C obj(5, 6);
	obj.print();
    return 0;
}

