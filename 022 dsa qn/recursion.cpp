#include<iostream>
#include<string>
using  namespace std;
int fact(int n)
{
    
    
    if(n==0)
    {
        return 1;
    }
    else
    {
        
        return(n*fact(n-1));
    }
}
int main()
{
    int num;
    cout<<"enter the value of nbr"<<endl;
    cin>>num;
    int fat1=fact(num);
    cout<<"the factoral is:"<<fat1<<endl;
    return 0;
    
    
}
