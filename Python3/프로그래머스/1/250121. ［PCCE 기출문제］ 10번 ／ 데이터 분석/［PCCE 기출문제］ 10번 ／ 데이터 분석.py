def solution(data, ext, val_ext, sort_by):
    answer = [[]]
    word_dict = {"code": 0, "date": 1, "maximum": 2, "remain": 3}
    return sorted([d for d in data if val_ext > d[word_dict[ext]]], key=lambda x: x[word_dict[sort_by]])