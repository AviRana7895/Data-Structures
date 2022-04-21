#include<iostream>
using namespace std;
class Node{
	public:
   		int value;
  		Node* next;
};
int main(){
  Node* head;
  Node* one=new Node();
  Node* two=new Node();
  Node* three=new Node();
  one->value=1;
  two->value=2;
  three->value=3;
  head=one;
  one->next=two;
  two->next=three;
  three->next=NULL;
  while(head!=NULL){
    cout<<head->value<<" ";
    head=head->next;
  }
}
