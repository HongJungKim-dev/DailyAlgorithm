class Solution {
    public boolean solution(final String[] phoneBook) {
        boolean answer = true;
		final int bookLen = phoneBook.length;
		
		for(int i = 0; i < bookLen - 1; i++) {
			for(int j = 0; j < phoneBook[i].length(); j++) {
				if(phoneBook[i].charAt(j) 
						== phoneBook[i + 1].charAt(0)) {
						answer = false;
				}
			}
		}
        return answer;
    }
}
