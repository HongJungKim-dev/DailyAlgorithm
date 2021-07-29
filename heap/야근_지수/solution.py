import heapq

def solution(hour, works):
    if hour > sum(works):
        return 0

    heap_works = [-work for work in works]
    heapq.heapify(heap_works)

    for i in range(hour):
        max_work = -heapq.heappop(heap_works)
        heapq.heappush(heap_works, -(max_work - 1))

    return sum([work ** 2 for work in heap_works])
