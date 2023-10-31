class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
     const unsigned n = pref.size();
        vector<int> r(n);
        int p = 0;
        const __int128 *const __attribute__((aligned(16))) pdata = reinterpret_cast<const __int128*>(pref.data());
        __int128 *const __attribute__((aligned(16))) rdata = reinterpret_cast<__int128*>(r.data());
        const unsigned m = n >> 2;
        for (unsigned i = 0; i < m; i++) {
            const __int128 c = pdata[i];
            rdata[i] = p ^ c ^ (c << 32);
            p = c >> 96;
        }
        for (unsigned i = m << 2; i < n; i++) {
            const int c = pref[i];
            r[i] = p ^ c;
            p = c;
        }
        return r;   
    }
};