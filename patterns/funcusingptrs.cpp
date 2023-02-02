#include <iostream>
using namespace std;
void swap(int *a, int *b);
int main()
{
    int p,q;
    cout<<"\nEnter Two numbers you want to swap\n";
    cin>>p>>q;
    swap(&p,&q);
    cout<<"\nAfter Swapping Numbers are given below\n\n";
    cout<<p<<"\n"<<q<<"\n";
    return 0;
}
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}