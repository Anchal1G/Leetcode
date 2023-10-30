class Solution {
public:
    int solve(int k)
    {
        int count=0;
        while(k)
        {
            k&=(k-1);
            count++;
        }
        return count;
    }
    static bool comp(pair<int,int> p1,pair<int,int> p2)
    {
        if(p1.second == p2.second)
        {
            return p1.first<p2.first;
        }
        return p1.second<p2.second;
    }
    
    vector<int> sortByBits(vector<int>& arr) 
    {
        int n = arr.size();
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++)
        {
            int a = solve(arr[i]);
            v.push_back({arr[i],a});
        }
        sort(v.begin(),v.end(),comp);
        vector<int> vec;
        for(auto it:v)
        {
            vec.push_back(it.first);
        }
        return vec;
    }
};