handle_dict = list()
n, i = map(int, input().split())
for j in range(n):
    handle = input()
    handle_dict.append(handle)
handle_dict.sort()
print(handle_dict[i-1])