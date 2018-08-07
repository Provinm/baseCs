#coding=utf-8

# generate a binary tree


class Node(object):

    def __init__(self, val):

        self.left   = None
        self.right  = None
        self.parent = None
        self.val    = val

    def __str__(self):
        
        return str(self.val)

def _gen_binary_tree(lst, parent=None):
    '''generate a binary tree
    '''
    if not lst:
        return None
    length = len(lst)
    pivot = length // 2
    node = Node(lst[pivot])

    left = _gen_binary_tree(lst[:pivot], node)
    right = _gen_binary_tree(lst[pivot+1:], node)

    node.left = left
    node.right = right
    node.parent = parent

    return node 

def _check_node(root):
    '''reverse binary tree
    '''
    if root:
        _check_node(root.left)
        print(root.val)
        _check_node(root.right)


def _search_binary_tree(root, item):
    '''search binary tree using recursive
    '''
    if not root:
        return None
    elif root.val == item:
        return root

    elif root.val > item:
        return _search_binary_tree(root.left, item)

    else:
        return _search_binary_tree(root.right, item)


def _search_binary_tree_it(root, item):
    
    '''search binary tree using itorative way
    '''

    while root:
        
        val = root.val
        if val == item:
            return root

        elif val > item:
            
            root = root.left
        
        else:
            root = root.right

    return None


def _minimum_tree(root):
    
    '''find the smallest value
    '''

    while root.left or root.right:
        root = root.left

    return root

def _max_tree(root):
    
    '''find the biggest value
    '''
    while root.right:
        
        root = root.right

    return root

def _insert_node(root, node):
    '''insert a node into binary tree
    '''
    pivot = None
    while root:
        
        pivot = root
        if node.val < root.val:        
            root = root.left
        else:
            root = root.right

    if pivot is None:
        return node

    elif pivot.val > node.val:
        pivot.left = node

    else:
        pivot.right = node


def _delete_node(root, node):
    '''delete node
    '''

    if node.left is None:
        _transplant(root, node, node.right)

    elif node.right is None:
        
        _transplant(root, node, node.left)

    else:
        
        right_min_node = _minimum_tree(node.right)
        

def _transplant(root, node1, node2):
    '''transplant node1 to node2 in root tree
    '''

    # invalid tree
    if node1.parent == None:
        root = node2

    # other situations
    elif node1.parent.left == node1:
        node1.parent.left = node2

    else:
        node1.parent.right = node2

    if not node2:
        node1.parent = node2.parent


def _create_node(val):
    
    return Node(val)

def run():

    lst = list(range(1, 11))
    root = _gen_binary_tree(lst)
    # _check_node(root)
    # print(_search_binary_tree(root, 100))
    # print(_search_binary_tree_it(root, 6))
    # print(_minimum_tree(root))
    # print(_max_tree(root))

    node = _create_node(4)
    _insert_node(root, node)
    _check_node(root)

run()



with open("*.txt", "r") as f:

    data = f.readlines()


split_data = [i.split(",")[:3] for i in data]
lons, lats, vals = list(zip(*split_data))
