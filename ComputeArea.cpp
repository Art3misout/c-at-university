#include<iostream>
using namespace std;

int main()
{
	double radius;
	double area;
	
	//Step1: read in radius
	radius=20;
	
	//Step2:Compute area
	area = radius*radius*3.14159;
	
	//Step3:Display the area
	cout<<"The area is"<<area<<endl;
	
	return 0;
}
