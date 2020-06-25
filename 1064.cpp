#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,a,b,c,d;
	int g=0,f=0,h=0;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a>>b>>c;
		g+=a;
		f+=b;
		h+=c;
		d=g+f+h;
}
    cout<<g<<" "<<f<<" "<<h<<" "<<d<<endl;
    return 0;
 }
