#include <iostream>
#include "Stack.h"
//lab1
Stack::Stack(
     top=-1;
     )

bool Stack::isFull(){return MAX_STACK_SIZE-1;}
bool Stack::isEmpty(){return top<0;}

Stack::~Stack(){}

void Stack::push(int element)
{
    if(top >=MAX_STACK_SIZE - 1)//(isFull=1)
    {
        std::cout<<"Cannot push"<<element<<".Stack is full";
    }
    else
    {
        top++;
        this->elements[top]=element;
    }
}

int Stack::pop()
{
    if(top<0)//(isEmpty=1)
    {
        std::cout<<"Cannot pop an element from an empty stack."<<
    }
    else
    {
        //remove and return this ->elements[top];top--;
        return elements[top--];
    }
}

int Stack::top(){cout<<element[top];}

int main()
{
Stack s;
s.push(3);
s.push(4);
s.push(22);
s.pop();
s.top();
}
