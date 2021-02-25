import java.util.Map;
import java.util.HashMap;

class Solution {
    public int solution(String[][] clothes) {
        int clothesLen = clothes.length;

        Map<String, Integer> map = new HashMap<>();
        
        for(int i = 0; i < clothesLen; i++){
            if(map.get(clothes[i][1]) == null){
                map.put(clothes[i][1], 1);
            }else{
                map.put(clothes[i][1], map.get(clothes[i][1])+1);
            }
        }
        
        int answer = 1;
        for(String keys: map.keySet()){
            answer *= (map.get(keys) + 1);
        }
        
        return answer -1;
    }
}
