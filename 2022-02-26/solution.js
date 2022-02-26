function solution(dartResult) {
  const stack = [];

  const numbers = [];
  const darts = [];

  for (const dart of dartResult) {
    const number = Number(dart);
    const isNumber = Number.isInteger(number);

    if (isNumber) {
      numbers.push(dart);
      continue;
    }

    const newNumbers = [];
    let combinedNumber = "";

    while (numbers.length > 0) {
      const number = numbers.pop();
      if (number !== undefined) {
        combinedNumber = number + combinedNumber;
      }
    }

    combinedNumber !== "" && darts.push(combinedNumber);
    darts.push(dart);
  }

  const dartResultLength = dartResult.length;
  for (let i = 1; i < dartResultLength; i++) {
    const dart = darts[i];
    const previousDart = darts[i - 1];
    let currentNumber = 0;

    if (dart === "S") {
      currentNumber = Number(previousDart) ** 1;
      stack.push(currentNumber);
    } else if (dart === "D") {
      currentNumber = Number(previousDart) ** 2;
      stack.push(currentNumber);
      console.log(currentNumber);
    } else if (dart === "T") {
      currentNumber = Number(previousDart) ** 3;
      stack.push(currentNumber);
      console.log(currentNumber);
    } else if (dart === "*") {
      const firstPopped = stack.pop();
      const secondPopped = stack.pop();
      secondPopped && stack.push(secondPopped * 2);
      firstPopped && stack.push(firstPopped * 2);
    } else if (dart === "#") {
      const popped = stack.pop();
      popped && stack.push(popped * -1);
    }
  }

  return stack.reduce(
    (accumulatedValue, currentValue) => accumulatedValue + currentValue
  );
}
