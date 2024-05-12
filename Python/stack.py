


arr = [1,2,3]
size = []


class Stack():
    
    def __init__(self, size):
        self.stack = []
        self.size = size
        self.top = -1

    def is_empty(self):
        if not self.stack and self.top == -1:
            return "Stack Underflow. Stack is Empty !!!"
    
    def is_full(self):
        if len(self.stack) == size:
            return "Stack Overflow. Stack is Full !!!"

    def peek(self):
        if not self.is_empty():
            return f"The top of stack is: \n{self.stack[-1]}"
        return self.is_empty()

    def push(self, value):
        self.stack.append(value)
        return self.stack
    
    def pop(self):
        self.stack.pop()
        return self.stack
    
sp = Stack(5)

# sp.push()
# sp.pop()
print(sp.peek())

# print(is_empty())
# size = int(input("Enter the size of an array: \n"))
# for i in range(0, size):
#     # is_full(arr)
#     ele = int(input())
#     arr.append(ele),
#     # print("Stack is", arr[-i])
#     print((arr.reverse()))

# # is_full(arr)

# # print(*reversed(arr))