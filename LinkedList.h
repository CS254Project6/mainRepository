#ifndef LinkedList
#define LinkedList
template <class T>
class LinkedList
{
private: struct NODE
	{
		T info; NODE *next;
	};
		 NODE *LL;
public: LinkedList()
	{
		OLL = NULL;
	}
	void Push (T x)
	{
		NODE *p = new (NODE);
		p -> info = x;
		p -> next = LL;
		LL = p;
	}
	T Pop()
	{
		NODE *p = LL;
		T x = p -> info;
		LL = p -> next;
		delete (p);
		return x;
	}
	bool Empty(){return (OLL == NULL)?true:false;}
};
#endif
