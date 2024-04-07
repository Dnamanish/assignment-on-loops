#include <iostream>
using namespace std;
int main()
{
 int x, num=123;
 int rev=0;
 int y=num;
 while (num>0)
 {
   x=num%10;
   rev=rev*10+x;
   num=num/10;
 }
 
 int sum=y+rev;
 cout<<sum;





}