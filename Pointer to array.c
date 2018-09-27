#include<iostream>
using namespace std ;
int main(){
    int *a,n,big,i,j;
    cin>>n;
    a=new int [n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    big=a[0];
    for(j=0;j<n;j++)
    {
        if(big<a[j])
        {
            big=a[j];
        }
    }
    cout<<big;
}