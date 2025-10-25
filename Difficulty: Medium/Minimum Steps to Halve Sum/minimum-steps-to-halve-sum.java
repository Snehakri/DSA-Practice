class Solution {
    public int minOperations(int[] arr) {
        // code here
        double sum=0;
        for(int i=0;i<arr.length;i++){
            sum+=arr[i];
        }
        double s=sum;
        //System.out.println(sum);
        int c=0;
        
        Arrays.sort(arr);
        PriorityQueue<Double> pq=new PriorityQueue<>(Collections.reverseOrder());
        for(int it:arr) pq.add((double)it);
       
        while(sum>(s/2) && !pq.isEmpty()){
            c++;
            double n=pq.poll();
            n=n/2;
            pq.add(n);
            sum-=n;
        }
        return c;
    
    }
}