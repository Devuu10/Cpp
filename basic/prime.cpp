#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for ( i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
            break;
        }
        
    }
    if (n/2==i)
    {
        cout<<n<<"is a prime number";
    }
    
    
    return 0;
}