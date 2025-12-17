class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        int i = 0, j = 0;
        int ans = 0;
        deque<int> v;
        int steps = 0;

        while (steps < n + k - 1) {
            int curr = colors[j];

            if (v.empty()) {
                v.push_back(curr);
            }
            else if (v.back() != curr) {
                v.push_back(curr);
            }
            else {
                v.clear();
                v.push_back(curr);
                i = j;
            }

            if (v.size() == k) {
                ans++;
                v.pop_front();
                i++;
            }

            j = (j + 1) % n;
            steps++;
        }
        return ans;
    }
};
