#include"str_easy.h"

using namespace std;

int itc_count_char_in_str(char ch, string str){ //5+
    char cent;
    long long geniq, sdr, a;
    geniq = 0;
    sdr = itc_len(str);
    a = 0;
    while(a <= sdr){
        cent = str[a];
        a++;
        if(cent == ch){
            geniq++;
        }else
            geniq = geniq;
    }
    return geniq;
}

string itc_even_place(string str){ //6+
    char cent;
    string Qineg;
    long long sdr, a;
    sdr = itc_len(str);
    a = 0;
    while(a < sdr){
        cent = str[a];
        a++;
        if(cent == '0' || cent == '1' || cent == '2' || cent == '3' || cent == '4' || cent == '5' || cent == '6' || cent == '7' || cent == '8' || cent == '9'){
            Qineg+= cent;
        }
    }
    if(Qineg == ""){
        cout << -1;
        return 0;
    }
    cout << Qineg;
}

double itc_percent_lower_uppercase(string str){ //7+
    char cent;
    double sera = 0;
    double sira = 0;
    while(str > ""){
        cent = str[0];
        str = zaim(str);
        str = popback(str);
        str = zaim(str);
        if(cent == 'a' || cent == 'b' || cent == 'c' || cent == 'd' || cent == 'e' || cent == 'f' || cent == 'g' || cent == 'h' || cent == 'i' || cent == 'j' || cent == 'k' || cent == 'l' || cent == 'm' || cent == 'n' || cent == 'o' || cent == 'p' || cent == 'q' || cent == 'r' || cent == 's' || cent == 't' || cent == 'u' || cent == 'v' || cent == 'w' || cent == 'x' || cent == 'y' || cent == 'z'){
            sira++;
        }else
        if(cent == 'A' || cent == 'B' || cent == 'C' || cent == 'D' || cent == 'E' || cent == 'F' || cent == 'G' || cent == 'H' || cent == 'I' || cent == 'J' || cent == 'K' || cent == 'L' || cent == 'M' || cent == 'N' || cent == 'O' || cent == 'P' || cent == 'Q' || cent == 'R' || cent == 'S' || cent == 'T' || cent == 'U' || cent == 'V' || cent == 'W' || cent == 'X' || cent == 'Y' || cent == 'Z'){
            sera++;
        }
    }
    if(sira > sera){
        sira = sera / sira * 100;
    }else
        sira = sira / sera * 100;
    return sira;
}

string itc_reverse_str(string str){ //8+
    str = zaim(str);
    cout << str;
    return 0;
}

string itc_slice_str(string str, int start, int end){ //9
    long long sas = itc_len(str);
    if(sas < start){
        str+= "\0";
        cout << str;
        return 0;
    }else
    if(end > sas){
        while(start > 0){
            str = zaim(str);
            str = popback(str);
            str = zaim(str);
            start--;
        }
        str+= "\0";
        cout << str;
        return 0;
    }else
    if(sas > end){
        while(start > 0){
            str = zaim(str);
            str = popback(str);
            str = zaim(str);
            start--;
        }
        str = zaim(str);
        sas-= end;
        while(sas > 0){
            str = zaim(str);
            str = popback(str);
            str = zaim(str);
            sas--;
        }
        str = zaim(str);
        str+= "\0";
        cout << str;
    }
}
