s = input("enter string: ")
dict1 = {}
for i in s:
    dict1[i] = dict1.get(i, 0) + 1

print(dict1)
