#coding=utf-8

class Node(object):

    def __init__(self, val):

        self.next = None
        self.prev = None
        self.val = val



def make_linked_list():

    lst = list(range(1, 11))

    head = None
    active = None

    for idx, item in enumerate(lst):
        
        if idx == 0:
            head = active = Node(item) 

        else:
            
            pre = active
            active.next = Node(item)
            active = active.next
            active.prev = pre
            
    return head

linked = make_linked_list()


# search

def search_item(head, item):

    while head:
        
        if head.val == item:
            return head

        head = head.next

    return None



    