#include <iostream>
using namespace std;
int main()
{
 int i,n=10;
 int a=1,b=1;
 int sum=0;
 for(i=1;i<=n;i++)
 {
   cout<<a<<endl;
   sum=a+b;
   a=b;
   b=sum;
 }
 




}