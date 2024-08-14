def solution(phone_book):
    phone_book.sort()
    # print("Sorted Phone Book:", phone_book)
    
    before = "None"
    for p in phone_book:
        if len(p) >= len(before) and before == p[:len(before)]:
            return False
        before = p
    
    
    return True