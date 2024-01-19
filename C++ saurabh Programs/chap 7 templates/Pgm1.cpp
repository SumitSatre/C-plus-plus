//pgm to define a template class having template type. This class has a data member //which is a 1d array of template type,we must dyanamically allocate RAM memory for //the array and find sum of all elements in the array
#include<iostream>
using namespace std;

template<class T>
class Array1
{
	T *arr1;
	int n;

	public:
	Array1();
	void display();
	T sum();
};


template<class T>
Array1<T>::Array1()
{
	cout<<"\n Enter how many values to be stored into array:";
	cin>>n;

	arr1=new T[n];
	cout<<"\n Enter the "<<n<<" number of values:";
	int i;
	for(i=0;i<=n-1;i++)
	{
		cin>>arr1[i];

	}
	

}
/*
When we write definitions of the member functions of a template class or generic class outside the class definition using ::, then we need to again rewrite the statement template<class T> above definition of each member function. Also we need to write <T> inside <>, everytime we write the name of classsdefinition of class Array1 above, because now class definition name Array1 is associated with template type T. But we have not written the <T> aftre 2nd Array1 after :: because 2nd Array1 represents constructor name and not name of class definition.


*/

template<class T>
void Array1<T>::display()
{
	
	cout<<"\n The "<<n<<" number of values are:";
	int i;
	for(i=0;i<=n-1;i++)
	{
		cout<<arr1[i]<<",";

	}
	

}


template<class T>
T Array1<T>::sum()
{
	
	T s=0;
	int i;
	for(i=0;i<=n-1;i++)
	{
		s=s+arr1[i];

	}
	
	delete arr1;

	
	return s;
}


int main()
{
	cout<<"\n Processing object with int array:";
	Array1<int>a1;
	a1.display();
	int s1=a1.sum();
	cout<<"\n The addition of all numbers is "<<s1;


	cout<<"\n Processing object with float array:";
	Array1<float>a2;
	a2.display();
	float s2=a2.sum();
	cout<<"\n The addition of all numbers is "<<s2;

	return 0;
}