lv = input().split()
lv[0] = int(lv[0])
if lv[1] == "miss":
    print(0)
elif lv[1] == "bad":
    print(lv[0]*200)
elif lv[1] == "cool":
    print(lv[0]*400)
elif lv[1] == "great":
    print(lv[0]*600)
elif lv[1] == "perfect":
    print(lv[0]*1000)