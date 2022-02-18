function solution(num) {
  let number = num;
  let loop = 0;
  const maxLoop = 500;

  while (number > 1 && loop < maxLoop) {
    const remaindar = number % 2;
    number = remaindar === 0 ? Math.floor(number / 2) : number * 3 + 1;
    loop += 1;
  }

  return loop < maxLoop ? loop : -1;
}
