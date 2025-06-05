#include<iostream>
using namespace std;

int fibo1(int num)
{
    if(num==1||num==0)
    {
    return 1;
    }
    
    else
{
    return fact(num-1)+fact(num-2);
}

}
int main()
{
    
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
	
    cout<<"the fibonaci series is:"<<fibo1(n)<<"";
}

}


