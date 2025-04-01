#include <iostream>
using namespace std;

struct date{
	int day;
	int month;
	int year;
};

int main(){
	char date_bar = '/';
	date myDate;
	
	cout << "Enter a date: ";
	cin >> myDate.month >> date_bar >> myDate.day >> date_bar >> myDate.year;
	
	cout << "Your date is " << myDate.month << date_bar << myDate.day << date_bar << myDate.year << endl;
	
	return 0;
}