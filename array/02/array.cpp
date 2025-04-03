#include<iostream>
using namespace std;
int main()
{
    int n ,f=0;
   
    cin>>n;
    int a[n];
    int t;
    cin>>t;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]==t)
                {
            cout<<"yes";
            f=1;
            break;

        }
        
    }
if(f==0)
{
    cout<<"no";
}


}