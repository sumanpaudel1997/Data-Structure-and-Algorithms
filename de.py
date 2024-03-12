# # Create a list with n placeholder elements
# n = 5
# lst = [None] * n

# # Print the "placeholder" list:
# print(lst)

# # Overwrite the placeholder elements
# lst[0] = 'Alice'
# lst[1] = 0
# lst[2] = 42
# lst[3] = 12
# # lst[4] = 'hello'
# if len(lst) == n:
#     print('Overflow')
# print(lst)

# bracket = []

s = '{[()]}'

for i in s:
    if i in bracket:
        print(True)
    else:
        bracket.append(i)

    if '}' or ')' or ']' in bracket:
        bracket.pop()
    
print(bracket)