#include<iostream>
 using namespace std;
 struct Node{
    int data;
    Node *next;
 };
 Node* create(Node *start){
    char ch;
    int x;
    Node *newnode,*temp;
    cout<<"do you NULL want to create a new node\n";
    cin>>ch;
    while(ch=='y' || ch=='Y'){
        newnode=new Node;
        cout<<"Enter element\n";
        cin>>x;
        newnode->data=x;
        newnode->next=NULL;
        if(start==NULL)
            start=newnode;
        else
            temp->next=newnode;
        temp=newnode;
        cout<<"Node created\n";
        cout<<"Do you want to continue\n";
        cin>>ch;
    }
    return start;
 }
 void display(Node *temp){
     if(temp==NULL){
        cout<<"\n LinkedList is empty";
        return;
     }
     cout<<"\nElements of LinkedList are";
     while(temp!=NULL){
        cout<<"\t"<<temp->data;
        temp=temp->next;
     }

 }
 
 void Rdisplay(Node *temp){
    if(temp!=NULL){
        cout<<temp->data;
        Rdisplay(temp->next);
    }
 }
 int countNode(Node *temp){
    int count=0;


    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    //cout<<"\tTotal no of nodes in Linked List is:-\t"<<count<<endl;
    return count;
 }
 void sumNode(Node *temp){
    int sum=0;
    while(temp!=NULL){
        sum+=temp->data;
        temp=temp->next;
    }
    cout<<"\nSum of all nodes is:-"<<sum<<endl;
 }
 Node* insert_beg(Node *start){
    Node *newnode;
    int x;
    newnode=new Node;
    cout<<"Enter element\n";
    cin>>x;
    newnode->data=x;
    newnode->next=start;
    start=newnode;
    cout<<"node inserted\n";
    return start;
 }
 Node* insert_sp(Node *start){
    Node *newnode,*temp;
    int pos,x;
    cout<<"Enter position\n";
    cin>>pos;
    int c=countNode(start);
    if(pos<1 || pos>c+1){
        cout<<"Invalid position\n";
        return start;
    }
    newnode=new Node;
    cout<<"Enter element\n";
    cin>>x;
    newnode->data=x;
    if(pos==1){
        newnode->next=start;
        start=newnode;
    }else{
        temp=start;
        for(int i=1;i<pos-1;i++)
            temp=temp->next;
        newnode->next=temp->next;
        temp->next=newnode;
    }
    cout<<"Node Inserted\n";
    return start;
 }

 void middleOfList(Node* start){
    if(start==NULL){
        cout<<"List is empty\n";
        return;
    }
    int count=countNode(start);
    Node *temp=start;
    for(int i=1;i<(count/2);i++){
        temp=temp->next;
    }
    cout<<"Middle of Linked list is:-"<<temp->data;

 }

 void middleOfList(Node *start){
    if(start==NULL){
        cout<<"List is empty\n";
        return;
    }
    Node *first,*second;
    first=start;
    second=start;
    while(second!=NULL && second->next!=NULL){
        first=first->next;
        second=second->next->next;
    }
    cout<<"Middle element is :-"<<first->data;
 }


 Node* reverseElements(Node *start){
    //this method will reverse a linked list by changing elements
    int size=countNode(start);
    int a[size],i=0;
    Node *temp;
    temp=start;
    while(temp!=NULL){
        a[i]=temp->data;
        temp=temp->next;
        i++;
    }
    temp=start;
    i--;
    while(temp!=NULL){
        temp->data=a[i--];
        temp=temp->next;
    }
    return start;
 }
 
 Node* revereUsingLinks(Node* start){
    Node *p,*q,*r;
    p=start;
    q=NULL;
    r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    start=q;
    return q;
 }
 int main(){
    Node *start=NULL;
    start=create(start);
    //Rdisplay(start);
    //countNode(start);
    //start=insert_beg(start);
    //start=insert_sp(start);
    //middleOfList(start);
//    start=reverseElements(start);

    start=revereUsingLinks(start);
    Rdisplay(start);

    return 0;
 }
