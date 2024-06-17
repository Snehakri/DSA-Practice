//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// class Solution {
//   public:
//     string doIntersect(int p1[], int q1[], int p2[], int q2[]) {
//         double slope1=double(q1[1]-p1[1])/double(q1[0]-p1[0]);
//         double slope2=double(q2[1]-p2[1])/double(q2[0]-p2[0]);
//         cout<<slope1<<slope2;
//         if(slope1==slope2) return "false";
//         // code here
//         bool c1=p2[1]-p1[1]-slope1*(p2[0]-p1[0]) > 0?true:false;
//          bool c2=q2[1]-p1[1]-slope1*(q2[0]-p1[0]) > 0?true:false;
         
//         bool c3=p1[1]-p2[1]-slope2*(p1[0]-p2[0]) > 0?true:false;
//         bool c4=q1[1]-p2[1]-slope2*(q1[0]-p2[0]) > 0?true:false;
        
//         //if((c1 && c2) || (!c1 && !c2) || (c3 && c4) || (!c3 && !c4)){
// //           // return "false";
// //         //}
// //         return "true";
        
        
        
// //     }
// // };
// class Solution {
//   public:
//     string doIntersect(int p1[], int q1[], int p2[], int q2[]) {
//         double m1=double(q1[1]-p1[1])/double(q1[0]-p1[0]);
//         double m2=double(q2[1]-p2[1])/double(q2[0]-p2[0]);
//         if(m1==m2){
//             return "false";
//         }
//         // ye hai pehli line aur dusre line ke points p2 aur q2
//         bool check1=p2[1]-p1[1]-m1*(p2[0]-p1[0])>0?true : false;
//         bool check2=q2[1]-p1[1]-m1*(q2[0]-p1[0])>0?true : false;
//         // ye hai dusri line aur pehli line ke points p1 aur q1
//         bool check3=p1[1]-p2[1]-m2*(p1[0]-p2[0])>0?true : false;
//         bool check4=q1[1]-p2[1]-m2*(q1[0]-p2[0])>0?true : false;
        
//         if((check1==true && check2== true) || (check1==false && check2== false)
//         || (check3==true && check4== true) || (check3==false && check4== false)){
//         return "false";
//         }
//         return "true";
//     }
// };
class Solution {
  public:
    int func(int p[], int q[], int r[]) {
        if (q[0] <= max(p[0], r[0]) && q[0] >= min(p[0], r[0]) && q[1] <= max(p[1], r[1]) && q[1] >= min(p[1], r[1])){
            return 1;
        }
        return false;
    }

    int direction(int p[], int q[], int r[]) {
        long long val =
            1LL * (q[1] - p[1]) * (r[0] - q[0]) - 1LL * (q[0] - p[0]) * (r[1] - q[1]);

        if (val == 0)
            return 0; 
        
        if(val>0){
            return 1;
        }
        else return -1;
    }

    string doIntersect(int p1[], int q1[], int p2[], int q2[]) {
        
        int o1 = direction(p1, q1, p2);
        int o2 = direction(p1, q1, q2);
        int o3 = direction(p2, q2, p1);
        int o4 = direction(p2, q2, q1);
        
        if (o1 != o2 && o3 != o4){
            return "true";
        }
        if (o1 == 0 && func(p1, p2, q1)){
            return "true";
        }
        if (o2 == 0 && func(p1, q2, q1)){
            return "true";
        }
        if (o3 == 0 && func(p2, p1, q2)){
            return "true";
        }
        if (o4 == 0 && func(p2, q1, q2)){
            return "true";
        }
        return "false";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1[2], q1[2], p2[2], q2[2];
        cin >> p1[0] >> p1[1] >> q1[0] >> q1[1] >> p2[0] >> p2[1] >> q2[0] >> q2[1];
        // if (q2[1] == -2) {
        //     cout << "true" << endl;
        //     return 0;
        // }
        Solution ob;
        // int a = ob.doIntersect(p1, q1, p2, q2);
        // if (a)
        cout << ob.doIntersect(p1, q1, p2, q2) << "\n";
    }
}
// } Driver Code Ends