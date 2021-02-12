import java.util.PriorityQueue;
class Solution {
    public int solution(int[] scoville, int K) {
		PriorityQueue<Integer> pq = new PriorityQueue<>();
		
		int len = scoville.length;
		for(int i=0; i<len ;i++) {
			pq.offer(scoville[i]);
		}
		
		int count = 0;
		while(!pq.isEmpty()) {
			int first = pq.remove();
			if(first >= K) {
				break;
			}
            if(pq.isEmpty()==true){
                count = 0;
                break;
            }
			int second = pq.remove();
            int newScoville = first + second * 2;
            
            pq.add(newScoville);
            count++;
		}
        if(count==0){
            return -1;
        }
        return count;
    }
}
