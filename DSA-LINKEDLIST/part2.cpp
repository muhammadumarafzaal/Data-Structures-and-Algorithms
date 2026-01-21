//#include <iostream>
//#include <cmath>
//using namespace std;
//class Polynomial {
//private:
//    class Term {
//    public:
//        double coefficient;
//        int exponent;
//        Term* next;
//        Term(double coefficient, int exponent) {
//            this->coefficient = coefficient;
//            this->exponent = exponent;
//            this->next = nullptr;
//        }
//    };
//    Term* head;
//    int size;
//public:
//    Polynomial() : head(nullptr), size(0) {}
//    // Copy constructor
//    Polynomial(const Polynomial& other) : head(nullptr), size(0) {
//        Term* current = other.head;
//        while (current != nullptr) {
//            addTerm(current->coefficient, current->exponent);
//            current = current->next;
//        }
//    }
//    ~Polynomial() {
//        while (head != nullptr) {
//            Term* temp = head;
//            head = head->next;
//            delete temp;
//        }
//    }
//    // Overloaded assignment operator
//    Polynomial& operator=(const Polynomial& other) {
//        if (this != &other) {
//            while (head != nullptr) {
//                Term* temp = head;
//                head = head->next;
//                delete temp;
//            }
//            Term* current = other.head;
//            while (current != nullptr) {
//                addTerm(current->coefficient, current->exponent);
//                current = current->next;
//            }
//        }
//        return *this;
//    }
//    void input() {
//        int numTerms;
//        cout << "Enter the number of terms: ";
//        cin >> numTerms;
//        for (int i = 0; i < numTerms; i++) {
//            double coefficient;
//            int exponent;
//            cout << "Enter coefficient and exponent for term " << i + 1 << ": ";
//            cin >> coefficient >> exponent;
//            addTerm(coefficient, exponent);
//        }
//    }
//    void output() const {
//        Term* current = head;
//        bool isFirstTerm = true;
//        while (current != nullptr) {
//            if (!isFirstTerm) {
//                if (current->coefficient > 0) {
//                    cout << " + ";
//                }
//                else {
//                    cout << " - ";
//                }
//            }
//            if (abs(current->coefficient) != 1 || current->exponent == 0) {
//                cout << abs(current->coefficient);
//            }
//            if (current->exponent > 0) {
//                cout << "n";
//                if (current->exponent > 1) {
//                    cout << "^" << current->exponent;
//                }
//            }
//            isFirstTerm = false;
//            current = current->next;
//        }
//        cout << endl;
//    }
//    Polynomial add(const Polynomial& other) const {
//        Polynomial result;
//        Term* current1 = head;
//        Term* current2 = other.head;
//        while (current1 != nullptr && current2 != nullptr) {
//            if (current1->exponent > current2->exponent) {
//                result.addTerm(current1->coefficient, current1->exponent);
//                current1 = current1->next;
//            }
//            else if (current1->exponent < current2->exponent) {
//                result.addTerm(current2->coefficient, current2->exponent);
//                current2 = current2->next;
//            }
//            else {
//                double coefficient = current1->coefficient + current2->coefficient;
//                if (coefficient != 0) {
//                    result.addTerm(coefficient, current1->exponent);
//                }
//                current1 = current1->next;
//                current2 = current2->next;
//            }
//        }
//        while (current1 != nullptr) {
//            result.addTerm(current1->coefficient, current1->exponent);
//            current1 = current1->next;
//        }
//        while (current2 != nullptr) {
//            result.addTerm(current2->coefficient, current2->exponent);
//            current2 = current2->next;
//        }
//        return result;
//    }
//
//    // Overloaded + operator
//    Polynomial operator+(const Polynomial& other) const {
//        return add(other);
//    }
//
//    // Multiply function
//    Polynomial multiply(const Polynomial& other) const {
//        Polynomial result;
//        Term* current1 = head;
//        while (current1 != nullptr) {
//            Term* current2 = other.head;
//            while (current2 != nullptr) {
//                double coefficient = current1->coefficient * current2->coefficient;
//                int exponent = current1->exponent + current2->exponent;
//                result.addTerm(coefficient, exponent);
//                current2 = current2->next;
//            }
//            current1 = current1->next;
//        }
//        return result;
//    }
//
//    // Overloaded * operator
//    Polynomial operator*(const Polynomial& other) const {
//        return multiply(other);
//    }
//
//    // Evaluate function
//    double evaluate(double x) const {
//        double result = 0;
//        Term* current = head;
//        while (current != nullptr) {
//            result += current->coefficient * pow(x, current->exponent);
//            current = current->next;
//        }
//        return result;
//    }
//
//    // Overloaded () operator
//    double operator()(double x) const {
//        return evaluate(x);
//    }
//
//private:
//    // Add term function
//    void addTerm(double coefficient, int exponent) {
//        if (coefficient == 0) return; // Do not add zero terms
//
//        Term* newTerm = new Term(coefficient, exponent);
//        if (head == nullptr || head->exponent < exponent) {
//            newTerm->next = head;
//            head = newTerm;
//        }
//        else {
//            Term* current = head;
//            while (current->next != nullptr && current->next->exponent > exponent) {
//                current = current->next;
//            }
//            if (current->exponent == exponent) {
//                current->coefficient += coefficient; // Combine like terms
//                delete newTerm; // No need to keep the new term if combined
//                if (current->coefficient == 0) {
//                    // Remove term if coefficient is zero
//                    Term* temp = current;
//                    current = current->next;
//                    delete temp;
//                }
//            }
//            else {
//                newTerm->next = current->next;
//                current->next = newTerm;
//            }
//        }
//        size++;
//    }
//};
//
//int main() {
//    Polynomial p1, p2;
//    cout << "Enter the first polynomial:" << endl;
//    p1.input();
//    cout << "Enter the second polynomial:" << endl;
//    p2.input();
//    cout << "First polynomial: ";
//    p1.output();
//    cout << "Second polynomial: ";
//    p2.output();
//    Polynomial sum = p1 + p2;
//    cout << "Sum: ";
//    sum.output();
//    Polynomial product = p1 * p2;
//    cout << "Product: ";
//    product.output();
//    double x;
//    cout << "Enter a value for x: ";
//    cin >> x;
//    cout << "Value of first polynomial at x = " << x << ": " << p1(x) << endl;
//    cout << "Value of second polynomial at x = " << x << ": " << p2(x) << endl;
//    return 0;
//}
