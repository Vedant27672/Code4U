class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> m;
        int count = 0;

        for (auto ele : arr) {
            if (ele == 0) {
                count++;
                continue;
            }
            m[ele] = 1;

            // odd
            if (ele % 2 != 0) {
                int d = ele * 2;
                // double is found
                if (m.find(d) != m.end()) {
                    return true;
                }
            }
            // even
            else {
                int d = ele * 2;
                int h = ele / 2;

                if (m.find(d) != m.end() || m.find(h) != m.end()) {
                    return true;
                }
            }
        }

        if (count > 1) {
            return true;
        }
        return false;
    }
};
