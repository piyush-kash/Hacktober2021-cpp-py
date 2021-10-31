
def bubble_sort(array):
      temp = array
      for a in range(len(array)):
          for b in range(len(temp)-a-1):
              if(temp[b] > temp[b+1]):
                  temp[b], temp[b+1] = temp[b+1], temp[b]
      return temp
array = [10,9,8,3,4]
print("Sorted array is ",bubble_sort(array))
