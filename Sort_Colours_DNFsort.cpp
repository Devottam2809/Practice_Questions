// Sort colours DNF sort @devottam2809

void sortColors(vector<int>& a) {
        int two=a.size()-1;
        int zero=0;
    
     for(int i=0;i<=two;)
    {
        if(a[i]==2)
        {
            swap(a[i],a[two]);
            two--;
        }
        else if(a[i]==0)
        {
            swap(a[i],a[zero]);
            zero++;
            i++;
        }
        else{
            i++;
        }
    }
    }
};
