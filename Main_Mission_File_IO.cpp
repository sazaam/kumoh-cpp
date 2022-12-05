#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

/*

	Exception Handling

*/



#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

/*

	Vector of String Adding- Removing - Searching - Re-Ordering - FileSaving
	Mission Week 12

*/
// UPGRADED TO INCLUDE ERASE FEATURE


// read File Words into a vector of Strings
void fileRead(vector<string>& v, ifstream& fin) { //
	string line;
	while (getline(fin, line)) { 	// 
		v.push_back(line); 			// 
	}
}

// write into a vector of Strings into streamed file
void fileWrite(vector<string>& v, ofstream& fout) { // 
	int l = v.size();
	for (int i = 0; i < l; i++) fout << v[i] << endl;
}

// search for a specific strings
bool search(vector<string>& v, string word) { // 
	int c = 0;
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);
		if (index != -1) { // found
			cout << v[i] << endl;
			c++;
		}
	}
	return (bool)c;
}

// re-order words into array and display
void sortAndPreview(vector<string>& v) {
	sort(v.begin(), v.end());
	int l = v.size();
	for (int i = 0; i < l; i++) {
		cout << v.at(i) << endl;
	}
}

int detectPresence(vector<string>& v, string s) {
	int l = v.size();
	for (int i = 0; i < l; i++) {
		if (v[i] == s) return i;
	}

	return -1;
}

bool addToList(vector<string>& v, string s) {
	int i = detectPresence(v, s);

	if (!(bool)(i+1)) {
		v.push_back(s);
		return true;
	}
	cout << "Exact Word already in list..." << endl;
	return false;
}

// remove specified word from vector
bool removeFromList(vector<string>& v, string s) {

	int i = detectPresence(v, s);

	if ((bool)(i+1)) {
		v.erase(v.begin() + i);
		cout << "word " + s + " was successfully removed." << endl;
		return true;
	}

	cout << "This word does not belong to the list." << endl;
	return false;
}

// save into file
bool saveNewFile(vector<string>& v, string loc) {

	ofstream fout;
	fout.open(loc);
	fileWrite(v, fout);
	fout.close();

	cout << "File successfully saved as : " << loc << endl << endl;

	return true;
}

// Loads file and tries reading contets as words
bool loadWords(vector<string>& v, string wf) {
	ifstream fin(wf);
	if (!fin) { return false; }
	fileRead(v, fin);
	fin.close();
	return true;
}

int main() {

	string dirname = "C:\\test\\";
	string filename = "words";
	string ext = ".txt";
	string wordsFile = dirname + filename + ext;
	vector<string> words;

	bool success = loadWords(words, wordsFile); // Try Loading words file

	string msg = success ? "Successfully opened file : " : "Error opening file : ";
	cout << msg << wordsFile << endl;

	if (!success) return 0; // cancel program if failed

	// Menu Choices
menu:

	int choice;
	cout << "Choose an Action :" << endl
		<< "	1. Add a word" << endl
		<< "	2. Search for a word" << endl
		<< "	3. Remove a word from List" << endl
		<< "	4. Re-Order and Save" << endl
		<< "	5. Terminate Program" << endl
		<< endl;
	cin >> choice;

	string wd;

	switch (choice) {

	case 1:											// Adding a Word
		cout << "Word to Add: " << endl;
		cin >> wd;

		(wd != "exit") && addToList(words, wd);

		goto menu;									// Search for a word
	case 2:
		cout << "Word to Search : " << endl;
		cin >> wd;

		(wd != "exit") && search(words, wd);

		goto menu;
	case 3:											// Remove a Word
		cout << "Word to Delete : " << endl;
		cin >> wd;

		(wd != "exit") && removeFromList(words, wd);

		goto menu;
	case 4:											// Re-order and Save
		cout << "Previewing before Saving : " << endl;
		bool save;

		sortAndPreview(words);

		cout << ">>>> save ? (1: Yes, 0: No)" << endl;
		cin >> save;

		save&& saveNewFile(words, dirname + filename + "_sorted" + ext);

		goto menu;
	}


	cout << "Program will end." << endl;


	return 0;
}































