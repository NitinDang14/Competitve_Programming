class Node {

    let value: Int
    var next: Node?

    init(value: Int, next: Node? = nil) {
        self.value = value
        self.next = next
    }

}

class LinkedList {

    let head: Node

    init(node: Node) {
        self.head = node
    }

    convenience init(nodeValue: Int) {
        self.init(node: Node(value: nodeValue))
    }

    func addNode(node: Node) {
        var current: Node = self.head
        while current.next != nil {
            current = current.next!
        }
        current.next = node
    }

    func addNode(withValue value: Int) {
        self.addNode(node: Node(value: value))
        print("Value has been added to node :  \(value)")
    }

  func printFunc(){
    
  }

}

let list = LinkedList(nodeValue: 4)
list.addNode(withValue: 3)
list.addNode(withValue: 8)

list.printFunc()
