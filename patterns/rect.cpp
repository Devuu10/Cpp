#include <iostream>
using namespace std;
int main()
{ 
    int i,j,m,n;
    cin>>m>>n;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    
    return 0;
}