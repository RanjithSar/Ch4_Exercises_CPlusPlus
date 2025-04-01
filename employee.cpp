#include <iostream>
#include <iomanip>
using namespace std;

struct employee{
	int emp_num;
	float compensation;
};

int main(){
	employee emp1, emp2, emp3;
	cout << "Enter number and compensation for employee 1: ";
	cin >> emp1.emp_num >> emp1.compensation;
	cout << "Enter number and compensation for employee 2: ";
	cin >> emp2.emp_num >> emp2.compensation;
	cout << "Enter number and compensation for employee 3: ";
	cin >> emp3.emp_num >> emp3.compensation;
	
	cout << "Data for employee 1:" << endl;
	cout << "Number: " << emp1.emp_num << endl;
	cout << "Compensation: " << fixed << setprecision(2) << emp1.compensation << endl;
	
	cout << "Data for employee 2:" << endl;
	cout << "Number: " << emp2.emp_num << endl;
	cout << "Compensation: " << fixed << setprecision(2) << emp2.compensation << endl;
	
	cout << "Data for employee 3:" << endl;
	cout << "Number: " << emp3.emp_num << endl;
	cout << "Compensation: " << fixed << setprecision(2) << emp3.compensation << endl;
	
	return 0;
	
}