#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result; // Corrected: Use 'result' to store valid words
        vector<string> row = {"qwertyuiop", "asdfghjkl", "zxcvbnm"}; // Keyboard rows

        for (int i = 0; i < words.size(); i++) {
            int c = -1; // Initialize the row index
            // Find which row the first character belongs to
            for (int r = 0; r < row.size(); r++) {
                if (row[r].find(tolower(words[i][0])) != string::npos) {
                    c = r;
                    break;
                }
            }
            if (c == -1) continue; // If the character doesn't belong to any row

            // Check if all characters of the word belong to the same row
            int j;
            for (j = 1; j < words[i].size(); j++) {
                if (row[c].find(tolower(words[i][j])) == string::npos) {
                    break;
                }
            }
            // If we finished the loop, add the word to the result
            if (j == words[i].size()) {
                result.push_back(words[i]);
            }
        }
        return result;
    }
};

// Main function for testing
int main() {
    Solution sol;
    vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};
    vector<string> result = sol.findWords(words);

    for (const string& word : result) {
        cout << word << endl;
    }

    return 0;
}
