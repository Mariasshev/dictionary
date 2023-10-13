#include <iostream>
#include <map>
using namespace std;

typedef pair<string, string> myPair;
int main() {
	string word, translate, delWord;
	int answ;
	bool check = true;
	map<string, string> arr;
	int userAns;
	do {
		cout << "[1] - Add new word" << endl;
		cout << "[2] - Edit word" << endl;
		cout << "[3] - Delete word" << endl;
		cout << "[4] - Find word" << endl;
		cout << "[5] - Show all" << endl;
		cout << "[0] - Exit" << endl << endl;

		cout << "(answer): ";
		cin >> userAns;
		switch (userAns)
		{
		case 0:
			cout << "Exit..." << endl;
			check = false;
			break;
		case 1:
			cout << "Word: ";
			cin >> word;
			cout << "Translate: ";
			cin >> translate;
			arr.insert(make_pair(word, translate));
			break;
		case 2:
			cout << "Enter word: ";
			cin >> word;
			if (arr.find(word) != arr.end())
			{
				cin >> arr[word];
			}

			break;
		case 3:
			cout << "Enter word to delete: ";
			cin >> delWord;
			if (arr.find(delWord) != arr.end()) 
			{
				arr.erase(delWord);
			}
			break;
		case 4:
			cout << "Enter word to find: ";
			cin >> word;
			for (auto it = arr.begin(); it != arr.end(); it++) {
				if (arr.find(word) != arr.end()) {
					cout << arr[word] << endl;
				}
			}
			break;
		case 5:
			for (auto it = arr.begin(); it != arr.end(); it++) {
				cout << it->first << " --- " << it->second << endl;
			}
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	} while (check != false);
}