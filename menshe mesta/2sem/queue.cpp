class queue 
{
	struct element
	{
		int inf;
		element* next;
		element(int x) :inf(x), next(0) {}
	};
	element* head, * tail;
public:
	queue() :head(0), tail(0) {}
	bool empty()
	{
		return head == 0;
	}
	int get()
	{
		if (empty()) return 0;
		element* t = head;
		int i = t->inf;
		head = t->next;
		if (head == 0)
		{
			tail = 0;
		}
		delete t;
		return i;
	}
	void put(int data)
	{
		element* t = tail;
		tail = new element(data);
		if (!head)
		{
			head = tail;
		}
		else
		{
			t->next = tail;
		}
	}
};