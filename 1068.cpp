#include<iostream>
using namespace std;
int main()
{
	int m,n,N,g=0;
	cin>>N>>m;
	for(int i=1;i<=N;i++){
		cin>>n;
		if(n==m) g++;
	}
    cout<<g<<endl;
    return 0;
 }
