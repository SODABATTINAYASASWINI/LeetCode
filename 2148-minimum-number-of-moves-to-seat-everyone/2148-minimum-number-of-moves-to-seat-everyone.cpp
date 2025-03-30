class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int c = 0;
        for(int i = 0; i < students.size();i++){
            c += abs(students[i] - seats[i]);
        }
        return c;
    }
};