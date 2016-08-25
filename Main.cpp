#include "Complex.h"
int main(){
	Complex c1,c2;
	c1.Accept();
	c1.Display();
	c2.Display();
	Complex c3(5);
	c3.Display();
	Complex c4(11,22);
	c4.Display();
	Complex c5 = c3;
	c5.Display();
	Complex c6;
	c6 = c4;
	c6.Display();
	cout << Complex::Increase();

/*
	Complex c1[3];
	for(int i=0;i<3;i++){
	c1[i].Accept();
	}	
	for(int i=0;i<3;i++){
	c1[i].Display();
	}	
*/
/*	Complex* cp = new Complex;
	cp->Accept();
	cp->Display();
	delete cp;
*/
/*	Complex* cp = new Complex[3];
	for(int i=0; i<3; i++){
	cp[i].Accept();
}
	for(int i=0; i<3; i++){
	cp[i].Display();}
	delete []cp;
*/
	return 0;
}
