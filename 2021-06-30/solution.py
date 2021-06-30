def solution(info, query):
    answer = []
    new_query = []
    splited_query = []
    new_info = []
    count = 0
    satisfied = True
    
    for element in query:
        element = element.replace("and ", "")
        element = element.replace(" ", " and ")
        new_query.append(element)

    for element in new_query:
        element = element.split(' and ')
        splited_query.append(element)

    for element in info:
        element = element.split(' ')
        new_info.append(element)

    
    for i in range(len(splited_query)):
        query_row = splited_query[i]
        for j in range(len(new_info)):
            info_row = new_info[j]
            for index in range(len(info_row)):
                condition = info_row[index]
                if condition == info_row[-1]:
                    satisfied = satisfied and int(condition) >= int(query_row[index])
                else:
                    if query_row[index] == "-":
                        continue
                    satisfied = satisfied and condition == query_row[index]
            if satisfied:
                count += 1
            satisfied = True
        answer.append(count)         
        count = 0
        
    return answer
