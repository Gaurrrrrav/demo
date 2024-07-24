#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of terms in the array: ";
    cin>>n;
    int A[n];
    int sum=0;
    cout<<"Enter the terms of the array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        sum=sum+A[i];
    }
    float avg=sum/n;
    cout<<avg;

}
