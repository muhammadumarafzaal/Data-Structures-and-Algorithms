//#include <iostream>
//#include <cmath>
//#include <limits>
//#include <stdexcept>
//using namespace std;
//class Polynomial {
//private:
//    class Term {
//    public:
//        int exponent;
//        double coefficient;
//        Term* next;
//
//        Term(int exp, double coeff) : exponent(exp), coefficient(coeff), next(nullptr) {}
//    };
//    Term* head;
//    int size;
//    void Delete() {
//        Term* temp = head;
//        while (temp) {
//            Term* next = temp->next;
//            delete temp;
//            temp = next;
//        }
//        head = nullptr;
//        size = 0;
//    }
//    void insertTerm(int exp, double Coefficient)
//    {
//        if (Coefficient == 0) {
//            return;
//        }
//        Term* Newnode = new Term(exp, Coefficient);
//        if (!head || head->exponent < exp) 
//        {
//            Newnode->next = head;
//            head = Newnode;
//        }
//        else {
//            Term* current = head;
//            Term* prevNode = nullptr;
//            while (current && current->exponent > exp) 
//            {
//                prevNode = current;
//                current = current->next;
//            }
//            if (current && current->exponent == exp) {
//                current->coefficient += Coefficient;
//                if (current->coefficient == 0) {
//                    if (prevNode) {
//                        prevNode->next = current->next;
//                    }
//                    else {
//                        head = current->next;
//                    }
//                    delete current;
//                }
//                delete Newnode;
//                return;
//            }
//            if (prevNode) 
//            {
//                prevNode->next = Newnode;
//                Newnode->next = current;
//            }
//            else
//            {
//                Newnode->next = head;
//                head = Newnode;
//            }
//        }
//        size++;
//    }
//public:
//    Polynomial() : head(nullptr), size(0) {}
//    // Copy constructor for creating a deep copy
//    Polynomial(const Polynomial& other) : head(nullptr), size(0) {
//        Term* current = other.head;
//        while (current) {
//            insertTerm(current->exponent, current->coefficient);
//            current = current->next;
//        }
//    }
//    ~Polynomial() {
//        Delete();
//    }
//    Polynomial& operator=(const Polynomial& other) {
//        if (this != &other) {
//            Delete();
//            Term* current = other.head;
//            while (current) {
//                insertTerm(current->exponent, current->coefficient);
//                current = current->next;
//            }
//        }
//        return *this;
//    }
//    void Input() {
//        Delete();
//        int numTerms;
//        cout << "==Enter the number of terms==";
//        cin >> numTerms;
//        if (numTerms < 0) throw invalid_argument("Number of terms cannot be negative. Put a positive number");
//        for (int i = 0; i < numTerms; ++i) {
//            int exp;
//            double Coefficient;
//            cout << "Enter coefficient and exponent: ";
//            cin >> Coefficient >> exp;
//            if (cin.fail()) throw invalid_argument("Invalid input for coefficient or exponent.");
//            insertTerm(exp, Coefficient);
//        }
//    }
//    void Output() 
//    {
//        Term* current = head;
//        if (!current) {
//            cout << "0" << endl;
//            cout << "The list is empty!" << endl;
//            return;
//        }
//        while (current) {
//            if (current->coefficient != 0) 
//            {
//                if (current != head) {
//                    cout << (current->coefficient > 0 ? " + " : " - ");
//                }
//                if (current->exponent == 0) {
//                    cout << abs(current->coefficient);
//                }
//                else if (current->exponent == 1) {
//                    cout << abs(current->coefficient) << "n";
//                }
//                else {
//                    cout << abs(current->coefficient) << "n^" << current->exponent;
//                }
//            }
//            current = current->next;
//        }
//        cout << endl;
//    }
//    Polynomial Addfunc(Polynomial& other) 
//    {
//        Polynomial result;
//        Term* current = head;
//        Term* otherCurrent = other.head;
//        while (current && otherCurrent) {
//            if (current->exponent > otherCurrent->exponent) {
//                result.insertTerm(current->exponent, current->coefficient);
//                current = current->next;
//            }
//            else if (current->exponent < otherCurrent->exponent) {
//                result.insertTerm(otherCurrent->exponent, otherCurrent->coefficient);
//                otherCurrent = otherCurrent->next;
//            }
//            else {
//                result.insertTerm(current->exponent, current->coefficient + otherCurrent->coefficient);
//                current = current->next;
//                otherCurrent = otherCurrent->next;
//            }
//        }
//        while (current) 
//        {
//            result.insertTerm(current->exponent, current->coefficient);
//            current = current->next;
//        }
//
//        while (otherCurrent) {
//            result.insertTerm(otherCurrent->exponent, otherCurrent->coefficient);
//            otherCurrent = otherCurrent->next;
//        }
//
//        return result;
//    }
//    Polynomial operator+(Polynomial& other) 
//    {
//        return Addfunc(other);
//    }
//    Polynomial Multiplyfunc(Polynomial& other) {
//        Polynomial result;
//        Term* current = head;
//        while (current) {
//            Term* otherCurrent = other.head;
//            while (otherCurrent) {
//                result.insertTerm(current->exponent + otherCurrent->exponent, current->coefficient * otherCurrent->coefficient);
//                otherCurrent = otherCurrent->next;
//            }
//            current = current->next;
//        }
//        return result;
//    }
//    Polynomial operator*(Polynomial& other)
//    {
//        return Multiplyfunc(other);
//    }
//    double Evaluatefunc(double x) 
//    {
//        double result = 0;
//        Term* current = head;
//        while (current) {
//            result += current->coefficient * pow(x, current->exponent);
//            current = current->next;
//        }
//        return result;
//    }
//
//    double operator()(double x) 
//    {
//        return Evaluatefunc(x);
//    }
//};
//int main() 
//{
//    try {
//        Polynomial p1, p2;
//        cout << "Input for Polynomial 1:\n";
//        p1.Input();
//        cout << "Input for Polynomial 2:\n";
//        p2.Input();
//        cout << "Polynomial 1: ";
//        p1.Output();
//        cout << "Polynomial 2: ";
//        p2.Output();
//        Polynomial sum = p1 + p2;
//        cout << "Sum: ";
//        sum.Output();
//        Polynomial product = p1 * p2;
//        cout << "Product: ";
//        product.Output();
//        double x;
//        cout << "||Enter a value for x to evaluate the polynomials||";
//        cin >> x;
//        cout << "Polynomial 1 evaluated at x = " << x << ": " << p1(x) << endl;
//        cout << "Polynomial 2 evaluated at x = " << x << ": " << p2(x) << endl;
//        cout << "Sum evaluated at x = " << x << ": " << sum(x) << endl;
//        cout << "Product evaluated at x = " << x << ": " << product(x) << endl;
//    }
//    catch (const exception& ex) {
//        cerr << "Error: " << ex.what() << endl;
//    }
//    return 0;
//}
