string popback(string str){
    long long a = itc_len(str);
    a--;
    str[a] = '\0';
    return str;
}
