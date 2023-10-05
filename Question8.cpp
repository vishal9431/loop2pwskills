// Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output :

// 1 1 2 3 5 8 13 21 34 55
#include<iostream>
using namespace std;
int main()
{
    int n,t1,t2,nextterm;
    cin>>n;
    t1=0;
    t2=1;
    nextterm=0;
    for(int i=1;i<=n;i++)
    {
       
        if(i==1)
        {
            cout<<t2<<endl;
        }
        nextterm = t1+t2;
        t1=t2;
        t2=nextterm;
        cout<<nextterm<<endl;
    }
}