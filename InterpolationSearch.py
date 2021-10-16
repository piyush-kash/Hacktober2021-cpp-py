# Algorithm for InterPolation Search

# Steps ->

    # Formula:

    # The idea of formula is to return higher value of pos
    # when element to be searched is closer to arr[hi]. And
    # smaller value when closer to arr[lo]
    # pos = lo + [ (x-arr[lo])*(hi-lo) / (arr[hi]-arr[Lo]) ]

    # arr[] ==> Array where elements need to be searched
    # x     ==> Element to be searched
    #    lo    ==> Starting index in arr[]
    # hi    ==> Ending index in arr[]

# Rest of the Interpolation algorithm is the same except the above partition logic. 
# Step1: In a loop, calculate the value of 'pos' using the probe position formula. 
# Step2: If it is a match, return the index of the item, and exit. 
# Step3: If the item is less than arr[pos], calculate the probe position of the left sub-array. Otherwise calculate the same in the right sub-array. 
# Step4: Repeat until a match is found or the sub-array reduces to zero.
# Below is the implementation of algorithm. 

# Python3 program to implement
# interpolation search
# with recursion

# If x is present in arr[0..n-1], then
# returns index of it, else returns -1.


def interpolationSearch(arr, lo, hi, x):
	if (lo <= hi and x >= arr[lo] and x <= arr[hi]):
		pos = lo + ((hi - lo) // (arr[hi] - arr[lo]) * (x - arr[lo]))
		if arr[pos] == x:
			return pos
		if arr[pos] < x:
			return interpolationSearch(arr, pos + 1, hi, x)
		if arr[pos] > x:
			return interpolationSearch(arr, lo, pos - 1, x)
	return -1

arr = [10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47]
n = len(arr)

x = 18
index = interpolationSearch(arr, 0, n - 1, x)

if index != -1:
	print("Element found at index", index)
else:
	print("Element not found")