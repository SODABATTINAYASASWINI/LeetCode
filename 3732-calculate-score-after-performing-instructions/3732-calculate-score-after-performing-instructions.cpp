class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        long long ans = 0;
        long long i = 0;
        while(1){
            if(i < 0 or i >= instructions.size() or 
                instructions[i] == "poo") return ans;
            if(instructions[i] == "add"){
                ans += values[i];
                instructions[i] = "poo";
                i += 1;
            }
            else if(instructions[i] == "jump"){
                instructions[i] = "poo";
                i += values[i];
            }
        }
    }
};