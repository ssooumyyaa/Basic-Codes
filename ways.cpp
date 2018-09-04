#include"factorial.h"
#include<iostream>

using namespace std;
 
int main()
{
   int x1,y1,x2,y2,U,R;
   cout<<"enter coordinate of starting point";
   cin>>x1>>y1;
   cout<<"enter coordinate of end point";
   cin>>x2>>y2;
    (x1>x2)?U=x1-x2:U=x2-x1;
    (y1>y2)?R=y1-y2:R=y2-y1;

    int nofways= fact(U,R);
    cout<<nofways<<endl;
    return 0;
    }
  
