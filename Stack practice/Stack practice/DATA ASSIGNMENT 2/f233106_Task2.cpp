#include <iostream>
#include <string>
using namespace std;
class node1 {
public:
    int data;
    node1* next;
    node1(int data1 = 0) : data(data1) {
        next = nullptr;
    }
};
class stack2 {
public:
    node1* top;
    stack2() {
        top = nullptr;
    }
    ~stack2() {
        node1* current = top;
        node1* next = nullptr;
        while (current) {
            next = current->next;
            delete current;
            current = next;
        }
        top = nullptr;
    }
    void push(int data);
    bool isempty();
    int pop();
};
int stack2::pop() {
    if (isempty()) {
        return 1;
    }
    int val = top->data;
    node1* n = top;
    top = top->next;
    delete n;
    return val;
}
void stack2::push(int data) {
    node1* n = new node1(data);
    n->next = top;
    top = n;
}
bool stack2::isempty() {
    return top == nullptr;
}

class node {
public:
    char data;
    node* next;
    node(char data) {
        this->data = data;
        next = nullptr;
    }
};

class stack {
private:
    node* top;
public:
    stack() {
        top = nullptr;
    }

    bool isempty();
    bool push(char c);
    char pop();
    void display();
    string infix_to_postfix(string s);
};
void stack::display() {
    if (isempty()) {
        return;
    }
    node* current = top;
    while (current) {
        cout << "Node has data = " << current->data << endl;
        current = current->next;
    }
    cout << endl;
}
char stack::pop() {
    if (isempty()) {
        cout << "Stack is empty\n";
        return '0';
    }
    char c = top->data;
    node* temp = top;
    top = top->next;
    delete temp;
    return c;
}
bool stack::push(char c) {
    node* n = new node(c);
    n->next = top;
    top = n;
    return true;
}
bool stack::isempty() {
    return top == nullptr;
}

// To check precedence
int precedence(char c) {
    if (c == '*' || c == '/' || c == '%') {
        return 2;
    }
    else if (c == '+' || c == '-') {
        return 1;
    }
    else {
        return 0;
    }
}
bool number(char c) {
    return (c >= '0' && c <= '9');
}
string stack::infix_to_postfix(string s) {
    string post;
    int num = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            push(s[i]);
        }
        else if (s[i] == ')') {
            while (!isempty() && top->data != '(') {
                post += top->data;
                post += ' ';
                pop();
            }
            pop();
        }
        else if (s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '+' || s[i] == '-') {
            while (!isempty() && precedence(s[i]) <= precedence(top->data)) {
                post += top->data;
                post += ' ';
                pop();
            }
            push(s[i]);
        }
        else if (number(s[i])) {
            num = (num * 10) + (s[i] - '0');
        }
        else if (s[i] == ' ' && num != 0) {
            post +=to_string(num);
            post += ' ';
            num = 0;
        }

        cout << "\nAt iteration (" << i + 1 << ") : \n";
        cout << "String = " << post << endl;
        cout << "Stack = ";
        node* temp = top;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    if (num != 0) {
        post +=to_string(num);
        post += ' ';
    }
    while (!isempty()) {
        post += top->data;
        post += ' ';
        pop();
    }
    return post;
}
int evaluate(string post) {
    int num = 0;
    stack2 s;
    for (int i = 0; i < post.length(); i++) {
        if (post[i] == '*' || post[i] == '/' || post[i] == '%' || post[i] == '+' || post[i] == '-') {
            int n1 = s.pop();
            int n2 = s.pop();
            int result = 0;
            if (post[i] == '*') {
                result = n2 * n1;
            }
            else if (post[i] == '+') {
                result = n2 + n1;
            }
            else if (post[i] == '/') {
                result = n2 / n1;
            }
            else if (post[i] == '-') {
                result = n2 - n1;
            }
            else if (post[i] == '%') {
                result = n2 % n1;
            }
            s.push(result);
        }
        else if (post[i] == ' ') {
            if (num != 0) {
                s.push(num);
                num = 0;
            }
        }
        else if (number(post[i])) {
            num = (num * 10) + (post[i] - '0');
        }
    }
    return s.pop();
}
string reverse(string s) {
    string rev;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == ')') {
            rev += '(';
        }
        else if (s[i] == '(') {
            rev += ')';
        }
        else {
            rev += s[i];
        }
    }
    return rev;
}
string infix_to_prefix(string s) {
    stack st;
    s = reverse(s);
    s = st.infix_to_postfix(s);
    s = reverse(s);
    return s;
}
int main() {
    string s;
    cout << "Enter string = ";
    getline(cin, s);
    int choice;
    bool exit = false;
    while (!exit) {
        cout << "Enter 1 to convert string to postfix \n";
        cout << "Enter 2 to convert string to prefix \n";
        cout << "Enter 0 to exit program\n";
        cout << "Enter choice = ";
        cin >> choice;
        if (choice == 1) {
            stack st;
            string post = st.infix_to_postfix(s);
            cout << "Postfix = " << post << endl;
            int num = evaluate(post);
            cout << "\nPostfix evaluation = " << num << endl;
        }
        else if (choice == 2) {
            string pre = infix_to_prefix(s);
            cout << "Prefix = " << pre << endl;
        }
        else if (choice == 0) {
            exit = true;
        }
        else {
            cout << "Invalid input\n";
        }
    }
    return 0;
}
