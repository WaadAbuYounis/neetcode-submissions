class MinStack:

    def __init__(self):
        self.stack = []
        self.length = 0
        self.minStack = []

    def push(self, val: int) -> None:
        self.stack.append(val)
        self.length += 1
        if not self.minStack or val <= self.minStack[-1][0]:
            self.minStack.append((val,self.length))
        
    def pop(self) -> None:
        if self.length == self.minStack[-1][1]:
            self.minStack.pop()
        self.length -= 1
        return self.stack.pop()

    def top(self) -> int:
        return self.stack[-1]
        

    def getMin(self) -> int:
        return self.minStack[-1][0]
        
