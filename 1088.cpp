#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long int n;
	cin>>n;
	do{
		cout<<n%10<<" ";
		n/=10;
	}
	while(n!=0);
    return 0;
}
