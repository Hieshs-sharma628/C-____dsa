#include<iostream>
using namespace std;
int main()
{
    int N,D,i,j,arr[50][50],totalfinecount=0,regularstudentcount=0;
    cout<<"Enter number of students:";
    cin>>N;
    cout<<"Enter number of days:";
    cin>>D;
    cout<<"Enter your data::";
    for(i=0;i<N;i++)
    {
        for(j=0;j<D;j++)
        {
            cin>>arr[i][j];
        }
    }
    int finestore[N]={0};
    for(i=0;i<N;i++)
     {
        for(j=0;j<D;j++)
         {
            if(arr[i][j]==1)
             {
                totalfinecount++;
                finestore[i]++;
             }
         }  
     }
    cout<<"Total fine collected by library::"<<totalfinecount*5;   
    int maxfinestudent=0;
    for(i=0;i<N;i++)
    {
        cout<<"\nStudent "<<i<<" fine::"<<finestore[i]*5;
        if(finestore[i] > maxfinestudent)
        {
            maxfinestudent=i;
        }
        int regularity=finestore[i]*100/D;
        if(regularity >= 80)
        {
            regularstudentcount++;
        }
    }   
    cout<<"\nMax fine student index::"<<maxfinestudent;   
    cout<<"\nNumber of Regular students::"<<regularstudentcount;          
    return 0;
}