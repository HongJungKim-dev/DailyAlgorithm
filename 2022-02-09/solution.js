function solution(s) {
  const stringUpperCase = s.toUpperCase();
  let pNum = 0;
  let yNum = 0;

  for (const word of stringUpperCase) {
    if (word === "P") {
      pNum += 1;
    } else if (word === "Y") {
      yNum += 1;
    }
  }

  return pNum === yNum;
}
