#include <bits/stdc++.h>
#include <stack>
using namespace std;
void display_stack(stack<int> stack);
void delete_middle(stack<int> &sta, int element);
void reverse_stack(stack<int> &sta);
int main()
{
    stack<int> stack;
    int n, end = 0, item, op, k, element;
    cout << "Enter the no. of elements to insert in the stack: ";
    cin >> n;
    cout << "Enter the " << n << " elements of stack: ";
    while (n--)
    {
        cin >> item;
        stack.push(item);
    }
    cout << "Choose an operation to perform on the stack: " << endl;
    while (!end)
    {
        cout << "1. Add an element" << endl
             << "2. Delete the last element" << endl
             << "3. Empty the stack" << endl;
        cout << "4. Return the top element" << endl
             << "5. Print the entire stack" << endl;
        cout << "6. Delete an element anywhere in stack." << endl
             << "7. Reverse the stack" << endl
             << "8.Exit" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Enter the element to add: ";
            cin >> item;
            stack.push(item);
            n += 1;
            break;
        case 2:
            stack.pop();
            n -= 1;
            break;
        case 3:
            while (!stack.empty())
            {
                stack.pop();
                n -= 1;
            }
            break;
        case 4:
            cout << "Top element: " << stack.top() << endl;
            break;
        case 5:
            display_stack(stack);
            break;
        case 6:
            cout << "Enter the element you want to remove: ";
            cin >> element;
            delete_middle(stack, element);
            break;
        case 7:
            reverse_stack(stack);
            cout << "Reversed Stack: ";
            display_stack(stack);
            break;
        case 8:
            end = 1;
            break;
        default:
            cout << "Please select one from the above options." << endl;
            break;
        }
        cout << endl
             << "New size of stack: " << stack.size() << endl;
    }
}
void display_stack(stack<int> stack)
{
    if (stack.empty())
        return;

    int x = stack.top();
    stack.pop();

    display_stack(stack);
    cout << x << " ";
    stack.push(x);
}
void delete_middle(stack<int> &sta, int element)
{
    int m = 0;
    if (sta.empty())
    {
        cout << "Element not found.";
        return;
    }
    if (element == sta.top())
    {
        sta.pop();
        m++;
    }
    if (sta.top() != element)
    {
        int x = sta.top();
        sta.pop();
        delete_middle(sta, element);
        sta.push(x);
    }
}
void reverse_stack(stack<int> &sta)
{
    if (sta.empty())
        return;
    int x = sta.top();
    sta.pop();
    reverse_stack(sta);
    sta.push(x);
}