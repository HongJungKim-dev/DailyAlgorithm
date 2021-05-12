def solution(answers):
    students_answer = [[1,2,3,4,5],[2,1,2,3,2,4,2,5],[3,3,1,1,2,2,4,4,5,5]]
    student_num = 0
    correct = [0,0,0]
    mvp_students = {1:0, 2:0, 3:0}
    answer = []

    for i in range(len(answers)):
        length = len(students_answer[student_num])
        if answers[i] == students_answer[student_num][i % 5]:
            correct[student_num] += 1
        
        if answers[i] == students_answer[student_num + 1][i % 8]:
            correct[student_num + 1] += 1
        
        if answers[i] == students_answer[student_num + 2][i % 10]:
            correct[student_num + 2] += 1
    
    mvp_students[1] = correct[0]
    mvp_students[2] = correct[1]
    mvp_students[3] = correct[2]
        
    mvp_students_sorted = sorted(mvp_students.items(), key=lambda x:x[1],reverse=True)

    max = mvp_students_sorted[0][1]
  
    if max == 0:
        return []
    
    for key, value in mvp_students_sorted:
        if max == value:
            answer.append(key)
  
    return answer
