#include<iostream>
using namespace std;
class node{
  public:
    int data;
    node *next;
};
node *head ;
void delete_begin(){
  node *ptr;
  ptr = head;
  head = ptr->next;
  delete ptr;
}
void delete_end(){
  node *n = head;
  node *n1;
  while(n->next!=NULL){
    n1= n;
    n=n->next;
  }
  n1->next=NULL;
  delete n;

}
int main(){
  node *a = new node();
  node *b = new node();
  node *c = new node();
  a->data =1;
  a->next =b;
  b->data =2;
  b->next =c;
  c->data =3;
  c->next=NULL;
  head = a;
  delete_end();
  cout<<head->data;
  return 0;
}