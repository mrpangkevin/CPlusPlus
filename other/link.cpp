#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

typedef struct node{

    int d;
    struct node *next;
}NODE;

NODE* gen_link(vector<int>v){
    vector<int>::iterator it=v.begin();
    NODE *head,*p,*q;
    head = q = p = NULL;
    for(;it!=v.end();it++){
        p = (NODE*)malloc(sizeof(NODE));
        if(head==NULL){
            head=p;
            q=p;
        }else{
            q->next=p;
            q=p;
        }
        p->d=*it;

    }
    p->next=NULL;
    return head;
}
void view_link(NODE *head){
    NODE *p = head;
    while(p!=NULL){
        cout<<p->d<<" ";
        p=p->next;
    }
    cout<<endl;
}

int genRandom(int range){
    int d;
    do{
        d=random()%range;
    }while(d==0);
    return d;
}
vector<int> gen_vector_int(int len){
    vector<int>v;
    for(int i=0,d;i<len;i++){
        d=genRandom(len);
        v.push_back(d);
    }
    return v;
}
void view_vector_int(vector<int>v){
    int i=1;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++,++i){
        cout<<i<<":"<<*it<<endl;
    }
}
int main(int argc, char* argv[])
{
    vector<int> v = gen_vector_int(20);
    view_vector_int(v);
    NODE* head = gen_link(v);
    view_link(head);

    return 0;
}

