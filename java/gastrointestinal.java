import java.util.HashMap;
import java.util.Map;

public class Solution {
  public int solution(String[][] clothes) {
    int answer = 1;
    Map<String, Integer> category = new HashMap<>();

    for (String[] clothe : clothes) {
      category.put(clothe[1], category.getOrDefault(clothe[1], 0) + 1);
    }

    for (int cnt : category.values()) {
      answer *= (cnt + 1);
    }

    return answer - 1;
  }
}
