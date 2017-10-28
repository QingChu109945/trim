#include <cctype>  
#include <iostream>  
#include <algorithm>  
  
using namespace std;  
  
inline string& ltrim(string &str) {  
    string::iterator p = find_if(str.begin(), str.end(), not1(ptr_fun<int, int>(isspace)));  
    str.erase(str.begin(), p);  
    return str;  
}  
  
inline string& rtrim(string &str) {  
    string::reverse_iterator p = find_if(str.rbegin(), str.rend(), not1(ptr_fun<int , int>(isspace)));  
    str.erase(p.base(), str.end());  
    return str;  
}  
  
inline string& trim(string &str) {  
    ltrim(rtrim(str));  
    return str;  
}  
  
int main(){  
        string str = "\t\r\n ACB%&*KU234 \r\n";  
        string str1 = str;  
        string str2 = str;  
  
        cout << "str: ~" << str << "~" << endl << endl;  
  
        cout << "ltrim(str): ~" << ltrim(str1) << "~" << endl;  
        cout << "rtrim(ltrim(str)): ~" << rtrim(str1) << "~" << endl << endl;  
  
        cout << "rtrim(str): ~" << rtrim(str2) << "~" << endl;  
        cout << "ltrim(rtrim(str)): ~" << ltrim(str2) << "~" << endl << endl;  
  
        cout << "trim(str): ~" << trim(str) << "~" << endl;  
  
        return 0;  
}  
