//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count inversions in the array.
    int merge(int low,int mid,int high,vector<int>& arr){
        int l=low;
        int r=mid+1;
        int count=0;
        vector<int> temp;
        while(l<=mid && r<=high){
            if(arr[l]<=arr[r]){
                temp.push_back(arr[l]);
                l++;
            }
            else{
                temp.push_back(arr[r]);
                r++;
                count+=(mid-l+1);
            }
        }
        while(l<=mid){
            temp.push_back(arr[l]);
            l++;
        }
        while(r<=high){
            temp.push_back(arr[r]);
            r++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
        return count;
    }
    
    int mergesort(int low,int high,vector<int> &arr){
        int count=0;
        if(low>=high) return count;
        int mid=(high+low)/2;
        count+=mergesort(low,mid,arr);
        count+=mergesort(mid+1,high,arr);
        
        count+=merge(low,mid,high,arr);
        return count;
    }
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        return mergesort(0,arr.size()-1,arr);
        
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends