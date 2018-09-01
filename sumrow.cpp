#include<iostream>
using namespace std;
int sum(int N)
{   int num=0,i,s; 
    for(i=0;i<=N;i++)
 { num = num + 2*i;
    }
   s=num*(num+1)/2;
return s;
}
int main(){
int add,diff,N,res,T,j;
cin>>T;
for(j=0;j<T;j++)
{ 
cin>>N;
add=sum(N);
diff=sum(N-1);
res=sum(N)-sum(N-1);
cout<<res<<endl;}
return 0;
}