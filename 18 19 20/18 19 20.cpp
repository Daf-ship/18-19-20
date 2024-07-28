// 18 19 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;



int main()
{
    int r, d, q;


    cout << "The PI value is  " << M_PI << endl;


    //problem 18/ program to calculate circle area фен Чсоиб

    cout << "please enter r circle " << endl;
    cin >> r;
    cout << "Area = Pi*r^2 = " << (M_PI * pow(r, 2)) << endl; 
    cout << "after using ceil = " << ceil(M_PI * pow(r, 2)) << endl; 
    cout << "after using floor = " << floor(M_PI * pow(r, 2)) << endl;

    // problem 19/ program to calculate circle area through diameter 

    cout << "please enter diameter of the circle" << endl; 
    cin >> d;
    cout << "Area = (Pi*d^2)/4 = " << (M_PI * pow(d, 2)) / 4 << endl;
    cout << "after using Ceil = " << ceil((M_PI * pow(d, 2)) / 4) << endl;
    cout << "after using floor = " << floor((M_PI * pow(d, 2)) / 4) << endl;

    // problem 20/ program to claculate circle area inscribed  in a square 

    cout << "plase enter square area = " << endl;
    cin >> q;
    cout << "area of circle is = " << ((M_PI * pow(q, 2)) / 4) << endl;
    cout << "after using ceil = " << ceil((M_PI * pow(q, 2)) / 4) << endl; 
    cout << "after using floor = " << floor((M_PI * pow(q, 2)) / 4) << endl;







    return 0;
}

