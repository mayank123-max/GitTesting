#include<iostream>
using namespace std;

int main()
{
    int n;
    int x=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
            cout<<"  ";
        cout<<i+1;
        int sp = (n-i-1)+(n-i-2);
        for(int l=0;l<sp;l++)
            cout<<"  ";
        cout<<" ";
        if(i!=n-1)
            cout<<i+1;
        for(int o=0;o<i;o++)
            cout<<"  ";
        cout<<"\n";
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-2;j>i;j--)
            cout<<"  ";
        cout<<n-i-1;
        int sp = ++x + i;
        for(int k=0;k<sp;k++)
            cout<<"  ";
        cout<<" ";
        cout<<n-i-1;
        cout<<"\n";
    }
}