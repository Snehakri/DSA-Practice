//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    vector<int> computeLPS(string &pattern) {
    int len = pattern.size();
    vector<int> lpsArray(len, 0);
    for (int i = 1, j = 0; i < len;) {
        if (pattern[i] == pattern[j]) {
            lpsArray[i++] = ++j;
        } else if (j > 0) {
            j = lpsArray[j - 1];
        } else {
            lpsArray[i++] = 0;
        }
    }
    return lpsArray;
}

bool areRotations(string &str1, string &str2) {
    if (str1.size() != str2.size()) return false;

    string extendedStr = str2 + str2;
    vector<int> lpsTable = computeLPS(str1);
    int i = 0, j = 0, totalLen = extendedStr.size(), patternLen = str1.size();

    while (i < totalLen) {
        if (extendedStr[i] == str1[j]) {
            i++, j++;
        }
        if (j == patternLen) {
            return true;
        } else if (i < totalLen && extendedStr[i] != str1[j]) {
            if (j > 0) {
                j = lpsTable[j - 1];
            } else {
                i++;
            }
        }
    }
    return false;
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution sol;
        int result = sol.areRotations(s1, s2);
        if (result) {
            cout << "true" << endl;

        } else {
            cout << "false" << endl;
        }
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends