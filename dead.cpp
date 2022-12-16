#include<iostream>

using namespace std;

string zaim(string nn) {
    string rev;
    for (int i = nn.size() - 1; i >= 0; i--) {
        rev = rev.append(1, nn[i]);
    };
    return rev;
}

long long itc_len(string str) { //2+
    long long iiiiigor = 0;
    while (str[iiiiigor] != '\0') {
        iiiiigor++;
    }
    return iiiiigor;
}

string popback(string str){
    long long a = itc_len(str);
    a--;
    str[a] = '\0';
    return str;
}



int main(){
    char de;
    string mina;
    de = 'i';
    mina = "dnhciosnhicno";
    cout << itc_count_char_in_str(de, mina);
}
