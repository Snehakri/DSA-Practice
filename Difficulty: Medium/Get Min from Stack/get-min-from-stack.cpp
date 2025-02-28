//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    stack<pair<int,int>>s;
    int curmin;
  public:
    Solution() {
        curmin=INT_MAX;
        // code here
    }

    // Add an element to the top of Stack
    void push(int x) {
        // code here
        if(s.size()==0){
            curmin=INT_MAX;
        } else if(s.size()!=0 && s.top().second>curmin){
            curmin=s.top().second;
        }
        curmin=min(x,curmin);
        s.push({x,curmin});
    }

    // Remove the top element from the Stack
    void pop() {
        // code here
        if(s.size()>0)
        s.pop();
    }

    // Returns top element of the Stack
    int peek() {
        // code here
        if(s.size()==0)
        return -1;
        return s.top().first;
    }

    // Finds minimum element of Stack
    int getMin() {
        // code here
        if(s.size()==0)
        return -1;
        return s.top().second;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Solution ob;

        while (q--) {
            int qt;
            cin >> qt;

            if (qt == 1) {
                // push
                int att;
                cin >> att;
                ob.push(att);
            } else if (qt == 2) {
                // pop
                ob.pop();
            } else if (qt == 3) {
                // peek
                cout << ob.peek() << " ";
            } else if (qt == 4) {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends