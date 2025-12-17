class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int c = 0;
        int n = colors.size();
        for(int i = 1; i < colors.size() - 1; i++){
            if(colors[i - 1] == colors[i + 1] and colors[i - 1] != colors[i]){
                c += 1;
            }
        }
        if(colors[n - 1] == colors[1] && colors[0] != colors[1]){
            c++;
        }
        if(colors[n - 2] == colors[0] && colors[n - 1] != colors[0]){
            c++;
        }
        return c;
    }
};