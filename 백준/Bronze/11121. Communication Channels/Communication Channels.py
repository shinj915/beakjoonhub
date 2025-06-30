t = int(input())
for i in range(t):
    binary_string = input().split()
    if(binary_string[0] == binary_string[1]):
        print("OK")
    else:
        print("ERROR")