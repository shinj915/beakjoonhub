n = int(input());

while n > 0:
    b_count = 0
    g_count = 0
    name = input()
    b_count += name.count('b')
    b_count += name.count('B')
    g_count += name.count('g')
    g_count += name.count('G')
    print(name+" is ", end="")
    if b_count > g_count:
        print("A BADDY")
    elif b_count < g_count:
        print("GOOD")
    else:
        print("NEUTRAL")
    n -= 1