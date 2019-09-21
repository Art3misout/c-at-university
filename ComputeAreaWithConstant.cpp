#include<iostream>
using namespace std;

int main()
{
	const double PI =3.1415926;
	
	double radius;
	cout<<"Enter a radius:";
	cin>>radius;
	
	double area = radius*radius*PI;
	
	cout<<"the area is";
	cout<<area<<endl;
	
	return 0;
}
