class Solution {
    public static int balanceSums(int[][] mat) {
        // code here
        int max = 0;
        int n = mat.length;
        
        for (int i = 0; i < n; i++){
            int sum = 0;
            for (int j = 0; j < n; j++){
                sum += mat[i][j];
                // System.out.println(mat[i][j] + " ");
            }
            max = Math.max(max, sum);
            // System.out.println(sum);
        }
        for (int i = 0; i < n; i++){
            int sum = 0;
            for (int j = 0; j < n; j++){
                sum += mat[j][i];
                // System.out.println(mat[i][j] + " ");
            }
            max = Math.max(max, sum);
            // System.out.println(sum);
        }
        int ans = 0;
        for (int i = 0; i < n; i++){
            int sum = 0;
            for (int j = 0; j < n; j++){
                sum += mat[i][j];
                // System.out.println(mat[i][j] + " ");
            }
            ans += (max - sum);
            // System.out.println(sum);
        }
        return ans;
    }
}

