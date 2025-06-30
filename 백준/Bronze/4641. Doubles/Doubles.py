def search_list(n, x):
    leng = len(n)
    for i in range(0, leng):
        if x == n[i]:
            return 1
    return 0

while True:
    count = 0
    n = list(map(int, input().split()))
    if n[0] == -1:
        break
    n.remove(0)
    for i in range(0, len(n)):
        count += search_list(n, n[i] * 2)
    print(count)