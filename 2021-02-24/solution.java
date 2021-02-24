class Solution {
    public String solution(String s, int n) {
        int sLen = s.length();
		
		String answer = "";
		for(int i = 0; i <sLen ; i++) {
			char currentAlphabet = s.charAt(i);
			if(currentAlphabet == 'z' || currentAlphabet =='Z') {
				answer += (char)( (int)currentAlphabet - (int)('z' - 'a') + n-1);
			}else if(currentAlphabet == ' ') {
				answer += currentAlphabet;
			}else {
				answer += (char)( (int)currentAlphabet + n);
			}
		}
        return answer;
    }
}
