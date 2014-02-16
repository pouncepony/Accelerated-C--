//
//  Chapter3-4.cpp
//  AcceleratedC
//
//  Created by Neil on 16/02/2014.
//  Copyright (c) 2014 Neil. All rights reserved.
//

#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;    using std::setprecision;
using std::cout;    using std::string;
using std::endl;    using std::streamsize;
using std::vector;


//Exercise 3-4 shortest and longest string
int main()
{
    //ask for and read the sudents name
    cout << "Please enter your first name: ";
    string name;
    cin >>name;
    cout << "Hello, " << name << "!" << endl;

    //ask for and read the midterm and final grades
    //    cout << "Please enter your midterm and final exam grades: ";
    //    double midterm, final;
    //    cin >> midterm >> final;

    //ask for the homework grades
    cout << "Enter some strings, "
    "followed by end of file: ";


    // a variable into which to read
    string x;
    vector<string> words;

    //invariant:
    //  we have read count grades so far, and
    //  sum is the sum of the first count grades
    while (cin >> x) {
        words.push_back(x);

    }

    typedef vector<double>::size_type vec_sz;
    vec_sz size = words.size();


    if (size==0) {
        cout << endl << "You myst enter your grades. "
        "Please try again." << endl;
        return 1;

    }

    sort(words.begin(), words.end());

  
    string::size_type my_longest = 0;
    string::size_type my_shortest = 100000;

    //invariant: we have counted current_index of the total words in the vector
    for(vec_sz current_index = 1; current_index <size; ++current_index){
        //cout << words[current_index]<< words[current_index].size() << endl;
        if (words[current_index].size()>my_longest){
            my_longest = words[current_index].size();
        }
        if (words[current_index].size()<my_shortest){
            my_shortest = words[current_index].size();
        }
        
    }


    cout << "The longest string was " << my_longest << " chars long, "
        "the sortest string was " << my_shortest << " chars long." << endl;
    return 0;
}