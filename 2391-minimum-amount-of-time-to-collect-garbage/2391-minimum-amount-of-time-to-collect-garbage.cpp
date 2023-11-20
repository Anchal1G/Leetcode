class Solution {
public:
     int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        // summarize the garbage `by house` and `in total`
        int n = garbage.size();
        vector<unordered_map<char, int>> house_count(n);
        unordered_map<char, int> total_count;
        for (int i = 0; i < n; i++) {
            for (auto& c : garbage[i]) {
                house_count[i][c]++;
                total_count[c]++;
            }
        }

        // collect the metal/paper/glass garbage
        int time = 0;
        for (auto& type : "MPG") {
            for (int i = 0; i < n; i++) {
                // collect the garbage with `type` in the house `i`
                time += house_count[i][type];
                total_count[type] -= house_count[i][type];
                // break if there is no garbage after the house `i`
                if (total_count[type] == 0) break;
                // travel to the next house
                if (i < (n - 1)) time += travel[i];
            }
        }
        return time;
    }
};