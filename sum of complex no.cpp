#include<iostream>
using namespace std;
class complex;
{
public:
int real;
int imaginary;
};
int main()
{
    complex c1,c2;
    cout<<"enter first complex number";
    cin>>c1.real>>c1.imaginary;
    cout<<"1st complex number is  "<<c1.real<<"+"<<c1.imaginary;
    cout<<"enter 2nd complex";
    cin>>c2.real>>c2.imaginary;
    cout<<"2nd complex number is  "<<c2.real<<"+"<<c2.imaginary;
    cout<<c1.real+c2.real<<"+"<<c1.imaginary+c2.imaginary;
    return 0; 
}