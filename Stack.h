#include "LinkedList.h"

template <class T>
class Stack : public LinkedList<T>{
	public:
		bool Delete (T &element)
		{
			if(this->first==0) return false;
			Node<T> *current = this->first;
			element=current->data;
			delete current;
			current = current->link;
			this->current_size--;
            return true;
        }
};
