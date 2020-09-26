#include "ADTList.h"

class ArrayList : public ADTList{
private:
	int tam;
	int it;
	int *arr;
public:
	ArrayList();
	~ArrayList();
	void push_back(int);
	int at(int);
	int size();
};
