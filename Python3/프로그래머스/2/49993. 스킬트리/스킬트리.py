def solution(skill, skill_trees):
    skill_dict = {skill[i] : i for i in range(len(skill))}
    print(skill_dict)
    answer = 0
    
    sequence, flag = -1, True
    for skill_tree in skill_trees:
        sequence, flag = -1, True
        for st in skill_tree:
            if st in skill_dict:
                if skill_dict[st] != sequence + 1:
                    flag = False
                    break
                sequence = skill_dict[st]
        # print("possible" if flag else "impossible")
        answer += int(flag)
    return answer