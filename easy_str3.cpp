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
    long long Petya;
    long long efim = 0;;
    long long nikita = itc_len(str1);
    long long jojo = itc_len(str2);

    if(str2 == "")
        return str1;
    if(num >= nikita)
        Petya = num - jojo;
        for(efim; efim < Petya; efim++){
            cute += str1[efim];
        }
        for(Petya; Petya < num; Petya++){
            cute += str1[Petya];
        }
        return cute;
    cout << "AAA";
    for(a = 0; a < num; a++){
        cute += str1[a];
    }
    long long pivo = a;
    efim = nikita - jojo - a;
    a = 0;

    for(a = 0; a < jojo && a < efim; a++){
        cute += str2[a];
    }

    if(num == nikita)
        return cute;


    for(pivo; pivo < nikita && pivo < efim; pivo++){
        cute += str1[pivo];
    }
    return cute;
}

long long itc_find_str(string s1, string s2){ // 12
long long cute, cutenelia;
string bibaiboba;
cute = 0;
cutenelia = 0;

   while (s1[cute] != '\0'){
      if (s1[cute] == s2[cutenelia]){
           bibaiboba += s1[cute];
           cute++;
           cutenelia++;
      }else
           bibaiboba = "\0";
           cutenelia = 0;

      if (bibaiboba == s2)
           cute -= (cutenelia - 1);
           return cute;
   }
   return -1;
}
