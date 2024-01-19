//accept and display details for multiple employees
#include<iostream>

using namespace std;

class Employee
{
	char ename[100];
	int eid;
	float esalary;

	public:
	void acc_employee();
	void display_employee();

};

void Employee::acc_employee()
{
	cout<<"\n Enter the employee name:";
	cin.ignore();
	cin.getline(ename,100);

	cout<<"\n Enter the employee id:";
	cin>>eid;

	cout<<"\n Enter the employee salary:";
	cin>>esalary;


}

void Employee::display_employee()
{
	cout<<"\n The employee name is "<<ename<<"\n The employee id is "<<eid<<"\n The employee salary is "<<esalary;

}

int main()
{
	Employee arr1[20];
/*
In the above statement, 20 objects of class Employee will be allocated consecutively in RAM memory one after the other and the name assigned by Cpp compiler to the entire RAM memory block containing 20 objects of class Employee is the name of the 1d array mentioned above arr1. So arr1 will be name of the 1d array having capacity 20 objects of class Employee.

*/
	int i,n;

	cout<<"\n Enter for how many employees do you want to store the details. The maximum number is 20:";
	cin>>n;

	cout<<"\n Enter the details for the "<<n<<" number of employees:";
	for(i=0;i<=n-1;i++)
	{
		arr1[i].acc_employee();

	}
/*
During each new execution of the above for loop, we are calling the acc_employee() member function of class Employee on the object of class Employee located at index equal to value of i variable of the for loop.

*/
	cout<<"\n The details for the "<<n<<" number of employees are:";
	for(i=0;i<=n-1;i++)
	{
		arr1[i].display_employee();

	}


	return 0;
}