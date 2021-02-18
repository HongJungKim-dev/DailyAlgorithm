class Solution {
    public String solution(String s) {
        String answer = "";
		
		int j = 0;
		for(int i = 0; i <s.length(); i++, j++) {
			if(s.charAt(i) == ' ') {
				j = -1;
			}
			if(j %2 == 0) {
				answer += (char)(s.charAt(i) + ('A' - 'a'));
			}else {
				answer += s.charAt(i);
			}
		}
        return answer;
    }
}
