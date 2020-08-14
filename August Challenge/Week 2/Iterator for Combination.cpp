Problem Link:   Iterator for Combination

https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/3422/

class CombinationIterator {

    int p=0;
    List<String> c=null;
    public CombinationIterator(String characters, int combinationLength) {
        c=new ArrayList<>();
        helper(characters,0,combinationLength,new StringBuilder());
    }
    
    public String next() {
        return c.get(p++);
    }
    
    public boolean hasNext() {
        return p<c.size();
    }
    
    void helper(String s,int pos,int combinationLength,StringBuilder sb){
        if(sb.length()==combinationLength){
            c.add(sb.toString());
            return;
        }
        
        for(int i=pos;i<s.length();i++){
            sb.append(s.charAt(i));
            helper(s,i+1,combinationLength,sb);
            sb.deleteCharAt(sb.length()-1);
        }
    }
}
