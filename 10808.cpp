#include <iostream>
#include <string>

using namespace std;

int alphabet[26];

int main(void) {
    string word;
    cin >> word;
    
    for (int i = 0; i < word.length(); i++)
        alphabet[word[i]-'a']++;
    

    for (int i = 0 ; i < 26; i++)
        cout << alphabet[i] << " ";
    return 0;
}
