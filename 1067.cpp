#include<iostream>
using namespace std;
int main()
{
	int m,n,g=0,o=0,p=0;
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>n;
		if(n==1) g++;
		if(n==5) o++;
		if(n==10) p++;
	}
    cout<<g<<endl;
    cout<<o<<endl;
    cout<<p<<endl;
    return 0;
 }
