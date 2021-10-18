# Algorithm for recursive binary search.

# Steps (Array should be sorted) ->

# 1. Compare x with the middle element.
# 2. If x matches with the middle element, we return the mid index.
# 3. Else If x is greater than the mid element, then x can only lie in the right half subarray after the mid element. So we recur for the right half.
# 4. Else (x is smaller) recur for the left half

def binarySearch(arr, l, r, x):
	while l <= r:
		mid = l + (r - l) // 2;
		if arr[mid] == x:
			return mid
		elif arr[mid] < x:
			l = mid + 1
		else:
			r = mid - 1
	return -1


arr = [ 10, 34, 56, 73, 98 ]
x = 34

result = binarySearch(arr, 0, len(arr)-1, x)

if result != -1:
	print ("Element is present at index % d" % result)
else:
	print ("Element is not present in array")
