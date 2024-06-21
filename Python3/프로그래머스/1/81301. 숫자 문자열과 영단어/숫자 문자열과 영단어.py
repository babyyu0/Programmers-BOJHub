def solution(s):
    alstr = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    for i, al in enumerate(alstr):
        s = s.replace(al, str(i))
    
    return int(s)