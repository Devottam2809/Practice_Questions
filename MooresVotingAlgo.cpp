#include<iostream>
using namespace std;
//STEP 1
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int majority=0;
    int count=1;

    for(int i=0;i<n;i++)
    {
        //majority =a[i];
        if(a[majority]==a[i+1])
        {
            count++;
        }
        else{
            count--;
        }
        if(count ==0)
        {
            majority =i;
            count=1;
        }
    }
    cout<<"Majority = "<<a[majority];
    return 0;
}
