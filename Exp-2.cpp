#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n,num,flag=0,j;
    cout<<"Enter no of integers in array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to be searched:";
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            flag=1;
            j=i;
        }
    }
    if(flag==1)
        cout<<num<<" found at index "<<j;
    else
        cout<<num<<" not found";
}
