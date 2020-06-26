#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	long int n,p=0,a;
	cin>>n;
	a=(int)(sqrt(n));
    for(int i=1;i<=a;i++){
    	if(n%i==0) p=i;
	}
	cout<<n/p;
	return 0;
}
