#include <iostream>
using namespace std;
int main()
{
    int x, num = 4556;
    int sum = 0;
    while (num > 0)
    {
        x = num % 10;
        if (x % 2 == 0)
        {
            sum = sum + x;
        }
        num = num / 10;
    }
    cout << sum;
}