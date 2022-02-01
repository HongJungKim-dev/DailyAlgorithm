function solution(n) {
  let answer = "";
  const rules = [4, 1, 2];
  let num = n;
  const repeat = 3;

  while (num > 0) {
    const remainder = num % repeat;
    answer = rules[remainder] + answer + "";

    const newNum = Math.floor(num / repeat);
    num = remainder === 0 ? newNum - 1 : newNum;
  }

  return answer;
}
