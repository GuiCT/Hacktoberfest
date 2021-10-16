#include<stdio.h>
#include<stdlib.h>

struct queue{
	int data;
	struct queue *next;
};

struct queue *f=NULL;
struct queue *r=NULL;

void traversal(struct queue *p){
	while(p!=NULL){
		printf("element %d\n",p->data);
		p=p->next;
	}
}

void enqueue(int data){
	struct queue *p=(struct queue *)malloc(sizeof(struct queue));
	if(p==NULL){
		printf("full\n");
	}
	else{
		p->data=data;
		p->next=NULL;
		if(f==NULL){
			f=r=p;
		}
		else{
			r->next=p;
			r=p;
		}
	}
}

int dequeue(){
	struct queue *p=f;
	if(p==NULL){
		return -1;
		printf("empty\n");
	}
	else{
		f=f->next;
		int x=p->data;
		free(p);
		return x;
	}
}

int fval(){
	return f->data;
}

int lval(){
	return r->data;
}

int main(){
	printf("Dequeued element %d\n",dequeue());
    	enqueue(12);
   	enqueue(13);
    	enqueue(14);
    	enqueue(15);
    	enqueue(16);
    	enqueue(17);
    	printf("Dequeued element %d\n",dequeue());
	printf("Dequeued element %d\n",dequeue());
    	enqueue(20);
    	traversal(f);
    
}