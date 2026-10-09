#include <iostream>
#include <string>
using namespace std;
int main() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    if (username == "admin") {
        cout << "Enter password: ";
        cin >> password;
        if (password == "12345")
            cout << "Login Successful";
        else
            cout << "Incorrect Password";
    }
    else {
        cout << "Incorrect Username";
    }
    return 0;
}
