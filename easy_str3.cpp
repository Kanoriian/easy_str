#include"str_easy.h"

using namespace std;

string popback(string str){
    long long a = itc_len(str);
    a--;
    str[a] = '\0';
    return str;
}

bool itc_equal_reverse(string str){ // 10
    string sdr = zaim(str);
    if(sdr == str){
        return true;
    }else
        return false;
}
