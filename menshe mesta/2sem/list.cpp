class list
{
	struct element
	{
		int inf;
		element* next;
		element(int x) :inf(x), next(0) {}
	};
	element* head;
	int size;

	element* find(int x)
	{
		element* cur = head;
		for (int i = 0; i < size; i++)
		{
			if (cur->inf == x)
			{
				return cur;
			}
		}
	}
	element* find(int index, int x)
	{
		if ((index < 1) || (index > size))
		{
			return nullptr;
		}
		else
		{
			element* cur = head;
			for (int i = 1; i < index; i++)
			{
				cur = cur->next;
			}
			return cur;
		}
	}
public:
	list() :head(0), size(0) {}
	bool empty()
	{
		return head == 0;
	}
	int getlength()
	{
		return size;
	}
	int get(int x)
	{
		element* r = find(x);
		int i = r->inf;
		return i;
	}
	void insert(int index, int data)
	{
		element* newptr = new element(data);
		size = getlength() + 1;
		if (index == 1)
		{
			newptr->next = head;
			head = newptr;
		}
		else
		{
			element* prev = find(index -1, 0);
			newptr->next = prev->next;
			prev->next = newptr;
		}
	}
	void remove
};
