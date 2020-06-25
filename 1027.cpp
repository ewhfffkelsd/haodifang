#include<iostream> 
#include<cstdio>
using namespace std;
int main(){
	char a;
	int b;
	float c;
	double d;
	cin>>a>>b>>c>>d;
	cout<<a<<" "<<b<<" ";
	printf("%.6f ",c);
	printf("%.6lf\n",d);
	return 0;
}
