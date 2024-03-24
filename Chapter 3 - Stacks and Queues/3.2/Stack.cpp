#include "Stack.hpp"

Stack::Stack() {

}

void Stack::push(int val) {
    stack.push(val);
    min_stack.push(min_stack.empty() ? val : min_stack.top() < val ? min_stack.top() : val);
}

void Stack::pop() {
    stack.pop();
    min_stack.pop();
}

int Stack::top() {
    return stack.top();
}

int Stack::getMin() {
    return min_stack.top();
}
