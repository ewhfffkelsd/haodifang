#include<iostream>
using namespace std;
int main(){
	int n,q=0,j=0,i=1;
	cin>>n;
	while(q<n){
		q=q+i;
		j+=i*i;
		i++;
	}
	j=j-(q-n)*(i-1);
	cout<<j;
	return 0;
}
