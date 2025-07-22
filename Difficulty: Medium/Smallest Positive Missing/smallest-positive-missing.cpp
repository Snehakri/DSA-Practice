class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        int ans=1;
        sort(arr.begin(),arr.end());
        for(auto it:arr){
            if(it<=0) continue;
            if(it!=ans && it>ans){
                return ans;
            }
            if(it>=ans) ans++;
        }
        return ans;
    }
};