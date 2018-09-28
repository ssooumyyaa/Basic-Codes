#include<iostream>
using namespace std;
int remove_duplicate(int[],int);
int main(){
   int T;
   cin>>T;
   while(T--)
   {
       int N;
       cin>>N;
       int a[N];
       for(int i =0;i<N;i++)
       {
           cin>>a[i];
       }
       int n =remove_duplicate(a,N);
       for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
       cout<<endl;
   }
}
int remove_duplicate(int A[],int N)
{ if(N==0||N==1)
   return N;
   int temp[N];
   int j=0;
    for(int k=0;k<N-1;k++)
    
        if(A[k]!=A[k+1])
        
            temp[j++]=A[k];
        temp[j++]=A[N-1];
        for(int k=0;k<j;k++)
        A[k]=temp[k];
        return j;
    
} 