template <typename T>
class queue
{
	int frontIndex;
	int lastIndex;
	int maxSize;     
	int size;
	T  *data;
public:
	queue(int s) {
		maxSize = s;
		data = new T[maxSize];
		frontIndex = -1;
		lastIndex = 0;
		this->size = 0;
	}
	int getSize() {
		return size;
	}
	bool isEmpty() {
		return size == 0;
	}
	T front() {
		if (frontIndex == -1) {
			cout << "Queue is empty " << endl;
			return 0;
		}
		return data[frontIndex];
	}
	void push(T element) {
		if (size == maxSize) {
			cout << "Queue is full " << endl;
			return;
	}

		if (frontIndex == -1) {
			frontIndex = 0;
		}

		data[lastIndex] = element;
		lastIndex++;
		size++;
	}
	T pop() {
		if (frontIndex == -1) {
			cout << "Queue is empty " << endl;
			return 0;
		}
		T temp = data[frontIndex];
		for (int i = 0; i < size; i++) {
			data[i] = data[i + 1];
		}
		lastIndex--;
		size--;
		if (size == 0) {
			frontIndex = -1;
			lastIndex = 0;
		}
		return temp;
	}
};

#pragma once
