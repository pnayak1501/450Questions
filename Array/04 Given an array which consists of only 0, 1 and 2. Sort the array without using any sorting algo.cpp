https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here
        int z = 0, o = 0, t = 0;
        for(int i=0;i<n;i++){
            if(a[i]==0)
                z++;
            else if(a[i]==1)
                o++;
            else
                t++;
        }
        int j, curr = 0;
        for(j=0;j<z;j++){
            a[j]=0;
        }
        curr = j;
        for(j=curr;j<z+o;j++){
            a[j]=1;
        }
        curr= j;
        for(j=curr;j<z+o+t;j++){
            a[j]=2;
        }
    }
    
};
