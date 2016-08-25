#include<iostream>
using namespace std;
class Complex{
private:
	int i;
	int j;
	static int count;
public:
	Complex();
	//Complex(int);
	//Complex(int, int);
	Complex add(complex right);
        void Accept();
	void Display()const;
	//
static int Increase();
};
