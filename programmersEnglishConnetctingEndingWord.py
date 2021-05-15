def solution(n, words):
    dictionary = dict.fromkeys(words, 0)
    
    i = 0    
    for word in words:
        is_incorrect = i > 0 and prev_word[length - 1] != word[0]
        is_redundant = dictionary[word] != 0
        
        if is_incorrect or is_redundant:
            return [(i % n) + 1 , int(i / n) + 1]
        if not is_redundant:
            dictionary[word] += 1
        i += 1
        prev_word = word
        length = len(prev_word)
    return [0,0]

print(solution(3, ["tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank"])) #[3, 3]
print(solution(5, ["hello", "observe", "effect", "take", "either", "recognize", "encourage", "ensure", "establish", "hang", "gather", "refer", "reference", "estimate", "executive"])) #[0, 0]
print(solution(2, ["hello", "one", "even", "never", "now", "world", "draw"])) # [1, 3]
