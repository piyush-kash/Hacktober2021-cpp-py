n = int(input("n: "))

while (n < 1):
    n = int(input("n: "))

for i in range(n):
    print(((n - i - 1) * " ") + ((i + 1) * "#"))
