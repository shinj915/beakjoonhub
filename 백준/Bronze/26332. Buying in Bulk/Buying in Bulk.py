n = int(input())
for i in range(n):
    items, cost = map(int, input().split())
    print(items, cost)
    if items == 1:
        print(cost)
    else:
        cost *= items
        items -= 1
        cost -= items*2
        print(cost)