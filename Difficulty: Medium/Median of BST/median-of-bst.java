/*
class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
        left = null;
        right = null;
    }
}
*/

class Solution {
    void solve(Node p,ArrayList<Integer> a){
        if(p==null){
            return;
        }
        solve(p.left,a);
        a.add(p.data);
        solve(p.right,a);
        return;
    }
    public int findMedian(Node root) {
        // Code here
        ArrayList<Integer> a=new ArrayList<>();
        Node p=root;
        solve(p,a);
        int n=a.size();
        int ans=0;
        if(n%2==1){
            ans=a.get(n/2);
        }
        else ans= a.get((n / 2) - 1);
        return ans;
        
    }
}