def filter_skill(skill, skill_trees):
    filtered_skills = []
    word = ""
    
    for skill_tree in skill_trees:
        for i in range(len(skill_tree)):
            for one in skill:
                if one == skill_tree[i]:
                    word += one
        filtered_skills.append(word)
        word = ""
    print(word)
    return filtered_skills
                    
def solution(skill, skill_trees):
    answer = 0
    filtered_skills = []
    filtered_skills = filter_skill(skill, skill_trees)

    no_answer = 0
    for filtered_skill in filtered_skills:
        skill_list = list(filtered_skill)
        for i in range(len(skill_list)):
            if skill[i] != skill_list.pop(0):
                no_answer += 1
                break
    
    return len(filtered_skills) - no_answer

print(filter_skill("CBD", ["BACDE", "CBADF", "AECB", "BDA"]))
print(solution("CBD", ["BACDE", "CBADF", "AECB", "BDA"]))

print(filter_skill("CBD", ["ZEF", "TIG", "LFE", "ICT"]))
print(solution("CBD", ["ZEF", "TIG", "LFE", "ICT"]))
