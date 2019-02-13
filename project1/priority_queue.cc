#include "priority_queue.h"

template <>
templatePriorityQueue<int>::templatePriorityQueue(){
}

template <>
templatePriorityQueue<int>::~templatePriorityQueue(){
}

template <>
bool templatePriorityQueue<int>::empty() const{
        return storage.empty();
}

template <>
int templatePriorityQueue<int>::size() {
        return storage.size();
}

template <>
const int& templatePriorityQueue<int>::top() const{
        return storage.top();
}

template <>
void templatePriorityQueue<int>::pop(){
        storage.pop();
}

template <>
void templatePriorityQueue<int>::push(const int& val){
        storage.push(val);
}
