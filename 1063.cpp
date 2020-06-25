#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,a[1000];
	int g=0,f=1000;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		if(a[i]>g) 
		g=a[i];
		if(a[i]<f)
		f=a[i];
}
    cout<<g-f<<endl;
    return 0;
 }
