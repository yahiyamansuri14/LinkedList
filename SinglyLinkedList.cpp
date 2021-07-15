class Node{
  constructor(key){
    this.key = key
    this.next = null
  }
}
class LinkedList{
   constructor(head){
     this.head = null
   }
  //always insert at the last index
  insert(key){
    var node = new Node(key)
    var temp
    if( this.head == null)
      this.head = node
    else{
      temp = this.head
      while( temp.next )
        temp = temp.next
      temp.next = node
    }    
  }
//insert at specific index
  insertAtIndex(key,index){
    console.log(this.getSize())
    if( index < 0 || index > this.getSize()){
      console.log("pls enter a valid index")
      return
    }
    var node = new Node(key)
    if( index == 0){
      node.next = this.head
      this.head = node  
    }else{
      var temp = this.head
      for(var i = 1; i < index - 1; i++){
        temp = temp.next
      }
      node.next = temp.next
      temp.next = node
    }
  }
  //print the list
  printList(){
    if( this.head == null){
     console.log("Linked List is empty")
      return
    }
    var temp = this.head
    while(temp){
      console.log(temp.key)
      temp = temp.next
    }
  }
  //return size of list
  getSize(){
    if( this.head == null){
      return 0
    }
    var temp = this.head
    var count = 0
    while(temp){
      count++
      temp = temp.next
    }
    return count
  }
}

var obj = new LinkedList()
obj.insert(10)
obj.insert(20)
obj.insert(30)
obj.printList()
obj.getSize()
obj.insertAtIndex(40,2)
obj.printList()
