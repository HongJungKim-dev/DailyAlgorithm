def solution(n):
    num = str(n)
    answer = 0
    for digit in num:
        answer += int(digit)
    return answer
