#include<iostream>
using namespace std;
int digit(int n,int k){
    int count=0,d;
   for(;n>0;n/=10){
      d=n%10;
     if(d==k)
        count++;
    }
    return count;
}
int main(){
 int b,arr[5]={11,12,13,14,15},i,k;
 cin>>k;
 int dcount =0;
 for(i=0;i<5;i++){
 dcount= dcount + digit(arr[i],k);
 }
 cout<<dcount<<endl;
return 0;
}
