//Check Arithmetic progression @devottam2809

class Solution{
    public:
    bool checkIsAP(int a[], int n)
    {
    sort(a,a+n);
    int d=a[1] - a[0];
    bool z;
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if((a[i] + d)==a[i+1])
            counter++;
    }
    if(counter==(n-1))
       z=true;
    else    
        z=false;
    
    return z;
    }
};
