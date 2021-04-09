#pragma once

template<typename Type>
class Stack
{
private:
	enum { MAX = 10 };
	Type items[MAX];
	int top;
public:
	Stack() {
		top = 0;
		return;
	}
	bool isempty() {
		return top == 0;
	}
	bool isfull() {
		return top == MAX;
	}
	bool push(const Type& _item) {
		if (top < MAX) {
			items[top++] = _item;
			return true;
		}
		else {
			return false;
		}
	}
	bool pop(Type& _item) {
		if (top > 0) {
			_item = items[--top];
			return true;
		}
		else {
			return false;
		}
	}
};
