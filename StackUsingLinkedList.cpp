#include<iostream>
#include<cstdlib>
 using namespace std;
 struct Node{
    int data;
    struct Node *next;
 }*top=NULL;
 void push(int x){
    Node *temp=new Node;
    if(temp==NULL)
        cout<<"Stack Overflow\n";
    else{
        temp->data=x;
        temp->next=top;
        top=temp;
    }
    cout<<"Element inserted at top\n";
 }
 int pop(){
    int x=-1;
    Node *temp;
    if(top==NULL)
        cout<<"Stack Underflow\n";
    else{
        temp=top;
        top=top->next;
        x=temp->data;
        free(temp);
    }
    return x;
 }
 int peek(int pos){
    Node *temp=top;
    for(int i=0;i<pos-1&&temp!=NULL;i++)
        temp=temp->next;
    if(temp!=NULL)
        return temp->data;
    else
        return -1;
 }

 int stackTop(){
    if(top)
        return top->next;
    return -1;

 }
 int isEmpty(){
    return top?0:1;
 }
 int isFull(){
    Node *temp=new Node;
    int r=temp?1:0;
    free(temp);
    return r;
 }
 int main(){
    push(10);
    push(11);
    push(12);
    push(13);
    push(14);
    cout<<"Popped element is\n"<<pop();
    cout<<"Popped element is\n"<<pop();
    int result=peek(3);
    if(result==-1)
        cout<<"Not valid position in Linked List\n";
    else
        cout<<"element is\t"<<result;
    return 0;
 }
