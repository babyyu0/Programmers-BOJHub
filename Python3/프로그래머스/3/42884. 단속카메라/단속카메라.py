def solution(routes):
    cams, flag = [], True
    
    for route in sorted(routes, key=lambda x:x[0]):
        flag = False
        for i in range(len(cams)):
            if route[0] <= cams[i][1]:
                # print(route, "is in", cams[i])
                flag = True
                cams[i][0],cams[i][1] = route[0], min(route[1], cams[i][1])
        if not flag:
            cams.append(route)
        # print("CAMS:", cams)
    
    return len(cams)