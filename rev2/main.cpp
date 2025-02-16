#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define SHIFT 5

//Flagni runtime-da dekod qilish
string getFlag() {
    vector<int> encoded_flag = { 
        'f' + SHIFT, 'l' + SHIFT, 'a' + SHIFT, 'g' + SHIFT, '{' + SHIFT,
        'y' + SHIFT, 'o' + SHIFT, 'u' + SHIFT, '_' + SHIFT, 'h' + SHIFT, 
        'a' + SHIFT, 'c' + SHIFT, 'k' + SHIFT, 'e' + SHIFT, 'd' + SHIFT, 
        '_' + SHIFT, 's' + SHIFT, 'e' + SHIFT, 'c' + SHIFT, 'r' + SHIFT, 
        'e' + SHIFT, 't' + SHIFT, '}' + SHIFT
    };  

    string flag;
    for (int val : encoded_flag) {
        flag += char(val - SHIFT);
    }
    
    return flag;
}

int main() {
    string correct_pass = "mohirCtfRev2"; 
    string user_input;

    cout << "Parolni kiriting: ";
    cin >> user_input;

    if (user_input == correct_pass) {
        cout << "To‘g‘ri! Flag: " << getFlag() << endl;
    } else {
        cout << "Xato parol!" << endl;
    }

    return 0;
}
