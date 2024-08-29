def solution(files):
    files_list = {}
    
    index, head, number = 0, "", ""
    for file in files:
        index, head, number = 0, "", ""
        while not file[index].isdigit(): #HEAD
            head += file[index]
            index += 1
        while index < len(file) and file[index].isdigit(): #NUMBER
            number += file[index]
            index += 1
        files_list[file] = {"head": head.lower(), "number": int(number)}
    
    return sorted(files, key= lambda x : (files_list[x]["head"], files_list[x]["number"]))