#include<iostream>
using namespace std;
int main(){
	int k,n=1;
	double s=1;
    cin>>k;
	do{
		n++;
		s+=1.0/n;
	}
	while(s<k);
	cout<<n<<endl;
	return 0;
}
