#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,a;
	int g=0;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a;
		if(a>=g) g=a;
}
    cout<<g<<endl;
    return 0;
 }
