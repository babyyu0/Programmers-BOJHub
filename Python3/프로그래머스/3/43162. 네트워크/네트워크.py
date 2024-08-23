def solution(n, computers):
    parents = [i for i in range(n)]
    
    def find_parent(node):
        nonlocal parents
        if parents[node] == node: #자신이 루트 노드일 때
            return node
        parents[node] = find_parent(parents[node])
        return parents[node]
    
    def set_parent(change, before):
        for i in range(n):
            if parents[i] == before:
                parents[i] = change
    
    for i, computer in enumerate(computers):
        for j in range(i + 1, n):
            if computer[j] == 1:
                parent_a, parent_b = find_parent(i), find_parent(j)
                set_parent(min(parent_a, parent_b), max(parent_a, parent_b))
        # print(parents)
    
    return len(set(parents))