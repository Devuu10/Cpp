#include <iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    cin>>m>>n;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if(i==0||j==0||i==m-1||j==n-1)
                cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
        
    }
    
    return 0;
}