class Solution {
    public boolean solution(int x) {
        boolean answer = false;
        int quotient = 0;
        int remainder = 0;
        int accumulator = 0;
        
        remainder = x%10;
        quotient = x/10;
        
        accumulator += remainder;
        
        while(quotient != 0){
            remainder = quotient%10;
            quotient = quotient/10;
            
            accumulator += remainder;
        }   
        if( accumulator == 0 ){
            return false;
        }
        if(x%accumulator == 0){
            answer = true;
        }
        return answer;
    }
}
