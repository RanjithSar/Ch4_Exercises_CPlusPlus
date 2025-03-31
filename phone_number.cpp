#include <iostream>
using namespace std;

struct phone{
	int area_code;
	int exchange;
	int number;
};

int main(){
	phone myNum;
	myNum.area_code = 212;
	myNum.exchange = 767;
	myNum.number = 8900;
	
	phone userNum;
	cout << "Enter your area code, exchange, and number: ";
	cin >> userNum.area_code >> userNum.exchange >> userNum.number;
	
	cout << "My number is (" << myNum.area_code << ") " << myNum.exchange << "-" << myNum.number << endl;
	cout << "Your number is (" << userNum.area_code << ") " << userNum.exchange << "-" << userNum.number << endl;
}