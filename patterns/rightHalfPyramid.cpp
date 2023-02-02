#include <iostream>
using namespace std;
int main()
{
    int i,j,m;
    cin>>m;
    for ( i = 1; i <=m; i++)
    {
            for ( j = 0; j <=m; j++)
            {
                 if (j<=(m-i))
                 {
                    cout<<"  ";
                 }
                 else cout<<" *";
                 
            }
            cout<<"\n";
            
    }
    
    return 0;
}