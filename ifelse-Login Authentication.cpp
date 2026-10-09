#include <iostream>
#include <string>
using namespace std;
int main() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    if (username == "admin" && password == "12345")
        cout << "Login Successful";
    else if (username != "admin")
        cout << "Incorrect Username";
    else
        cout << "Incorrect Password";
    return 0;
}
