#include<iostream>
using namespace std;
int main(){
    int i,T,A,B;
    cin>>T;
    for(i=0;i<=T;i++){
        cin>>A>>B;
        if(A>B)
        cout<<A<<" is greater than "<<B<<endl;
        else if(A<B)
        cout<<A<<" is less than "<<B<<endl;
        else
        cout<<A<<" is equal to "<<B<<endl;
    }
        return 0;
        
    
}