class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insertAtBegin(self, data):
        newNode = Node(data)
        if self.head is None:
            self.head = newNode
            return
        else:
            newNode.next = self.head
            self.head = newNode

    def insertAtIndex(self, data, index):
        newNode = Node(data)
        currentNode = self.head
        pos = 0
        if index == pos:
            self.insertAtBegin(data)
        else:
            while currentNode is not None and pos + 1 != index:
                currentNode = currentNode.next
                pos = pos + 1

                if currentNode != None:
                    newNode.next = currentNode.next
                    currentNode.next = newNode
                else:
                    print("Index not found!!")

    def insertAtEnd(self, data):
        newNode = Node(data)
        if self.head is None:
            self.head = newNode
            return

        currentNode = self.head
        while currentNode.next:
            currentNode = currentNode.next
        currentNode.next = newNode

    def printLL(self):
        currentNode = self.head
        while currentNode:
            print(currentNode.data)
            currentNode = currentNode.next

    def updateNode(self, data, index):
        currentNode = self.head
        pos = 0
        if pos == index:
            currentNode.data = data
        else:
            while currentNode is not None and pos != index:
                pos = pos + 1
                currentNode = currentNode.next
            if currentNode != None:
                currentNode.data = data
            else:
                print("Index Not Found!!")

    def removeFirstNode(self):
        if self.head is None:
            print("The LL has no nodes")
        else:
            self.head = self.head.next

    def removeLastNode(self):
        if self.head is None:
            return
        currentNode = self.head
        while currentNode.next.next:
            currentNode = currentNode.next
        currentNode.next = None

    def removeAtIndex(self, index):
        if self.head is None:
            return
        currentNode = self.head
        pos = 0
        if pos == index:
            self.removeFirstNode
        while currentNode != None and pos + 1 != index:
            pos = pos + 1
            currentNode = currentNode.next
        if currentNode != None:
            currentNode.next = currentNode.next.next
        else:
            print("Index not found")


lList = LinkedList()

lList.insertAtEnd(5)
lList.insertAtEnd(4)
lList.insertAtEnd(3)
lList.insertAtEnd(2)
lList.insertAtEnd(1)

lList.printLL()
