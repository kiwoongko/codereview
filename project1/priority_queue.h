#include <queue>

template <typename T> 
class templatePriorityQueue {
	private:
		std::priority_queue<T> storage;
	public:
		templatePriorityQueue();
		~templatePriorityQueue();
		bool empty() const;
		const T& top() const;
		int size();
		void push(const T&);
		void pop();	
};
