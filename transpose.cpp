#include<iostream>
using namespace std;
int main(){
   int T,i,N,j,l;
    cin>>T;
    for(i=0;i<T;i++)
    {  
    cin>>N;
    int  arr[N][N];
    for(j=0;j<N;j++)
  {    for(l=0;l<N;l++)

    {
        cin>>arr[j][l];

    }
  }
    for(l=0;l<N;l++)
        {
           for(j=0;j<N;j++)
            {
          cout<<arr[j][l];
           }
    }
    }

return 0;
}
