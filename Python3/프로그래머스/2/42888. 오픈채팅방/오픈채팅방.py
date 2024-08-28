from collections import deque

def solution(record):
    dq, nickname = deque(), dict()
    
    command, u_id, name = None, None, None
    for rec in record:
        if rec[0] in ['C', 'E']: #닉네임 변경 / 입장
            command, u_id, name = rec.split(' ')
            nickname[u_id] = name
        elif rec[0] == 'L': #퇴장
            command, u_id = rec.split(' ')
        dq.append([u_id, rec[0]])
    
    answer = []
    while dq:
        u_id, command = dq.popleft()
        if command == 'E':
            answer.append(nickname[u_id] + "님이 들어왔습니다.")
        elif command == 'L':
            answer.append(nickname[u_id] + "님이 나갔습니다.")
    
    return answer