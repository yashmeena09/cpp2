#include<iostream>
using namespace std;
int main()
{
    
    int arr[10];
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<"length of array="<<s<<"\n";
    cout<<"enter 10 value\n";
 for(int i=0;i<s;i++)
 {
    cin>>arr[i];
 }
 cout<<"\n stored data are\n";
 for(int i=0;i<s;i++)
 {
  if (arr[i]%2==0)
    {
    cout<<arr[i]<<"\t";
    }
 }

}