//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    static bool cmp(const pair<int,int>&a,const pair<int,int>&b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second>b.second;
    }
    vector<int> sortByFreq(vector<int>& arr) {
        map<int,int> m;
        vector<int> v;
        vector<pair<int,int>> pairs;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto i:m){
            pairs.push_back({i.first,i.second});
        }
        sort(pairs.begin(),pairs.end(),cmp);
        for(int i=0;i<pairs.size();i++){
            for(int j=0;j<pairs[i].second;j++){
                v.push_back(pairs[i].first);
            }
        }
        return v;
        // Your code here
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends