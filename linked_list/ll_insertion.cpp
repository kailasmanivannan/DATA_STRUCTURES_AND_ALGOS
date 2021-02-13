#include<iostream>
using namespace std;
class node{
  public:
    int data;
    node *next;
};
node *head =NULL;
void push(node *n,int num){
  node *a =new node();
  a->data = num;
  a->next = n;
  head=a;
}
void append(node *n,int num){
  node *a = new node();
  a->data = num;
  a->next= NULL;
  while(n->next!=NULL){
    n=n->next;
  }
  n->next = a;
}
void insertafter(node *prev ,int num){
  node *n = new node();
  n->data =num;
  n->next=prev->next;
  prev->next = n;
}
void print(node *n){
  while(n!=NULL){
    cout<<n->data<<" ";
    n=n->next;
  }
}
int main(){
  push(head,2);
  push(head,1);
  append(head,3);
  append(head,4);
  insertafter(head->next,7);
  print(head);
  return 0;
}

