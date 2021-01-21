function solution(s) {
    const len = s.length;
    const isEven = len%2;
    const mid = len/2;
    let ans = [];
    let answer = '';
    let temp = [];
    if (isEven === 1) {
        ans = temp.concat(s[mid-1]);
        ans.push(temp.concat(s[mid]));
    } else if (isEven === 0) {
        ans= temp.concat(s[mid]);
    }
    answer = ans.join();
    return answer;
}
