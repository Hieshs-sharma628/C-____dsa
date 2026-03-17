//this progarm is based on linear search algorithum using array
#include<iostream>
using namespace std;
int main(){
    int arr[n],size,i;
    cout<<"\nEnter size of array::"; 
    cin>>size; 
    int search_elm;
    cout<<"\nEnter the element array::";
    for(i=0;i<size;i++)//delete element
    {
        cin>>arr[i];
    }
    cout<<"\nEnter search element from array::"; 
    cin>>search_elm;
    for(i=0;i<size;i++)
    {
        if(arr[i]==search_elm)//search element
        {
            cout<<search_elm<<" element found at index "<<i;
        }
    }
    return 0;
}