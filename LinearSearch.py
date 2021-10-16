# Algorithm for Linear Search in Python

# Steps ->
# 1. Start from the leftmost element of arr[] and one by one compare it with each element of arr[].
# 2. If element matches with an element, return the index.
# 3. If element does not match with any of elements, return -1.

array = [8, 14, 15, 17, 20, 2, 4, 6, 9, 18]

def linearSearch(array, key):
    for i in range(len(array)):
        if array[i] == key:
            return i
    return -1

x = linearSearch(array, 4)
print(x)