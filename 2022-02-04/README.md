# 같은 숫자는 싫어

프로그래머스 문제 - [링크](https://programmers.co.kr/learn/courses/30/lessons/12906)

배열을 순회하면서 스택에서 pop한 요소와 같으면 stack에서 pop한 요소만 다시 push하고 다르면 순회한 배열의 값도 stack에 push한다.

주의하여야할것은 ` popped && stack.push(popped);` 이 경우 popped가 0이라면 falsy한 값이기 때문에 && 이후 연산을 진행하지 않는다. 다음과 같은 코드로 이를 방지할 수 있다.`(popped >= 0) && stack.push(popped);`
