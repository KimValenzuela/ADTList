#include "ADTList.h"

struct node{
	int n;
	node *next;
};

class LinkedList : public ADTList{
private:
	struct node *head;
	struct node *tail;
	int tam;
public:
	LinkedList();
	~LinkedList();
	void push_back(int);
	int at(int);
	int size();
};
