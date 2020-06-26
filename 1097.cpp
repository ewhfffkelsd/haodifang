#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    bool x;
    int i,j;
    cin>>a>>b;
    cin>>c;
    cin>>x;
    if(x==1)
    {
        for(i=1; i<=a; i++)
        {
            for(j=1; j<=b; j++)   cout<<c;
            cout<<endl;
        }
    }
    else
    {
        for(i=1; i<=a; i++)
        {
            for(j=1; j<=b; j++)
            {
                if((i==1)||(i==a)||(j==1)||(j==b))
                    cout<<c;
                else
                    cout<<" ";
            }
            cout<<endl;
        }
    }
    cout<<endl;
    return 0;
}
