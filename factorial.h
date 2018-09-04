int f(int x ){
     int facto=1,i;
    for(i=1;i<=x;i++){
    facto=facto*i;}
    return facto;
}
int fact(int u,int r)
{
 int a,b,c,result;
 a=f(u+r);
 b=f(u);
 c=f(r);
 result=a/(b*c);
 return result;

}