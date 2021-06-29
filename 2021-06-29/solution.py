def bfs(visited, computer, computers, computer_num):
    queue = []
    visited[computer] = True
    queue.append(computer)
    
    while len(queue) != 0:
        from_computer = queue.pop(0)
        visited[from_computer] = True
        for to_computer in range(computer_num):
            if computers[from_computer][to_computer] == 1 and not visited[to_computer]:
                queue.append(to_computer)
                
def solution(computer_num, computers):
    connect_num = 0
    visited = [False for computer in range(computer_num)]
    
    for computer in range(computer_num):
        if not visited[computer]:
            print(visited[computer], computer)
            bfs(visited, computer, computers, computer_num)
            connect_num += 1
            print(connect_num)
    return connect_num
