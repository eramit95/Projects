#include "Address.h"
	Address::Address(){}
	Address::Address(string house_no, string street_name, string locality, string city, string state, int pin, string country){
	this->house_no = house_no;
	this->street_name = street_name;
	this->locality = locality;
	this->city = city;
	this->state = state;
	this->pin = pin;
	this->country = country;
} 
	
	
	

	void Address::set_house_no(string house_no){
		this->house_no = house_no;
	}
	void Address::set_street_name(string street_name){
		this->street_name = street_name;
	}
	void Address::set_locality(string locality){
		this->locality = locality;
	}
	void Address::set_city(string city){
		this->city = city;
	}
	void Address::set_state(string state){
		this->state = state;
	}
	void Address::set_pin(int pin){
		this->pin = pin;
	}
	void Address::set_country(string country){
		this->country = country;
	}
	string Address::get_house_no(){
		return house_no;
	}
	string Address::get_street_name(){
		return street_name;
	}
	string Address::get_locality(){
		return locality;
	}
	string Address::get_city(){
		return city;
	}
	string Address::get_state(){
		return state;
	}
	int Address::get_pin(){
		return pin;
	}
	string Address::get_country(){
		return country;
 	}
	bool Address::compare(Address a){
		if((this->house_no==a.get_house_no())&&(this->street_name == a.get_street_name())&&(this->locality == a.get_locality())&&(this->city == a.get_city())&&(this->state == a.get_state())&&(this->pin==a.get_pin())&&(this->country==a.get_country()))
		return true;
		else{
			return false;
		}
	}
