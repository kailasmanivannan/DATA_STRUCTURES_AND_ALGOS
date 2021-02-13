#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
int main(){
	node *a = new node();
	node *b = new node();
	node *c = new node();
	a->data =1;
	a->next = b;
	b->data = 2;
	b->next = c;
	c->data = 3;
	c->next =NULL;
	node *n = a;
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
	return 0;
}