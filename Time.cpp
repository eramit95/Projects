#include "Time.h"
Time::Time(){

}
Time::Time(int hours,int minutes,int seconds){
	this->hours = hours;
	this->minutes = minutes;
	this->seconds = seconds;
}
Time::~Time(){
	cout<<"Destructor is called:";
}
void Time::display(){
	cout<<"time is:"<<endl;
	cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}
bool Time::compare(Time old){
	return (hours==old.hours)&&(minutes==old.minutes)&&(seconds==old.seconds);
}
void Time::difference(Time old){
	int h,m,s;

	if(hours>old.hours){
		if(minutes>old.minutes){
			if(seconds>old.seconds){
				cout<<"time diff is:"<<hours-old.hours<<":"<<minutes-old.minutes<<":"<<seconds-old.seconds<<endl;				
			}
			else if(seconds==old.seconds){
				cout<<"time diff is:"<<hours-old.hours<<":"<<minutes-old.minutes<<":"<<0<<endl;
			}
			else if(seconds<old.seconds){
				cout <<"time diff is:" << hours-old.hours <<":" <<minutes-old.minutes-1 <<":" << 60+(seconds-old.seconds)<<endl;
			}
		}
		else if(minutes=old.minutes){
			if(seconds>old.seconds){
				cout<<"time diff is:"<<hours-old.hours<<":"<<0<<":"<<seconds-old.seconds<<endl;				
			}
			else if(seconds==old.seconds){
				cout<<"time diff is:"<<hours-old.hours<<":"<<0<<":"<<0<<endl;
			}
			else if(seconds<old.seconds){
				cout <<"time diff is:" << hours-old.hours <<":" <<59<<":" << 60+(seconds-old.seconds)<<endl;
			}
		}
		
		else if(minutes<old.minutes){
			if(seconds>old.seconds){
				cout<<"time diff is:"<<hours-old.hours-1<<":"<<60+(minutes-old.minutes)<<":"<<seconds-old.seconds<<endl;				
			}
			else if(seconds==old.seconds){
				cout<<"time diff is:"<<hours-old.hours-1<<":"<<60+(minutes-old.minutes)<<":"<<0<<endl;
			}
			else if(seconds<old.seconds){
				cout <<"time diff is:" << hours-old.hours <<":" <<59+(minutes-old.minutes-1) <<":" << 60+(seconds-old.seconds)<<endl;
			}
		}
	}
	else if(hours==old.hours){
		if(minutes>old.minutes){
			if(seconds>old.seconds){
				cout<<"time diff is:"<<0<<":"<<minutes-old.minutes<<":"<<seconds-old.seconds<<endl;				
			}
			else if(seconds==old.seconds){
				cout<<"time diff is:"<<0<<":"<<minutes-old.minutes<<":"<<0<<endl;
			}
			else if(seconds<old.seconds){
				cout <<"time diff is:" << 0 <<":" <<minutes-old.minutes-1 <<":" << 60+(seconds-old.seconds)<<endl;
			}
		}
		else if(minutes=old.minutes){
			if(seconds>old.seconds){
				cout<<"time diff is:"<<0<<":"<<0<<":"<<seconds-old.seconds<<endl;				
			}
			else if(seconds==old.seconds){
				cout<<"time diff is:"<<0<<":"<<0<<":"<<0<<endl;
			}
			else if(seconds<old.seconds){
				cout <<"time diff is:" << 0 <<":" <<59<<":" << 60+(seconds-old.seconds)<<endl;
			}
		}
		
		else if(minutes<old.minutes){
			if(seconds>old.seconds){
				cout<<"time diff is:"<<0<<":"<<60+(minutes-old.minutes)<<":"<<seconds-old.seconds<<endl;				
			}
			else if(seconds==old.seconds){
				cout<<"time diff is:"<<0<<":"<<60+(minutes-old.minutes)<<":"<<0<<endl;
			}
			else if(seconds<old.seconds){
				cout <<"time diff is:" << 0 <<":" <<59+(minutes-old.minutes-1) <<":" << 60+(seconds-old.seconds)<<endl;
			}
		}
	
	
	}

	else if(hours<old.hours){
		if(minutes>old.minutes){
			if(seconds>old.seconds){
				cout<<"time diff is:"<<1+(hours-old.hours)<<":"<<minutes-old.minutes<<":"<<seconds-old.seconds<<endl;				
			}
			else if(seconds==old.seconds){
				cout<<"time diff is:"<<hours-old.hours+1<<":"<<minutes-old.minutes<<":"<<0<<endl;
			}
			else if(seconds<old.seconds){
				cout <<"time diff is:" << 1+hours-old.hours <<":" <<minutes-old.minutes-1 <<":" << 60+(seconds-old.seconds)<<endl;
			}
		}
		else if(minutes=old.minutes){
			if(seconds>old.seconds){
				cout<<"time diff is:"<<hours-old.hours+1<<":"<<0<<":"<<seconds-old.seconds<<endl;				
			}
			else if(seconds==old.seconds){
				cout<<"time diff is:"<<hours-old.hours+1<<":"<<0<<":"<<0<<endl;
			}
			else if(seconds<old.seconds){
				cout <<"time diff is:" << hours-old.hours+1 <<":" <<59<<":" << 60+(seconds-old.seconds)<<endl;
			}
		}
		
		else if(minutes<old.minutes){
			if(seconds>old.seconds){
				cout<<"time diff is:"<<hours-old.hours+1<<":"<<60+(minutes-old.minutes)<<":"<<seconds-old.seconds<<endl;				
			}
			else if(seconds==old.seconds){
				cout<<"time diff is:"<<hours-old.hours+1<<":"<<60+(minutes-old.minutes)<<":"<<0<<endl;
			}
			else if(seconds<old.seconds){
				cout <<"time diff is:" << hours-old.hours+1 <<":" <<59+(minutes-old.minutes-1) <<":" << 60+(seconds-old.seconds)<<endl;
			}
		}

	}
}
