#include<iostream>
using namespace std;
long long factorial(long long);

int main()
{
	cout<<"Please enter an non-negative integer:";
	long long n;
    cin>>n;
    if(n<0) return 1;
	
	//Display factorial
	cout<<"Factorial of "<<n<<" is "<<factorial(n);
	
	return 0;
}

long long factorial(long long n)
{
	if(n==0)
	     return 1;
	  else
	   return n*factorial(n-1);
}
