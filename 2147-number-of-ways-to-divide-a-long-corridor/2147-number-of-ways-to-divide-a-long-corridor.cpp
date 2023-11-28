class Solution {
public:
    int numberOfWays(string corridor) {
        
     int total_seat = 0;
        for (auto& c : corridor) total_seat += ((c == 'S') ? 1 : 0);
        if (total_seat == 0) return 0;
        if ((total_seat & 1) == 1) return 0;

        // greedy
        int n = corridor.size();
        int sections = (total_seat >> 1);
        long long ways = 1LL;
        for (int i = 0; i < n;) {
            // if there are no more seats on the right, no way to divide
            if ((--sections) == 0) break;

            // find 2 seats
            for (int seat = 0; seat < 2; i++) {
                if (corridor[i] == 'S') seat++;
            }

            // find the extra plants on the right
            int extra_plants = 0;
            while ((i < n) && (corridor[i] == 'P')) extra_plants++, i++;

            // there are `x + 1` ways to install the room divider for the `x` plants
            ways = (ways * (extra_plants + 1LL)) % MOD;
        }
        return ways;
    }
private:
    const long long MOD = 1e9 + 7;
};