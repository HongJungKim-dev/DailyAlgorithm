function solution(n)
{
    return [...(n + '')].reduce(
        (accumulator = 0, currentValue = 0) => accumulator*1 + currentValue*1
    )*1;
}
