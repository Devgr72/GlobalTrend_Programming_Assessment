#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val):data(val),next(nullptr){}
};
node* rev_linkedlist(node* head){
    node*previous=nullptr;
    node* current=head;
    node* next=nullptr;
    while(current!=nullptr){
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
    }
return previous;
}
void display(node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
cout<<endl;
}
int main(){
    node* head=new node(1);
    head->next=new node(8);
    head->next->next=new node(72);
    head->next->next->next=new node(50);
    cout<<"Orignal linkedlist:";
    display(head);
    head=rev_linkedlist(head);
    cout<<"Reversed linkedlist:";
    display(head);
    return 0;
}