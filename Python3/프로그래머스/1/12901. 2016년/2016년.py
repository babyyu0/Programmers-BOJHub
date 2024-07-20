def solution(a, b):
    monthdate = [0,0,31,29,31,30,31,30,31,31,30,31,30]
    for i in range(1, len(monthdate)):
        monthdate[i] += monthdate[i - 1];
    day = ["FRI","SAT","SUN","MON","TUE","WED","THU"]
    
    return day[(monthdate[a] + b - 1) % 7]