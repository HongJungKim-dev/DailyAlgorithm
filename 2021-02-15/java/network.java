import java.util.LinkedList;
import java.util.Stack;

public class Solution {
    public int solution(final int computerNum, final int[][] computers) {
        Stack<Integer> nextComputers = new Stack<>();
        int[] visited = new int[computerNum];
        int networkNum = 0;
        for (int i = 0; i < computerNum; i++) {
            if (visited[i] == 0) {
                visited[i] = 1;
                nextComputers.push(i);

                updateVisited(nextComputers, computers, computerNum, visited);
                networkNum++;
            }
        }
        return networkNum;
    }

    private void updateVisited(Stack<Integer> nextComputers, int[][] computers, int computerNum, int[] visited) {
        while (!nextComputers.isEmpty()) {
            int from = nextComputers.pop();
            for (int to = 0; to < computerNum; to++) {
                if (computers[from][to] == 1 && visited[to] == 0) {
                    visited[to] = 1;
                    nextComputers.push(to);
                }
            }
        }
    }
}
