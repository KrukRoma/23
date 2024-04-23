#include <iostream> 
#include <algorithm> 
#include <cctype> 
using namespace std;

int main()
{
    string name = "Hello, World!";

    cout << name << endl;

    cout << name.length() << endl;

    cout << name[0] << endl;

    name.replace(7, 11, "Earth");
    cout << name << endl;

    name += " how are you?";
    cout << name << endl;

    string name1 = "Hello, World!";

    cout << name.compare(name1) << endl;

    string name2 = "Hello, Earth, how are you?";

    cout << name.substr(name.find("Earth"), 5) << endl;

    cout << name.find("Earth") << endl;

    cout << name.erase(7, 13) << endl;

    cout << name2.insert(7, "Big ") << endl;

    string name3 = "Hello, World!";
    string name4 = "o";

    reverse(name3.begin(), name3.end());
    cout << name3 << endl;

    size_t count = 0;
    size_t pos = name3.find(name4);
    while (pos != string::npos) 
    {
        count++;
        pos = name3.find(name4, pos + 1);
    }
    cout << count << endl;

    string name5 = "Hello World!";

    transform(name5.begin(), name5.end(), name5.begin(), ::toupper);
    cout << name5 << endl;

    string name6 = "Hello, it`s very easy!";

    string result;
    for (char c : name6) 
    {
        if (c != ' ') 
        {
            result += c;
        }
    }
    cout << result << endl;

    string name7 = "It`s very very interesting";
    string name8 = "very";
    string name9 = "unusual";
    size_t pos1 = name7.find(name8);
    while (pos1 != string::npos) 
    {
        name7.replace(pos1, name8.length(), name9);
        pos1 = name7.find(name8, pos1 + name9.length());
    }
    cout << name7 << endl;

    string text1 = "abba";
    bool isPalindrome = true;
    int length = text1.length();
    for (int i = 0; i < length / 2; i++) 
    {
        if (text1[i] != text1[length - i - 1]) 
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) 
    {
        cout << text1 << " is a palindrom" << endl;
    }
    else 
    {
        cout << text1 << " is a not palindrom" << endl;
    }

    string text2 = "abrakadabra";
    sort(text2.begin(), text2.end());
    cout << text2 << endl;

    string text3 = "Today 2024-04-22";
    for (int i = 0; i < text3.length(); i++) 
    {
        if (isdigit(text3[i])) 
        {
            text3[i] = 'X';
        }
    }
    cout << text3 << endl;

    string str1 = "Hello";
    string str2 = "World";
    string result1 = str1;
    result1.insert(result1.length(), str2);
    cout << result1 << endl;
}