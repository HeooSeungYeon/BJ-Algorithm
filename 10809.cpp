#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void) {
    int i, alphabet[26];
    string word;

    memset(alphabet, -1, sizeof(alphabet));
    cin >> word;
    
    for (i = 0; i < word.length(); i++)
    	if (alphabet[word[i]-'a'] == -1)
			alphabet[word[i]-'a'] = i;
    

    for (int i = 0 ; i < 26; i++)
        cout << alphabet[i] << " ";
    return 0;
}
