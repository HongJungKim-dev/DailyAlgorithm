import java.util.Arrays;
class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int commandsLen = commands.length;
        int[] answer = new int[commandsLen];
        int start = 0;
        for(int i=0; i<commandsLen; i++){
            start = commands[i][0]-1;
            Arrays.sort(answer, start, commands[i][1]);
            answer[i] = answer[start + commands[i][2]];
        }
  
        return answer;
    }
}
