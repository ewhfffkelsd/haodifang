#include<iostream>
using namespace std;
int main()
{
	int m,n,g=0;
	int i;
	
	cin>>m>>n;
	for(i=m;i<=n;i++)
	   if(i%17==0) 
	   g+=i;
	   
    cout<<g<<endl;
    return 0;
 }
