//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &arr) {
        int n = arr.size();
        int m = arr[0].size();
        int down=n-1;
        int top=0;
        int left = 0;
        int right = m-1;
        int dir=0;

        vector<int>v;
        while(left<=right&&top<=down){
            if(dir==0){
                for(int i = left;i<=right;i++){
                    v.push_back(arr[top][i]);
                }
                top++;
            }
            else if(dir==1){
                for(int i = top;i<=down;i++){
                    v.push_back(arr[i][right]);
                }
                right--;
            }
            else if(dir==2){
                for(int i = right;i>=left;i--){
                    v.push_back(arr[down][i]);
                }
                down--;
            }
            else{
                for(int i =down;i>=top;i--){
                    v.push_back(arr[i][left]);
                }
                left++;
            }
            dir+=1;
            dir=dir%4;
        }
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends