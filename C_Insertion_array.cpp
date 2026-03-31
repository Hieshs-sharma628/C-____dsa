//This program is based on deleteion of an element in array
#include<iostream>
using namespace std;
int main()
{
    int arr[50],arr_size,delete_num,delete_index,i;
    cout<<"\nEnter the size of array::";
    cin>>arr_size;
    cout<<"\nEnter the elements of array::";
    for(i=0;i<arr_size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the delete element::";//input of delete element
    cin>>delete_num;
    cout<<"\nEnter the index of delete element::";
    cin>>delete_index;
    for(i=arr_size-1;i>=delete_index;i--)//Shifiting of elementes
    {
        arr[i+1]=arr[i];
    }
    arr[delete_index]=delete_num;
    arr_size=arr_size+1;
    cout<<"\nAfter deleteion array is::";//displaying result
    for(i=0;i<arr_size;i++)
    {
        cout<<"\n"<<arr[i];
    }
    return 0;
}