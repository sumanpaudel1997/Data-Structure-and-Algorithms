# front = -1
# rear = -1
# max_size = 5


# class Queue:

#     def __init__(self) -> None:
#         queue = self.queue = []

#     def enque(self):
#         pass

#     def deque(self):
#         pass

#     def is_full(self):
#         if len(self.queue) == max_size:
#             print('Queue is Full')

#     def is_empty(self):
#         if not self.queue:
#             print('Queue is Empty.')

#     def peek():
#         pass
    
    
#     queue = Queue()

MAX_SIZE = 5

front = -1
rear = -1
queue = []
def is_empty():
    if rear == -1:
        return 1
    else:
        return 0
    
def is_full():
    if 