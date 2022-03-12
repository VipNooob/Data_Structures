// linked_list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class stack {
private:
    int pos;
    static const int SIZE = 3;
    int arr[SIZE];
    int count;
public:
    stack() :pos(0), count(0){}
    void push(int d) {
        if (pos >= 0 && pos < SIZE) {
            arr[pos++] = d;
            count++;
        }
        else
            cout << "Error (overflow)" << endl;
    }
    void pop() {
        if (count > 0) {
            cout << arr[--pos] << endl;
            count--;
        }
        else
            cout << "Error (empty)" << endl;
    }
};




int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.push(33);
    s.push(44);
    s.pop();
    s.pop();
    s.pop();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
