#include<iostream>
using namespace std;
int main()
{

    int a,b,m=0;
    cin>>a>>b;
    if(a>b)
    m=a;
    else
    m=b;
    while(1)
    {
        if(m%a==0&&m%b==0)
        {
            cout<<"the required LCM is"<<m;
            break;
        }m++;
    }
    return 0;
}

    
    
    
    
