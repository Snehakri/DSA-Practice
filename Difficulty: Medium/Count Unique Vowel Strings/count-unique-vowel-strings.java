class Solution {
    private boolean isvowel(char ch){
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    private int fact(int n){
        int ans=1;
        for(int i=1;i<=n;i++){
            ans*=i;
        }
        return ans;
    }
    public int vowelCount(String s) {
        int n=s.length();
        HashMap<Character,Integer> map=new HashMap<>();
        for(int i=0;i<n;i++){
            char ch=s.charAt(i);
            if(isvowel(ch)==true){
                map.put(ch,map.getOrDefault(ch,0)+1);
            }
        }
        //if their is no vowel present 
        if(map.size()==0){
            return 0;
        }
        int ans=1;
        //System.out.println(map);
        for(Map.Entry<Character,Integer> it:map.entrySet()){
            char ch=it.getKey();
            int val=it.getValue();  
            ans*=(val);
        }
        ans*=fact(map.size());
        return ans;
    }
}