#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x1,x2,x3,x4,y1,y2,y3,y4,a,b,c,d;
    cout<<"enter the number x1,x2,x3,x4 and y1,y2,y3,y4";
    cin>>x1>>x2>>x3>>x4>>y1>>y2>>y3>>y4;
    a=sqrt(((x1-x2)^2)+((y1-y2)^2));
    b=sqrt(((x2-x3)^2)+((y2-y3)^2));
    c=sqrt(((x3-x4)^2)+((y3-y4)^2));
    d=sqrt(((x4-x1)^2)+((y4-y1)^2));
    if(b==c==d==a){
        cout<<"it's square";

    }else
    cout<<"not square";
    return 0;


}
 
 

    
    
