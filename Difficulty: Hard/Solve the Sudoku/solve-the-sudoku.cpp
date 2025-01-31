//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find a solved Sudoku.
     bool checker(int t,int r,int c,vector<vector<int>>& mat,int n){
        //current row
         for(int j=0;j<n;j++){
             if(mat[r][j]==t) return 0;
         }
         //current col
         for(int i=0;i<n;i++){
             if(mat[i][c]==t) return 0;
         }
         //now in 3x3 grid
         
         int temp1=r-(r%3);
         int temp2=c-(c%3);
         
         for(int i=temp1;i<temp1+3;i++){
             for(int j=temp2;j<temp2+3;j++){
                 if(mat[i][j]==t) return 0;
             }
         }
         
         return 1;
    }
    bool helper(int row,int col,vector<vector<int>>& mat,int n){
       
       if(row==9) return true; //row==9&&col==9
       if(col==n){
          return helper(row+1,0,mat,n);   
       }
       if(mat[row][col]!=0){
           return helper(row,col+1,mat,n);
       }
       //if mat[row][col]==0
       
       for(int k=1;k<=9;k++){
           if(checker(k,row,col,mat,n)){
               mat[row][col]=k;
               bool ans=helper(row,col+1,mat,n);
               if(ans){
                   return true;
               }else 
               mat[row][col]=0;
           }
       }
           
        return false;   
    }
    void solveSudoku(vector<vector<int>> &mat) {
       helper(0,0,mat,mat.size());
    }
};

//{ Driver Code Starts.

vector<int> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    vector<int> res;
    while (ss >> num) {
        res.push_back(num);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<vector<int>> grid;
        for (int i = 0; i < 9; i++) {
            vector<int> v = inputLine();
            grid.push_back(v);
        }

        Solution ob;

        ob.solveSudoku(grid);

        for (auto v : grid) {
            for (auto elem : v) {
                cout << elem << " ";
            }
            cout << endl;
        }

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends