#include<iostream>
using namespace std;

int fibo1(int num)
{
    if(num == 0)
        return 0;
    else if(num == 1)
        return 1;
    else
        return fibo1(num - 1) + fibo1(num - 2);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The Fibonacci series is: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << fibo1(i) << " ";
    }
    cout << endl;
    return 0;
}
