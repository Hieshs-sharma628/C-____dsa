//fing the maximum subarray sum using Kadane’s Algorithm
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of vector::";
    cin>>n;
    int arr[22];
    cout<<"\nEnter the element of vector::";
    for(int i=0; i<n; i++) // Fixed loop condition
    {
        cin>>arr[i];
    }
    int max_sum=INT_MIN, current_sum=0;
    for(int i=0; i<n; i++) // Fixed loop condition
    {
        current_sum+=arr[i];
        max_sum=max(current_sum, max_sum);
        if(current_sum<0){
            current_sum=0;
        }
    }
    cout << "Maximum subarray sum is: " << max_sum << endl; // Added output for result
    return 0;
}