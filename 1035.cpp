#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a1,a2,n,an,a;
	cin>>a1>>a2>>n;
	a=a2-a1;
	an=(n-1)*a+a1;
	cout<<an<<endl;
	return 0;
}
