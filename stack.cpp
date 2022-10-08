#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}node;
struct node *top=NULL;
void create(){
    if(top!=NULL){
      cout<<"stack already has been created"<<endl;
    }
    else{
        cout<<"creating a new stack "<<endl;
        struct node *p=new struct node;
        cout<<"enter data"<<endl;
        cin>>p->data;
        p->next=NULL;
        top=p;
    }
}
void push(){
    if (top==NULL){
        cout<<"creating a new stack"<<endl;
        create();
    }
    else{
        struct node *p=new struct node;
        cout<<"enter new data"<<endl;
        cin>>p->data;
        p->next=top;
        top=p;
    }
}
void pop(){
    if(top==NULL){
        cout<<"underflow"<<endl;
    }
    else{
        struct node *q=top;
        top=q->next;
        q->next=NULL;
        free(q);
    }
}
void peek(){
     if(top==NULL){
        cout<<"underflow"<<endl;
    }
    else{
        struct node *q=top;
        cout<<"first element of stack "<<q->data<<endl;
    }
}
void display(){
     if(top==NULL){
        cout<<"underflow"<<endl;
    }
    else{
        cout<<"Values in stack"<<endl;
        struct node *q=top;
        while(q!=NULL){
            cout<<q->data<<" ";
            q=q->next;
        }
    }
    cout<<endl;
}
int main(){
    create();
    char c='y';
    int k;
    while(c=='Y'||c=='y'){
        cout<<"1.push\n2.pop\n3.peek\n4.display\n";
        cin>>k;
        switch (k)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;    
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            cout<<"wrong input"<<endl;
            break;
        }
        cout<<"enter y/n to contiue/exit"<<endl;
        cin>>c;
    }
    return 0;      
}
