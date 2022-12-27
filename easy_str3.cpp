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

string itc_cmp_str(string str1, string str2, int num){ // 11, я знаю что она не работает
    string cute, cutten, cuteneli;
    string cutenewworld = "э";
    cute = "";
    cutten = "";
    cuteneli = "";
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
        cout << cute << endl;
    }
    long long pivo = a;
    while(a < jojo){
        cent = str2[a];
        cutten += cent;
        a++;
        cout << cutten << endl;
    }

    if(num == sas)
        cutenewworld = cute + cutten + cuteneli;
        cout << cutenewworld;
        return cutenewworld;

    while(pivo < sas){
        cent = str1[pivo];
        cuteneli += cent;
        pivo++;
        cout << cuteneli << endl;
    }
    cout << cutenewworld;
    cutenewworld = cute + cutten + cuteneli;
    return cutenewworld;
}
