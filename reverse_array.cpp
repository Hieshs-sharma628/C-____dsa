//this progam is perform the reverse of an array
#include<iostream>
typedef int a;
using namespace std;
int main()
{
    int arr_size,arr[30],i,j;
    cout<<"\nEnter the size of array::";
    cin>>arr_size;
    cout<<"\nEnter the elements of array::";
    for(i=0;i<arr_size;i++)
    {
        cin>>arr[i];
    }
    int start=0,end=arr_size-1;
    while(start<end)
    {
    swap(arr[start],arr[end]);
    start++;
    end--;
    }
    cout<<"\nAfter reversing array is::";//displaying result
    for(i=0;i<arr_size;i++)
    {
        cout<<"\n"<<arr[i];
    }
    return 0;
}
