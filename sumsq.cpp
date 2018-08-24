#include<math.h>
#include<iostream>

using namespace std;
int main(){
    int sum=0,i,j,N,T,k=1;
    cin>>T;
    for(i=0;i<T;i++){
        cin>>N;
        sum=0;
        for(j=2;j<=2*N;j=j+2){
            
            
            sum=sum+ j*j;
            
        }
         cout<<sum<<endl;
    }return 0;
}