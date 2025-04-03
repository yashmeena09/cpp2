#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3};//stored rest value are 0
    int arr[10]; //stored garbage value  
    int s=sizeof(arr)/sizeof(arr[0]);//length of array
    cout<<"length of array="<<s<<"\n";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";//display the value of array
    }
}