#include "Address.h"
int main(){
	Address Akshay("176", "14/4", "Vikas Nagar", "Neemuch", "MP", 458441, "INDIA");
	Address Amit("32","C-Block","Pashupati Nagar","Kanpur","UP",208021,"India");
	Address test("a","b","c","d","e",1,"f");
	if(Amit.compare(test)){
		cout << "Address Matches to Amit" << endl;
	}
	else if(Akshay.compare(test)){ 
		cout << "Address Matches to Akshay"<<endl;
	}
	else{ 
		cout << "Address Matches to no one..." << endl;
	}
	return 0;
}
