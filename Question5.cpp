// WAP to print the sum of all the even digits of a given number.
// Sample Input : 4556
// Output: 10
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum =0;
    while(n>0)
    {
        int r = n%10;
        if(r%2==0)
        {
            sum +=r;
        }
        
        n=n/10;
    }
    cout<<sum<<endl;
}