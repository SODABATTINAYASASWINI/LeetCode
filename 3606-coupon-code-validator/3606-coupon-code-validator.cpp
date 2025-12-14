class Solution {
public:
    bool valid(string s) {
        if (s.empty()) return false;   
        for (char c : s) {
            if (!isalnum(c) && c != '_') {
                return false;
            }
        }
        return true;
    }

    vector<string> validateCoupons(
        vector<string>& code,
        vector<string>& businessLine,
        vector<bool>& isActive
    ) {
        vector<string> electronics, grocery, pharmacy, restaurant;

        for (int i = 0; i < code.size(); i++) {
            if (!valid(code[i]) || !isActive[i]) continue;

            if (businessLine[i] == "electronics")
                electronics.push_back(code[i]);
            else if (businessLine[i] == "grocery")
                grocery.push_back(code[i]);
            else if (businessLine[i] == "pharmacy")
                pharmacy.push_back(code[i]);
            else if (businessLine[i] == "restaurant")
                restaurant.push_back(code[i]);
        }


        sort(electronics.begin(), electronics.end());
        sort(grocery.begin(), grocery.end());
        sort(pharmacy.begin(), pharmacy.end());
        sort(restaurant.begin(), restaurant.end());
        vector<string> result;
        result.insert(result.end(), electronics.begin(), electronics.end());
        result.insert(result.end(), grocery.begin(), grocery.end());
        result.insert(result.end(), pharmacy.begin(), pharmacy.end());
        result.insert(result.end(), restaurant.begin(), restaurant.end());

        return result;
    }
};
