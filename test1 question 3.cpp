#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	//declaring the variable
	double grosssalary,netsalary;
	float paye;
	cout << "THIS IS A PROGRAM THAT CALCULATES THE NET SALARY OF EVERY EMPLOYEE AFTER TAX DEDUCTION\n";
	cout << "THE GROSS SALARY OF EVERY EMPLOYEE = 10,000.00\n";
	cout <<"THE PAYE TAX HAS BEEN REVISED FROM 30% TO 25% DUE TO COVID 19\n";
	//initializizng the variables
	grosssalary=10000;
	
	paye=grosssalary*25/100;//formula for paye
	netsalary=grosssalary-paye;//formular for net salary
	cout << "THE PAYE TAX=" <<paye <<endl;
	cout<<"THE NET SALARY AFTER TAX DEDUCTION=" <<netsalary <<endl;//outputing the results
	return 0;
}
