//This program is based on insertion of an element in array
#include<iostream>
using namespace std;
int main()
{
    int arr[50],arr_size,insert_num,insert_index,i;
    cout<<"\nEnter the size of array::";
    cin>>arr_size;
    cout<<"\nEnter the elements of array::";
    for(i=0;i<arr_size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the insert element::";//input of insert element
    cin>>insert_num;
    cout<<"\nEnter the index of insert element::";
    cin>>insert_index;
    for(i=arr_size-1;i>=insert_index;i--)//Shifiting of elementes
    {
        arr[i+1]=arr[i];
    }
    arr[insert_index]=insert_num;
    arr_size=arr_size+1;
    cout<<"\nAfter insertion array is::";//displaying result
    for(i=0;i<arr_size;i++)
    {
        cout<<"\n"<<arr[i];
    }
    return 0;
}