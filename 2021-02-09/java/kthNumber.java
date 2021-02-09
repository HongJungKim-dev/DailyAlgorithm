import java.util.Arrays;

public class Solution {
    public int[] solution(int[] numbers, int[][] commands) {
        int startIdx = 0;
        int endIdx = 0;
        int targetIdx = 0;

        int numberLen = numbers.length;
        int commandsLen = commands.length;

        int[] answer = new int[commandsLen];
        int[] temp = new int[numberLen];

        for (int i = 0; i < commandsLen; i++) {

            for (int j = 0; j < numberLen; j++) {
                temp[j] = numbers[j];
            }

            startIdx = commands[i][0] - 1;
            endIdx = commands[i][1];
            Arrays.sort(temp, startIdx, endIdx);

            targetIdx = commands[i][2] - 1;
            answer[i] = temp[startIdx + targetIdx];
        }
        return answer;
    }
}
