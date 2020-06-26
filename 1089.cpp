#include<bits/stdc++.h>
using namespace std;
int main(){
	long int n,a,m=0;
	cin>>n;
	if(n<0){
		n=0-n;
		cout<<"-";
	}
	do{
			m=m*10+n%10;
			n/=10;
		}
		while(n!=0);
		cout<<m<<endl;
	return 0;
}
