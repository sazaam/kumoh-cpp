#include <iostream>
#include <string>
using namespace std ;





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

	string all = first + " " +  second;
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
	}else {
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

	/*
	string str = "";
	
	
	getline(cin, str);
	cout << str << endl;

	getline(cin, str, 'a');
	cout << str;
	

	cout << "////////" << endl;
	*/



	/*
	string input;
	cout << "enter any string :" ;
	cin >> input;

	cout << "length : " << input.length() << endl;
	cout << "size : " << input.size()  << endl;
	cout << "capacity : " << input.capacity() << endl;
	*/


	string str = "012345";
	cout << "set 'str' var to '012435'" << endl;
	str.erase(1, 4);
	cout << "str.erase(1,4) >>> " << "'" + str + "'" << endl;

	str.clear();
	cout << "str.clear() >>> " << "'" + str + "'" << endl;

	
	string str2("abcde");
	str.swap(str2);
	cout << "set str var to 'abcde'" << endl;


	str[2] = toupper(str[2]) ;
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
	
	str.replace(3, 9, "XXXXXXXXX");
	cout << "str.replace(3,6, 'XXXXXXXXX') " << "'" + str + "'" << endl;

	
	cout << "str.substr(0, 3) " << "'" + str.substr(0, 3) + "'" << endl;
	cout << "str.substr(3) " << "'" + str.substr(3) + "'" << endl;

	cout << "str.find('k') " << str.find('k') << endl;



	return 0;
}



int main() {




	//test_cin_cout();

	//test_elvis();

	test_strClass() ;



	/*  Mission  :
		
	I decided to upgrade the test mission to a smart password entering // verifying system, 
	and use the goto + labels to have an infinite looping process until success.
		
	*/
	
	//test_password();


}