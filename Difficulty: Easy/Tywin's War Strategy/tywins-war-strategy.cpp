class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
        int count=0;
        priority_queue<int,vector<int>,greater<>> pq;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%k==0){
                count++;
            }
            else{
                int n=k-(arr[i]%k);
                pq.push(n);
            }
        }
        int ans=0;
        while((count< (arr.size()+1)/2) && !pq.empty()){
            ans+=pq.top();
            pq.pop();
            count++;
        }
        return ans;
    }
};