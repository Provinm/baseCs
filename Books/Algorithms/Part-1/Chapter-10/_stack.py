#coding=utf-8

class Stack(object):


    def __init__(self):

        self._lst = []
        self._top_index = 0

    def push(self, item):

        self._lst.append(item)
        self._top_index += 1

    def pop(self):

        assert not self.empty(), "stack is empty"
        self._top_index -= 1
        return self._lst.pop(-1)

    def empty(self):

        return self._top_index == 0

    def __str__(self):
        
        return "{}".format(self._lst)

if __name__ == "__main__":

    stack = Stack()

    stack.push(1)
    stack.push(1)
    stack.push(1)
    for i in range(3):
        print(stack.pop())
    print(stack)
    stack.pop()


