// Using sliding window approach

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        sort(a.begin(),a.end());
        long long mindiff = LLONG_MAX;
        for(int i=0;i+m-1<n;i++)
        {
            mindiff = min(mindiff,a[i+m-1]-a[i]);
        }
        return mindiff;
    }   
};
