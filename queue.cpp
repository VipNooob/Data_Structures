#include <iostream>
using namespace std;


class Queue {
private:
    int top;
    int rear;
    static const int size = 4;
    int arr[size];
    int count;
public:
    Queue() :top(0), rear(0), count(0) {}
    void push(int k) {
        if (top != rear || count == 0) {
            arr[rear++] = k;
            count++;
        }
        else
            cout << "Array is full\n";
        if (rear == size) {
            rear = 0;
        }
    }
    void get() {
        if (count > 0) {
            cout << arr[top++] << endl;
            count--;
        }
        else
            cout << "Array is empty\n";
        if (top == size) {
            top = 0;
        }
    }
};







int main()
{
    Queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    q1.get();
    q1.get();
    q1.get();
    q1.get();
    q1.get();
}

