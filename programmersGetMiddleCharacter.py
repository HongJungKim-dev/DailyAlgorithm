def solution(s):
    length = len(s)
    mid = int(length/2)
    if length % 2 == 0:
        return s[mid - 1] + s[mid]
    return s[mid]

print(solution("abcde"))
print(solution("qwer"))
