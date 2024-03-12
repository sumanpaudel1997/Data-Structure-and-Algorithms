import sys

stack = []

size = 3


def is_full():
    if len(stack) == size:
        return True


def is_emptpy():
    if len(stack) <= 0:
        print('Stack is empty')


def peek():
    if not is_emptpy():
        return stack[-1]
    else:
        return is_emptpy()


def push(n):

    if not is_full():
        stack.append(n)
        print(f"{n} has been pushed into the stack.")
    else:
        print('Stack is Full.')


def pop():
    if not is_emptpy():
        print(stack.pop())
        # stack.pop()
        
    else:
        return is_emptpy()


def exit():
    sys.exit(1)


# dict_mapper = {

#     1: is_emptpy(),
#     2: is_full(),
#     3: peek(),
#     # 4: push(n),
#     5: pop(),
#     6: exit()

# }


push(1)
push(2)
push(3)
push(4)
print(stack)
pop()
print(stack)
print(peek())
