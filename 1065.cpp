#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,g=0;
	cin>>a>>b;
	if(a%2==0) a++;
	for(a;a<=b;a+=2){
		g+=a;
	}
    cout<<g<<endl;
    return 0;
 }
