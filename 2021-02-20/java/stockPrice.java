public class Solution {
    public int[] solution(int[] prices) {
        int[] answer = new int[prices.length];
        int pricesLen = prices.length;
        for(int i = 0; i < pricesLen; i++){
            int cnt = 0;
            for(int j = i+1; j < pricesLen; j++){
                if(prices[i] > prices[j]) {
                    break;
                }else cnt++;
            }
            answer[i]=cnt;
        }
        return answer;
    }
}
