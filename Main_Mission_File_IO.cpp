#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;



void fileRead(vector<string>& v, ifstream& fin) { // fin으로부터 벡터 v에 읽어 들임
	string line;
	while (getline(fin, line)) { 	// fin 파일에서 한 라인 읽기
		v.push_back(line); 			// 읽은 라인을 벡터에 저장
	}
}
void fileWrite(vector<string>& v, ofstream& fout) { // fin으로부터 벡터 v에 읽어 들임
	int l = v.size();
	for (int i = 0; i < l; i++) fout << v[i] << endl;
}

bool search(vector<string>& v, string word) { // 벡터 v에서 word를 찾아 출력
	int c = 0;
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);
		if (index != -1) {// found
			cout << v[i] << endl;
			c++;
		}
	}
	return (bool) c;
}


bool saveNewFile(vector<string>& v, string loc) {

	ofstream fout;
	fout.open(loc);
	fileWrite(v, fout);
	fout.close();

	cout << "File successfully saved as : " << loc << endl << endl;

	return true;
}

void sortAndPreview(vector<string>& v) {
	sort(v.begin(), v.end());
	int l = v.size();
	for (int i = 0; i < l; i++) {
		cout << v.at(i) << endl;
	}
}

int main() {

	string dirname = "C:\\test\\";
	string filename = "words";
	string ext = ".txt";
	string wordsFile = dirname + filename + ext;
	vector<string> words;

	ifstream fin(wordsFile);
	if (!fin) { cout << "Error Opening File : " << wordsFile << endl; return 0; }


	fileRead(words, fin); // 파일 전체를 wordVector에 라인 별로 읽기
	fin.close();

	cout << "Opened File :" << wordsFile << endl;


	// Choices
choice:

	int ch;
	cout << "Choose an Action :" << endl
		<< "	1. Add a word" << endl
		<< "	2. Search for a word" << endl
		<< "	3. Re-Order and Save" << endl
		<< "	4. Terminate Program" << endl
		<< endl;
	cin >> ch;

	string sss;

	switch (ch) {

	case 1:
		cout << "Word to Add: " << endl;
		cin >> sss;
		
		words.push_back(sss);
		
		goto choice;
	case 2:
		cout << "Word to Search : " << endl;
		cin >> sss;

		(sss != "exit") && search(words, sss);

		goto choice;
	case 3:
		cout << "Previewing before Saving : " << endl;
		bool save;
		
		sortAndPreview(words);
		
		cout << ">>>> save ? (1: Yes, 0: No)" << endl;
		cin >> save;

		save && saveNewFile(words, dirname + "new_" + filename + ext);

		goto choice;
	}


	cout << "Program will end." << endl;


	return 0;
}

















