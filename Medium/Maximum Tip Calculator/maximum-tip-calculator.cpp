//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        vector<pair<int,pair<int,int>>> v;
        for(int i=0;i<arr.size();i++){
            v.push_back({abs(arr[i]-brr[i]),{arr[i],brr[i]}});
        }
        long long count=0;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++){
            if(x==0) count+=v[i].second.second;
            else if(y==0) count+=v[i].second.first;
            else{
                if(v[i].second.second>v[i].second.first){
                    y--;
                    count+=v[i].second.second;
                }
                else{
                    x--;
                    count+=v[i].second.first;
                }
            }
        }
        return count;
        // code here
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}

// } Driver Code Ends