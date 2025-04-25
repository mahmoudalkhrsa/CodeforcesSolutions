#include <iostream>
#include <cctype>

using namespace std;

bool shouldConvert(const string& word) {
    bool firstLower = islower(word[0]);
    bool allUpper = true;

    for (int i = 1; i < word.length(); i++) {
        if (!isupper(word[i])) {
            return false; // إذا وجد حرف غير كبير، فلا نطبق القاعدة
        }
    }

    return allUpper || firstLower;
}

string convertWord(const string& word) {
    string result;

    for (int i = 0; i < word.length(); i++) {
        if (i == 0) {
            result += toupper(word[i]); // تحويل أول حرف إلى كبير
        }
        else {
            result += tolower(word[i]); // تحويل بقية الأحرف إلى صغيرة
        }
    }

    return result;
}

int main() {
    string word;
    cin >> word;

    if (shouldConvert(word)) {
        cout << convertWord(word) << endl;
    }
    else {
        cout << word << endl; // طباعة الكلمة كما هي إذا لم تتحقق الشروط
    }

    return 0;
}
