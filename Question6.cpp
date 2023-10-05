// WAP to print the sum of a given number and its reverse.
// Sample Input : 12
// Sample Output : 33 [12+21]
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp = n;
    int rev =0;
    while(n>0)
    {
        int r=n%10;
        rev = rev*10+r;
        n=n/10;
    }
    cout<<temp+rev<<endl;

}
//123(123+321)