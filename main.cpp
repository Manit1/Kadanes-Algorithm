#include <iostream>

using namespace std;

int main()
{
    int arr[100],sum=0,max_sum,size;
    cout<<"Enter the size of the array :";
    cin>>size;
    cout<<"\nEnter the elements of the array :";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    for(int i=0;i<size;i++){
        sum+=arr[i];
        if(sum<0)
            sum=0;
        max_sum=max(sum,max_sum);

    }
    cout<<"\nMax sum is :"<<max_sum;
    return 0;
}
