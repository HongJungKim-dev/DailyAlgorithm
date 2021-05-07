function solution(progresses, speeds) {
  const deploys = [];

  const len = progresses.length;

  const days = progresses.map(
    (progress, index) => Math.ceil((100 - progress) / speeds[index]),
  );

  let accumulator = 0;
  let count = 1;
  let max = days[0];

  for (let i = 1; i < len; i += 1, count += 1) {
    accumulator += days[i];

    if (max >= accumulator) {
      continue;
    }

    deploys.push(count);

    max = days[i];
    count = 0;
    accumulator = 0;
  }

  deploys.push(count);
  return deploys;
}