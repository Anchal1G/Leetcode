class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
      sort(arr.begin(), arr.end());

        // set the value of the first element as `1`
        arr[0] = 1;

        // iterate and make sure the rule (`abs(arr[i] - arr[i - 1]) <= 1`) meets
        int result = 1;
        for (auto& num : arr) result = min(result + 1, num);
        return result;   
    }
};