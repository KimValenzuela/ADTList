#include <bits/stdc++.h>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList(){
	head = NULL;
	tail = NULL;
	tam = 0;
}

LinkedList::~LinkedList(){
	struct node *ptr;
	while(head != NULL){
		ptr = head;
		head = head -> next;
		free(ptr);
	}
}

void LinkedList::push_back(int num){
	struct node *new_node;
	new_node = new node();
	new_node->n = num;
	if(tam == 0){
		head = new_node;
		tail = new_node;
	}
	else{
		tail->next = new_node;
		new_node->next = NULL;
		tail = new_node;
	}
	tam++;
}

int LinkedList::at(int num){
	if(num <= tam){
		struct node *aux;
		aux = head;
		while(--num){
			aux = aux->next;
		}
		return aux->n;
	}else return -1;
}

int LinkedList::size(){
	return tam;
}

