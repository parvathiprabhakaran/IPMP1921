#include <bits/stdc++.h>
using namespace std;
struct node{
 int val;struct node* next;
};
struct node* insert(struct node* start,int val){
	if(start==NULL){
		start=new struct node;start->val=val;start->next=NULL;return start;
	}
	struct node* e=start;
	while(e->next!=NULL){e=e->next;}
	e->next=new struct node;
	e->next->val=val;e->next->next=NULL;return start;
}
struct node* merge(struct node* start,struct node* a){
	struct node* p;p=NULL;struct  node* r=new struct node;r=start;struct node* q=new struct node;q=a;
	while(r!=NULL&&q!=NULL){
		if(r->val<=q->val){p=insert(p,r->val);
            r=r->next;
		}else{
            p=insert(p,q->val);q=q->next;
		}
	}
	while(r!=NULL){p=insert(p,r->val);r=r->next;}
	while(q!=NULL){p=insert(p,q->val);q=q->next;}
	return p;
}
struct node* mergesort(struct node* start,int n){
	if(n<=1){return start;}
	int t=0,l=n/2;
	struct node* p=new struct node;p=start;struct node* q=new struct node;while(p!=NULL){
		t++;if(t==l){q=p->next;break;}p=p->next;
	}
	p->next=NULL;
	start=mergesort(start,n/2);q=mergesort(q,n-n/2);
	start=merge(start,q);
	return start;
}
int main(){
    	int n;cin>>n;struct node* start;start=NULL;
    	for(int i=0;i<n;i++){int g;cin>>g;start=insert(start,g);}
    	start=mergesort(start,n);
    	while(start!=NULL){
    		cout<<start->val<<" ";start=start->next;}
    		return 0;}