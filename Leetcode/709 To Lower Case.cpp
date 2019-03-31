/*1*/
class Solution {
public:
    string toLowerCase(string str) {
        for(int i = 0; i < str.length(); i++) 
            str[i] = tolower(str[i]);
        return str;
    }
};
/*2*/
class Solution {
public:
    string toLowerCase(string str) {
        for(int i = 0; i < str.length(); i++) 
            if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        return str;
    }
};
