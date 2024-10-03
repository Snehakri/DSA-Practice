//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    // vector<int> findMajority(vector<int>& nums) {
    //     int ele1,ele2;
    //     int c1=0,c2=0;
    //     for(int i=0;i<nums.size();i++){
    //         if(c1==0 && nums[i]!=ele2){
    //             c1=1;
    //             ele1=nums[i];
    //         }
    //         if(c2==0 && nums[i]!=ele2){
    //             c2=1;
    //             ele2=nums[i];
    //         }
    //         if(nums[i]==ele1){
    //             c1++;
    //         }
    //         else if(nums[i]==ele2){
    //             c2++;
    //         }
    //         else c1--,c2--;
    //     }
    //     c1=0,c2=0;
        
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]==ele1) c1++;
    //         else if(nums[i]==ele2) c2++;
    //     }
    //     int n=nums.size()/3;
    //     if(c1>n && c2>n) return {ele2,ele1};
    //     if(c1>n) return {ele1};
    //     if(c2>n) return {ele2};
    //     return {-1};
    //     // Your code goes here.
    // }
    vector<int> findMajority(vector<int>& nums) {
        
        vector<int> ans;
        
        int count = 1;
        int n = nums.size();
        if(n < 3) return nums;
        
        sort(nums.begin(),nums.end());
        
        for(int i =1;i<n;i++)
        {
            if(nums[i] == nums[i-1])
            {
                count++;
                if(count > (n/3))
                {
                    ans.push_back(nums[i]);
                    count = 1;
                    
                    while(nums[i] == nums[i-1] && i<n)
                    {
                        i++;
                    }
                }
            }
            else{
                count = 1;
            }
            
        }
        
         if(ans.size() == 0) return {-1};
         
         return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends