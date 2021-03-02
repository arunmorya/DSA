#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node *link;
};

Node *Top=NULL;

void push(int val){
    Node *temp=new Node();
    temp->data=val;
    temp->link=Top;
    Top=temp;
}

void Display(){
    Node *temp = Top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<"\n";
}

void pop(){
    if(Top==NULL){
        cout<<"\nStack UnderFlow";
    }
    Node *temp=Top;
    Top=Top->link;
    delete(temp);
}

int peek(){
    if(Top==NULL)
        cout<<"\nStack UnderFlow";
    return Top->data;    
}

void free(){
    Node *temp;
    while(Top!=NULL){
        temp=Top->link;
        delete(Top);
        Top=temp;
    }
}

int main(){
    cout<<endl<<"pushing 3 elements into stack..."<<endl<<endl;
    push(10);
    push(20);
    push(30);

    cout<<"displaying elements.."<<endl;
    Display();

    cout<<endl<<"printing top element..."<<endl;
    cout<<peek()<<endl<<endl;

    cout<<"poping two element from stack"<<endl<<endl;
    pop();
    pop();

    cout<<"displaying elements"<<endl;
    Display();

    free();

    return 0;
}