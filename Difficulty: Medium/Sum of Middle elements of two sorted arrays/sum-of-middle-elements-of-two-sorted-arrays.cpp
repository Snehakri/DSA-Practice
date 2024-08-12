//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        int n=arr1.size(),m=arr2.size();
        int ind1=(n+m)/2;
        int ind2=ind1-1;
        int val1=0,val2=0;
        int i=0,j=0;
        int count=0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                if(count==ind2) val2=arr1[i];
                if(count==ind1) val1=arr1[i];
                i++;
                count++;
            }
            else{
                if(count==ind2) val2=arr2[j];
                if(count==ind1) val1=arr2[j];
                j++;
                count++;
            }
        }
        while(i<n){
            if(count==ind2) val2=arr1[i];
                if(count==ind1) val1=arr1[i];
                i++;
                count++;
        }
        while(j<m){
            if(count==ind2) val2=arr2[j];
                if(count==ind1) val1=arr2[j];
                j++;
                count++;
        }
        return val1+val2;
        // code here
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends