#include <iostream>
using namespace std;
int main() {
    string name[3];
    string surname[3];
    cout << "Enter up to 3 name: \n";
    for (int i = 0; i < 3; i++) {
        cout << "Input: ";
        cin >> name[i];
    }
    cout << "Enter up to 3 surname: \n";
    for (int i = 0; i < 3; i++) {
        cout << "Input: ";
        cin >> surname[i];
    }
    cout << "Those three names are: \n";
    cout << name[0] << " " << surname[0] << "\n";
    cout << name[1] << " " << surname[1] << "\n";
    cout << name[2] << " " << surname[2] << "\n";
    return 0;
}
