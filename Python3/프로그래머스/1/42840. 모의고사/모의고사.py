def solution(answers):
    answer = []
    x, y, z = [1,2,3,4,5], [2,1,2,3,2,4,2,5], [3,3,1,1,2,2,4,4,5,5]
    xi, yi, zi = 0, 0, 0
    xs, ys, zs = 0, 0, 0
    
    for a in answers:
        xs += 1 if a == x[xi] else 0
        ys += 1 if a == y[yi] else 0
        zs += 1 if a == z[zi] else 0
        
        xi = (xi + 1) % len(x)
        yi = (yi + 1) % len(y)
        zi = (zi + 1) % len(z)
    
    ps = [xs, ys, zs]
    return [i + 1 for i, s in enumerate(ps) if s == max(ps)]