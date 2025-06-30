import sys
n = int(sys.stdin.readline())
count_A = count_B = 0
for i in range(n):
    score_A, score_B = map(int, sys.stdin.readline().split())
    if score_A > score_B:
        count_A += 1
    elif score_A < score_B:
        count_B += 1
print(count_A, count_B)