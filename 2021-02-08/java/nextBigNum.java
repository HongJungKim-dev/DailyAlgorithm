class Solution {
    public int solution(final int n) {
        int temp = 0;
        int currentCnt = 0;
        int targetCnt = 0;
        int target = n;
        int current = 0;

        targetCnt = decimalToBinary(target, targetCnt);

        for (current = n + 1; currentCnt != targetCnt; current++) {
            currentCnt = 0;
            temp = current;
            currentCnt = decimalToBinary(temp, currentCnt);
        }
        return current - 1;
    }

    public static int decimalToBinary(int current, int cnt) {
        while (current > 0) {
            if (current % 2 == 1) {
                cnt++;
            }
            current = current / 2;
        }
        return cnt;
    }
}
