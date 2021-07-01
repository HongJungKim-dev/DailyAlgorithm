def solution(origin):
    start = 0
    current = ""
    prev = ""
    candidates = []
    equal = 0
    changed_string = ""
    unit = 1
    
    origin_length = len(origin)
    if origin_length == 1:
        return 1
    
    end = start + unit
    while unit <= (origin_length // 2):
        while end < origin_length + 1:
            current = origin[start:end]
            if current == prev:
                equal += 1
            elif current != prev and equal <= 0:
                equal += 1
            elif current != prev and equal > 0:
                if equal == 1:
                    changed_string += prev
                else:
                    changed_string += str(equal) + prev
                equal = 1
            start += unit
            end += unit
            prev = current

        if equal == 1:
            changed_string += prev
        else:
            changed_string += str(equal) + prev
            
        if len(origin) % (end - start) != 0:
            changed_string += origin[start:end]
            
        candidates.append(changed_string)
        
        unit += 1
        start = 0
        end = start + unit
        changed_string = ""
        prev = ""
        equal = 0

    candidates_lengths = [len(candidate) for candidate in candidates]
        
    return min(candidates_lengths)
