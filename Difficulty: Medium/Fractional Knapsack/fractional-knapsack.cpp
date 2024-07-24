//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value;
    int weight;
};


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
// class Solution
// {
    
//     //Function to get the maximum total value in the knapsack.
//     static bool cmp(Item a,Item b){
//         return (1.0*a.value/a.weight)>(1.0*b.value/b.weight);
//     }
//     public:
//     double fractionalKnapsack(int W, Item arr[], int n)
//     {
//         sort(arr, arr+n ,cmp);
//         double ans=0.0;
//         for(int i=0;i<n;i++){
//             int x=min(arr[i].weight,W);
//             ans+=x*1.0*arr[i].value/arr[i].weight;
//             W-=x;
//         }
//         return ans;
//         // Your code here
//     }
        
// };
class Solution {
  
  static bool cmp(Item &a,Item &b){
      return (1.0*a.value/a.weight)>(1.0*b.value/b.weight);
  }
public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n) {
        sort(arr,arr+n,cmp);
        double earned=0.0;
        for(int i=0;i<n;i++){
            int wt=min(arr[i].weight,w);
            earned+=(wt*1.0*arr[i].value/arr[i].weight);
            w-=wt;
        }
        return earned;
        
        // Your code here
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    // taking testcases
    cin >> t;
    cout << setprecision(6) << fixed;
    while (t--) {
        // size of array and weight
        int n, W;
        cin >> n >> W;

        Item arr[n];
        // value and weight of each item
        for (int i = 0; i < n; i++) {
            cin >> arr[i].value >> arr[i].weight;
        }

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(W, arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends