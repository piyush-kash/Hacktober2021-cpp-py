#Bubble Sort Program implementation in Python, where the List is input by the user during the runtime.
#This code is Contributed by Reejo.


def Bubblesort(l,n):                #BubbleSort function
    for i in range(0,n):
        for j in range(0,n-i-1):
            if l[j]>l[j+1]:
                l[j],l[j+1]=l[j+1],l[j]
    
    
                                            
    
n=int(input("Enter the Number of Elements to Insert:-"))  

l=[ ]          #Creating a list

print("\n----Enter the Elements of the List----\n")
for i in range(0,n):                            #Inserting the Elements of the List.
    print("Enter ",i+1," Element:-",end="")
    temp=int(input())
    l.append(temp)

print("Before BubbleSorting the List is:-")
print(l)

Bubblesort(l,n)        #Calling bubble sort.
print("After BubbleSorting the List is:-")
print(l)

