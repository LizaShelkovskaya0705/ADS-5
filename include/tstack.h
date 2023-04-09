// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack{
 private:
    T arr[100];
    int max;
 public:
    TStack() :max(-1) {
    void push(T value){
      if (isFull()) {
        throw std::string("Stack - full");
      } else {
        arr[++max ] = value;
      }
    }
      const T& pop() {
      if (isEmpty()) {
        throw std::string("Stack - empty");
      } else {
        return arr[max--];
      }
    }
    bool isEmpty()const {
      return max == -1;
    }
    bool isFull()const {
      return max == size - 1;
    }
    const T& get()const {
      return arr[max];
    }
};
#endif  // INCLUDE_TSTACK_H_
