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

string itc_cmp_str(string str1, string str2, int num){ // 11
    string cute = "";
    long long a = 0;
    char cent;
    long long sas = itc_len(str1);
    long long jojo = itc_len(str2);

    if(str2 == "")
        return str1;
    if(num > sas)
        num = sas;

    while(a < num){
        cent = str1[a];
        cute += cent;
        a++;
    }

    long long pivo = a;
    a = 0;
    while(a < jojo){
        cent = str2[a];
        cute += cent;
        a++;
    }

    if(num == sas)
        return cute;

    while(pivo < sas){
        cent = str1[pivo];
        cute += cent;
        pivo++;
    }
    return cute;
}

