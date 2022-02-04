function solution(numbers) {
  const stack = [];

  for (const number of numbers) {
    const popped = stack.pop();

    popped >= 0 && stack.push(popped);

    if (popped === number) {
      continue;
    }

    stack.push(number);
  }

  return stack;
}
