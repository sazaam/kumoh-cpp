

#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;




int main(){
    cout << "Ready" << endl;
    /*

    // Vector Examples

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    vector<int>::iterator it;

    for (it = v.begin() ; it != v.end() ;  it++)
    {
        int n = *it;
        n *= 2;
        *it = n;

        cout << *it << " ";
    }
    cout << endl;
    */
    /*
    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
            int n ;
            cin >> n ;
            v.push_back(n) ;
    }
    
    sort(v.begin(), v.end());

    vector<int>::iterator it;
    for (it = v.begin() ; it != v.end() ;  it++)
    {
       cout << *it << " ";
    }
    cout << endl;
    

    */
    

    

    // Mission Vectors
    
    /*

    cout << "Enter 4 Lengths : " ;
    vector<float> v;

    float res = 0 ;
    
    for (int i = 0; i < 4; i++)
    {
        float n ;
        cin >> n ;
        if(n > 0){
            res += n ;
            v.push_back(n) ;
        }
    }
    
    sort(v.begin(), v.end());

    int s = v.size() ;

    float near = v.at(0) ;
    float far = v.at(s - 1) ;
    float av = res / s ;
    

    cout << fixed;
    cout.precision(1.0);

    cout << "Nearest : " << near << endl;
    cout << "Farthest : " << far << endl;

    cout << "Average distance : " << av << endl;
    */



    int x = 2, y = 4;

    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos) ;
    cout << 7 << endl;



}