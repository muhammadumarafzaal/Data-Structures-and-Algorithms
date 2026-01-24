//#include <iostream>
//#include <cstdlib> 
//#include <ctime>   
//#include <string>
//using namespace std;
//string updatePassword(string password) {
//    int length = password.length();
//    if (length == 0) return password;
//    char newMiddleChar = '0' + rand() % 10;
//    char newSecondLastChar = '0' + rand() % 10;
//    if (length % 2 == 1) { 
//        int middleIndex = length / 2;
//        password[middleIndex] = newMiddleChar;
//    }
//    else {
//        int middleIndex = (length / 2) - 1;
//        password[middleIndex] = newMiddleChar;
//    }
//    if (length > 1) {
//        password[length - 2] = newSecondLastChar;
//    }
//    return password;
//}
//int main() 
//{
//    srand(static_cast<unsigned int>(time(0)));
//    string pass;
//    cout << "Enter a password: ";
//    cin >> pass;
//
//    cout << "Original Password: " << pass << endl;
//
//    // Update the password
//    string updatedPassword = updatePassword(pass);
//
//    cout << "Updated Password: " << updatedPassword << endl;
//
//    return 0;
//}
