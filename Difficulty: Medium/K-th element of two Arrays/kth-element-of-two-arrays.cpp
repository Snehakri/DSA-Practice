//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& arr1, vector<int>& arr2, int k) {
        int n=arr1.size(),m=arr2.size();
        int count=0;
        int i=0,j=0;
        k=k-1;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                if(count==k) return arr1[i];
                i++;
                count++;
            }
            else{
                if(count==k) return arr2[j];
                j++;
                count++;
            }
        }
         while(i<n){
             if(count==k) return arr1[i];
                i++;
                count++;
         }
         while(j<m){
             if(count==k) return arr2[j];
             j++;
            count++;
         }
        // code here
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(arr1, arr2, k) << endl;
    }
    return 0;
}
// } Driver Code Ends