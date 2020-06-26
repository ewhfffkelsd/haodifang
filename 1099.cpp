#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n,i,j,p=0;
	cin>>n;
    for(i=2;; i++){
   	    for(j=2; j<=sqrt(i)&&i%j!=0; j++);
   		if(j>sqrt(i)){
		    p++;
		    if(p==n){
		    	cout<<i<<endl;
		    	break;
			}
		}
   	}
	
	return 0;
}
