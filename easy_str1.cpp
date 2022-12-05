#include<str_easy.h>

using namespace std;

string zaim(string nn) {
    string rev;
    for (int i = nn.size() - 1; i >= 0; i--) {
        rev = rev.append(1, nn[i]);
    };
    return rev;
}

string itc_hello_str(string name) { //1+
    cin >> name;
    string a = "Hello, ";
    a = a + name;
    return a;
}

long long itc_len(string str) { //2+
    char cent;
    long long iiiiigor = 0;
    while (str != "") {
        str = zaim(str);
        cent = str[0];
        str = zaim(str);
        str.pop_back();
        iiiiigor++;
    }
    return iiiiigor;
}

void itc_print_copy_str(string str, int number) { //3+
    while (number > 0) {
        cout << str << endl;
        number = number - 1;
    }
    return;
}

void itc_first_end_three(string str) { //4+
    long long a;
    string soska = str;
    char cent;
    while (str > "") {
        str.pop_back();
        a++;
    }
    if (a <= 5) {
        cent = soska[0];
        while (a > 0) {
            cout << cent;
            a = a - 1;
        }
        return;
    }
    cent = soska[0];
    cout << cent;
    cent = soska[1];
    cout << cent;
    cent = soska[2];
    cout << cent;
    soska = zaim(soska);
    cent = soska[2];
    cout << cent;
    cent = soska[1];
    cout << cent;
    cent = soska[0];
    cout << cent;
}
