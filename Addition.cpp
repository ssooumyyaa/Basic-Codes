#include <iostream>
using namespace std;

int main() {
    int T,i,A,B;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>A>>B;
        cout<<A+B<<endl;
        if(A>B)
        {
            cout<<A-B<<endl;
            cout<<A/B<<endl;
        }
          if(A<B)
          {
            cout<<B-A<<endl;
            cout<<B/A<<endl;
        }
        cout<<A*B<<endl;
    }
	return 0;
}