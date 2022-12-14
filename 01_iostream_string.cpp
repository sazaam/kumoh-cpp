#include <iostream>
#include <string>
#include <regex>

using namespace std;





int test_cin_cout() {



	cout << "Welcome, pls input width and height :";


	int w = 0, h = 0;



	cin >> w >> h;


	int A = w * h;

	cout << "Area" << A << endl;

	return 0;
}




int test_elvis() {

	string song("Blue Sweet Shoes");
	string elvis("The King");
	string singer;


	cout << "The one who sings : " + song << "(hint : 1st letter = " << elvis[0] << ")";


	getline(cin, singer);

	if (singer == elvis) cout << "very good";
	else cout << "no way... it was " << elvis << endl;

	return 0;
}



int test_concat() {

	string first("1st"), second("2nd");

	string all = first + " " + second;
	cout << all << endl;

	return 0;
}

int test_password() {

	string pwd("****");
	string verif("0000");
	string all("");
	int failed = 1;

	cout << "Please enter a new password : ";

	cin >> pwd;

verify:

	cout << "Enter it again please : ";
	cin >> verif;

	all += " " + verif;

	string msg;
	if (verif == pwd) {
		failed = 0;
		msg = "	Correct";
	}
	else {
		msg = "	Does not match";
	}
	cout << msg << endl;

	if (failed) {
		goto verify;
	}
	cout << "All attempts until success : " << all << endl;

	return 0;
}



int test_strClass() {

	
	string str = "";

	/*
	getline(cin, str);
	cout << str << endl;

	getline(cin, str, 'a');
	cout << str;


	cout << "////////" << endl;
	
	string input;
	cout << "enter any string :" ;
	cin >> input;

	cout << "length : " << input.length() << endl;
	cout << "size : " << input.size()  << endl;
	cout << "capacity : " << input.capacity() << endl;
	*/


	str = "012345";
	cout << "set 'str' var to '012435'" << endl;
	str.erase(1, 4);
	cout << "str.erase(1,4) >>> " << "'" + str + "'" << endl;


	str.empty();
	cout << "str.empty() >>> " << str.empty() << endl; // returns 0

	str.clear();
	cout << "str.clear() >>> " << "'" + str + "'" << endl; // return empty string

	string str2("abcde");
	str.swap(str2);
	cout << "set str var to 'abcde'" << endl;


	str[2] = toupper(str[2]);
	cout << "toupper(str[2]) >>> " << "'" + str + "'" << endl;
	str[2] = tolower(str[2]);
	cout << "tolower(str[2]) >>> " << "'" + str + "'" << endl;

	str.pop_back();
	cout << "str.pop_back() >>> " << "'" + str + "'" << endl;
	str.push_back('e');
	cout << "str.push_back() >>> " << "'" + str + "'" << endl;

	str.append("fghi");
	cout << "str.append('fghi') >>> " << "'" + str + "'" << endl;

	str += "klmn";
	cout << "str += 'klmn' >> > " << "'" + str + "'" << endl;


	str.insert(3, "123456789");
	cout << "str.insert(3, '123') " << "'" + str + "'" << endl;


	cout << "isdigit(str[0]) " << isdigit(str[0]) << endl; // 0
	cout << "isdigit(str[4]) " << isdigit(str[4]) << endl; // 4 ??? ... anyway...

	cout << "isalpha(str[0]) " << isalpha(str[0]) << endl; // 2 ??? alphaindex then ... 
	cout << "isalpha(str[4]) " << isalpha(str[4]) << endl; // 0 ... kind of 'false'




	str.replace(3, 9, "XXXXXXXXX");
	cout << "str.replace(3,6, 'XXXXXXXXX') " << "'" + str + "'" << endl;


	cout << "str.substr(0, 3) " << "'" + str.substr(0, 3) + "'" << endl;
	cout << "str.substr(3) " << "'" + str.substr(3) + "'" << endl;

	cout << "str.find('k') " << str.find('k') << endl;

	cout << "str.front() " << str.front() << endl; 
	cout << "str.back() " << str.back() << endl; 


	cout << "set str var to 'kkk abc aaa'" << endl;
	str = "aaa abc kkk";

	
	cout << "str.find('f') " << str.find("f") << endl; // weirdly  4294967295 (maybe max int but anyway means unfound)
	cout << "str.find('aac') " << str.find("aac") << endl; //4294967295
	cout << "str.find('aaa') " << str.find("aaa") << endl; // if found return index of first found match
	cout << "str.find('kkk', 4) " << str.find("kkk", 4) << endl;//4294967295
	
	cout << str << endl;
	regex reg("^k+");
	smatch i;
	cout << regex_search(str, i, reg) << endl ;
	
	regex reg2("k+$");
	cout << regex_search(str, i, reg2) << endl ;
	


	return 0;
}



int main() {


	/* In-class Examples 
	
	*/

	//test_cin_cout();
	//test_elvis();
	//test_strClass();



	/*  Mission  :

	I decided to upgrade the test mission to a smart password entering // verifying system,
	and use the goto + labels to have an infinite looping process until success.

	*/

	test_password();


}