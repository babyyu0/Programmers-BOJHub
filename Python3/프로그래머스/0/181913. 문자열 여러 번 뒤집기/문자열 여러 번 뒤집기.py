def solution(my_string, queries):
    for query in queries:
        # print("my_string 1:", my_string[:query[0]])
        # print("my_string 2:", ''.join(reversed(my_string[query[0]:query[1] + 1])))
        # print("my_string 3:", my_string[query[1]:])
        my_string = my_string[:query[0]] + ''.join(reversed(my_string[query[0]:query[1] + 1])) + my_string[query[1] + 1:]
    return my_string