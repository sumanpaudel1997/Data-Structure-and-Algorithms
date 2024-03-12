

# since python automatically take cares of memory allocation, we need not have to worry.
# given is the sample way to create the dynamic array or list in python

size = int(input("Enter the size of an array: "))

dynamic_array = []

# creating dynamic array
print("Enter the elements in the array")
for _ in range(0, size):
    value = float(input())
    dynamic_array.append(value)

# accessing array
print(f'\nThe values in the arrays are:')
print(*dynamic_array, sep= ", ")

# sum and average of elements of given array.
print(f'\nThe sum of given dynamic array is: {sum(dynamic_array)}.')
print(f'The average of given dynamic array is: {round(sum(dynamic_array)/len(dynamic_array),2)}.')
