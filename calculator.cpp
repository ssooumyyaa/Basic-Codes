#include<iostream>
#include<math.h>
using namespace std;
float calculatorTwoInput(float a ,char op, float b)
{ float c,f=1;
      switch(op)
{ case'+':
    c=a+b;
  return c;
  break;
   case'-':
       c=a-b;
  return a-b;
  break;
   case'/':
       if (b==0)
        cout<<"undefined";
       else
   c=a/b;
   return c;
  break;
   case'*':
  c=a*b;
  return c;
  break;
  }

return c;
}
void facto(int w)
{ int i,fact=1;
for(i=5;i>0;i--)
{
    fact=fact*i;

}
cout<<fact;
}

 int main()
{   char op,i;
    float a,b,n,f;
    cout<<"1.Arithmetic"<<endl;
    cout<<"2.power"<<endl;
    cout<<"3.Trigonometry"<<endl;

    cout<<"4.Root"<<endl;
    cout<<"5.factorial"<<endl;
    cout<<"6.log"<<endl;
    cin>>f;
     if(f==1)
    {
    cin>>a;
    cin>>op;
     cin>>b;
     while(a!=-1)
    {
    n=calculatorTwoInput(a,op,b);
    cout<<n;
    a=n;
    cin>>op;
    cin>>b;
    }
    }
    else if(f==2)
    {
    int p,q;
    cin>>p;
    cin>>op;
    cin>>q;
    switch(op)
    case'^':
    cout<<pow(p,q);
    }
    else if(f==3)
    {
        int n,a,m;

   cout<<"1.sin"<<endl;
   cout<<"2.cos"<<endl;
   cout<<"3.tan"<<endl;
   cin>>a;
   cout<<"enter in radian";
   cin>>m;
   if(a==1)

    cout<<sin(m);
    if(a==2)
    cout<<cos(m);
      if(a==3)
    cout<<tan(m);
    }
    else if(f==4)
    { int g,h;
    cout<<"1.square root"<<endl;
    cout<<"2.cube root"<<endl;
    cin>>h;
    cin>>g;
    switch(h)
    {   case 1:
        cout<<sqrt(g);
        break;
        case 2:
        cout<<cbrt(g);
        break;
    }
    }
     else if(f==5)
    { int y;
      cin>>y;
      facto(y);
    }
    else if (f==6)
    { int z;
    cin>>z;
    cout<<log(z);
    }

return 0;
}
