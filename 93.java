class Solution {
    private void backtrack(String s,int pos,List<String> cur,List<String> res){
    if(cur.size() >= 4)
    {
        if(pos == s.length())
            res.add(String.join(".",cur));
        return;
    }
    for(int i = 1;i<=3;i++){
        if(pos + i > s.length())
            break;
        String seg = s.substring(pos,pos+i);
        if((seg.startsWith("0") && seg.length() > 1) || (i==3 && Integer.parseInt(seg) > 255) )
            continue;
        cur.add(seg);   
        backtrack(s,pos+i,cur,res);
        cur.remove(cur.size()-1);
    }
}
    public List<String> restoreIpAddresses(String s) {
        List<String> res = new ArrayList<>();
        backtrack(s,0,new ArrayList<>(),res);
        return res;
    }
}
