def solution(my_string):
    my_string = my_string.strip()
    while(my_string.count("  ") > 0):
        my_string = my_string.replace("  ", " ")
    return my_string.split()