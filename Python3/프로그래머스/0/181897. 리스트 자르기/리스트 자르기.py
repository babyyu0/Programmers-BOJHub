def solution(n, slicer, num_list):
    a,b,c = slicer[0], slicer[1] + 1, slicer[2]
    if n == 2:
        b = len(num_list)
    if n == 1:
        a = 0
    if n != 4 :
        c = 1
        
    return num_list[a:b:c]