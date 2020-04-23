class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def get_intersection(head1, head2):
    curr1 = head2
    curr2 = head1

    while (curr1 != curr2):
        if (curr1 == None):
            curr1 =head2
        else:
            curr1 = curr1.next
        
        if (curr2 == None):
            curr2 = head1
        else:
            curr2 = curr2.next
    return curr1.data

    newNode = None
    head1 = Node()
    head1.data = 10
    head2 = Node()
    head2.data = 3
    newNode =  Node()
    newNode.data = 6
    head2.next = newNode
    newNode = Node()
    newNode.data = 9
    head2.next.next = newNode
    newNode = Node()
    newNode.data = 15
    head1.next = newNode
    head1.next = newNode
    head2.next.next.next = newNode
    newNode = Node()
    newNode.data =30
    head1.next.next = newNode
    head1.next.next.next = None

    print(get_intersection(head1,head2)) 