#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
struct node{
int data;
struct node *pleft;
struct node *pright;
};
typedef struct node NODE;
typedef NODE *Tree;
void them (Tree &t){
    t=NULL;

}
void themnode(Tree &t,int x){
if(t==NULL){
    NODE *p=new NODE;
    p->data=x;
    p->pleft=NULL;
    p->pright=NULL;
    t=p;
    }
    else{
        if(t->data>x){
            themnode(t->pleft,x);
        }
        else if(t->data<x){
            themnode(t->pright,x);
        }

    }
}
void xuatcayNLR(Tree t){
if(t!=NULL){
   cout<< t->data<<" ";
   xuatcayNLR(t->pleft);
    xuatcayNLR(t->pright);

}
}
void menu(Tree &t,int x){
    int luachon;
    do{
cout<<"==========CHUC NANG========="<<endl;
cout<<" ========== 1.nhap ============"<<endl;
cout<<" ============ 2.xuat du lieu ============="<<endl;
cout<<" NHAP VAO LUA CHON ";
cin>>luachon;
if(luachon<=0||luachon>2){
    cout<<" sai nhap lai ";
}
    }while(luachon<=0||luachon>2);

if(luachon==1){
cout<<" nhap vao du lieu ";
cin>>x;
themnode(t,x);
}
else if(luachon==2){
    xuatcayNLR(t);
}
}
int main(){
    int x;
    Tree t;
    them(t);
    menu(t,x);
}
