#define MAX_STACK_SIZE 100
//header file for stack.cpp
class Stack{
    public:
        Stack();
        ~Stack();

        void push(int element);
        int pop();
        int top();
        bool isEmpty();
        bool isFull();

    private:
        int elements[MAX_STACK_SIZE];
        int top;
};
