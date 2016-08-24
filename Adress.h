#include<iostream>
#include<string>
using namespace std;
class Address{
 private:
	string house_no;
	string street_name;
	string locality;
	string city;
	string state;
	int pin;
	string country;
 public:
	Address();
	Address(string, string, string, string, string, int, string);
	void set_house_no(string);
	string get_house_no();
	void set_street_name(string);
	string get_street_name();
	void set_locality(string);
	string get_locality();
	void set_city(string);
	string get_city();
	void set_state(string);
	string get_state();
	void set_pin(int);
	int get_pin();
	void set_country(string);
	string get_country();
	bool compare(Address);
};
