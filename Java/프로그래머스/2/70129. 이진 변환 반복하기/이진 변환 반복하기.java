class Solution {
    public int[] solution(String s) {
        int[] answer = new int[2];
        int oriLen = s.length();
        
        while(!s.equals("1")) {
            s = s.replaceAll("0", "");
            answer[0]++;
            answer[1] += (oriLen - s.length());
            s = Integer.toBinaryString(s.length());
            oriLen = s.length();
        }
        return answer;
    }
}