#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int sz(node* head){
    node* tmp=head;
    int size=0;
    while(tmp!=NULL){
        tmp=tmp->next;
        size++;
    }
    return size;
}
void showOutput(node* head){
    node* tmp=head;
    cout<<"output : ";
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }cout<<endl;
}
void takesInput(node*& head, node*& tail){
    int val;
    while(true){
        cin>>val;
        if(val==-1) break;;
        node* newNode = new node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
    }
    showOutput(head);
}

void insertTail(node*& head, node*& tail){
    int val; cin>>val;
    node* newNode = new node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=tail->next;
    }
    showOutput(head);
}
void insertHead(node*& head, node*& tail){
    int val; cin>>val;
    node* newNode = new node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
    showOutput(head);
}
void insertAny(node* head){
    node* tmp=head;
    int pos, val; cin>>pos>>val;
    if(pos==1){
        cout<<"select insertHead"<<endl;
        return;
    }
    int count=1;
    while(count<pos-1){
        tmp=tmp->next;
        if(tmp==NULL){ cout<<"position doesn't exist"; return; };
        count++;
    }
    node* newNode=new node(val);
    newNode->next=tmp->next;
    tmp->next=newNode;
    showOutput(head);
}
void deleteTail(node* head){
    node* tmp=head;
    while(tmp->next->next !=NULL){
        tmp = tmp->next;
    }
    node* toDelele=tmp->next;
    tmp->next=NULL;
    delete toDelele;
    showOutput(head);

}
void deleteHead(node*& head){
    node* toDelete = head;
    head=head->next;
    delete toDelete;
    showOutput(head);
}
void deleteAny(node* head){
    node* tmp=head;
    int pos; cin>>pos;
    // if(pos==1){cout<<"select delete head";return;};
    int count=1;
    while(count<pos-1){
        tmp=tmp->next;
        if(tmp==NULL){ cout<<"position doesn't exist "; return; };
        count++;
    }
    if(tmp->next==NULL){ cout<<"position doesn't exist "; return; };
    node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    showOutput(head);
}
int main(){
    node* head=NULL;
    node* tail=NULL;
    while(true){
        cout<<"-1. exits "<<endl;
        cout<<"1. takes_input "<<endl;
        // cout<<"2. show_output "<<endl;
        cout<<"3. insert_tail"<<endl;
        cout<<"4. insert_head"<<endl;
        cout<<"5. insert_any"<<endl;
        cout<<"6. delete_tail"<<endl;
        cout<<"7. delete_head"<<endl;
        cout<<"8. delete_any"<<endl;
        cout<<"9. total_nodes(size)"<<endl;


        int op; cin>>op;
        if(op==1)takesInput(head, tail);
        else if(op==2)showOutput(head);
        else if(op==3)insertTail(head, tail);
        else if(op==4)insertHead(head, tail);
        else if(op==5)insertAny(head);
        else if(op==6)deleteTail(head);
        else if(op==7)deleteHead(head);
        else if(op==8)deleteAny(head);
        else if(op==9)cout<<sz(head)<<endl;;
    }

    return 0;
}