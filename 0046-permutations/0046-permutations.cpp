class Solution {
public:
void permutation(vector<int>v,int start,int end,vector< vector<int> > &ans){
	if(start >= end){
		ans.push_back(v);
		return;	
	}
	for(int i = start;i <= end; i++){
		swap(v[start],v[i]);
		//ans.push_back(v);
		permutation(v,start + 1,end,ans);
		swap(v[start],v[i]);
	}
	
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> >ans;
        permutation(nums,0,nums.size()-1,ans);
        return ans;
    }
};