public class Solution {
    public int solution(int[] numbers, int target) {
        return dfs(target, 0, numbers[0], numbers) + dfs(target, 0, -numbers[0], numbers);
    }

    public int dfs(int target, int i, int sum, int[] numbers) {
        if (i == numbers.length - 1) {
            if (sum == target) {
                return 1;
            }
            return 0;
        }
        return dfs(target, i + 1, sum + numbers[i + 1], numbers) + dfs(target, i + 1, sum - numbers[i + 1], numbers);
    }
}
