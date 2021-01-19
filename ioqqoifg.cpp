#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
struct Node{
    int data;
    struct Node *pNext;
};
typedef struct Node node;
struct list{
    node*pHead;
    node*pTail;
};
typedef struct List Li;
void addlist(Li &k){
    k.pHead=NULL;
    k.pTail=NULL;
}
node *addnode(int x){
    node*p= new node;
    if(p==NULL){
        cout<<"bo nho day";
        return NULL;
    }
    p->data=x;
    p->pNext=NULL;
}
void addheadnode(Li &k,node*p){

    if(k.pHead==NULL){
        k.pHead=k.pTail=p;
    }
    else
    {
    p->k.pHead=NULL;
    k.pHead=p;
    }
}
void addTailnode(Li &k,node*p){

    if(k.pHead==NULL){
        k.pHead=k.pTail=p;
    }
    else
    {
    k.pTail->PNext=p;
    p=k.pTail;
    }
}
void xuatnode(Li k){
    for (node*l=k.pHead;l!=NULL;l=l->pNext){
        cout<<l->data<<" ";
    }
}
int main(){
int n;
addlist(k);
cout<<" nhap vao n :";
cin>>n;
for (int i=0;i<n;i++){
    int x;
    cout<<" nhap vao du lieu :=";
    cin>>x;
    node*p=addnode(x);
    addTailnode(k,p);
}
xuatnode(k);
}
