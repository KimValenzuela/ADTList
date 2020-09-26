#ifndef ADTLIST_H
#define ADTLIST_H

class ADTList{
	public:
		virtual void push_back(int) = 0;
		virtual int at(int) = 0;
		virtual int size() = 0;
};

#endif

