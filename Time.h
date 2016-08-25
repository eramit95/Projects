#include<iostream>
using namespace std;
class Time{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		Time();
		Time(int,int,int);
		~Time();
		void display();
		bool compare(Time);
		void difference(Time);
};
