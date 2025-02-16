/#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define KEY 0x5A  // XOR kaliti

// ** Oddiy hash funksiyasi (Parolni tekshirish uchun) **
unsigned int simpleHash(const string& str) {
    unsigned int hash = 5381;
    for (char c : str) {
        hash = ((hash << 5) + hash) + c;
    }
    return hash;
}

// ** Parolni yashirish uchun oldindan shifrlangan qiymatlar (ASCII kodlar shaklida) **
const vector<int> PASS_ENCODED = { 80, 54, 103, 108, 123, 122, 79, 87, 73 };

// ** Parolni runtime-da tiklash **
string getPassword(int len) {
    string pass = '';
    string res = '';
    for (int i = 0; i < pass.length(); ++i)
    {
        /* code */
    }
}


// ** Parolni kodlash funksiyasi (XOR + indeks o‘zgarishi) **
vector<int> encodePassword(const string& input) {
    vector<int> encoded;
    for (size_t i = 0; i < input.length(); i++) {
        encoded.push_back((input[i] ^ KEY) + (i % 3));
    }
    return encoded;
}

// ** Flagni oldindan shifrlash (XOR + indeks manipulyatsiyasi) **
const vector<int> FLAG_ENCODED = {  
    61, 57, 60, 56, 107, 42, 50, 54, 55, 41, 
    91, 53, 43, 42, 99, 52, 44, 45, 50, 55, 59, 105, 46
};

// ** Flagni runtime-da tiklash (To‘g‘ri dekodlash) **
string getFlag() {
    string flag;
    for (size_t i = 0; i < FLAG_ENCODED.size(); i++) {
        flag += char((FLAG_ENCODED[i] - (i % 5)) ^ KEY);
    }
    return flag;
}

int main() {
    string correct_pass = getPassword();  // Parol runtime-da hosil bo‘ladi
    vector<int> correct_pass_encoded = encodePassword(correct_pass);
    unsigned int correct_hash = simpleHash(correct_pass);

    string user_input;
    cout << "Parolni kiriting: ";
    cin >> user_input;

    vector<int> user_encoded = encodePassword(user_input);
    unsigned int user_hash = simpleHash(user_input);

    if (user_encoded == correct_pass_encoded && user_hash == correct_hash) {
        cout << "To‘g‘ri! Flag: " << getFlag() << endl;  // Flag to‘g‘ri chiqadi!
    } else {
        cout << "Xato parol!" << endl;
    }

    return 0;
}
