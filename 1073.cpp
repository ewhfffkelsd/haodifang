#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,r;
	double a,b,s1,s2,time;
	cin>>n;
	s2=0;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>r;
		s1=2*sqrt(a*a+b*b);
		s2=s2+s1/50+r*1+r*0.5;
	}
	time=ceil(s2);
	cout<<time<<endl;
	return 0;
}
