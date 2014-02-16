//
//  chapter3.cpp
//  AcceleratedC
//
//  Created by Neil on 08/02/2014.
//  Copyright (c) 2014 Neil. All rights reserved.
//
//
//#include "Chapter3-1.h"
//#include <iomanip>
//#include <ios>
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using std::cin;    using std::setprecision;
//using std::cout;    using std::string;
//using std::endl;    using std::streamsize;
//using std::vector;
//
//
////Exercise 3-2 Compute Quartiles1
//int main()
//{
//    //ask for and read the sudents name
//    cout << "Please enter your first name: ";
//    string name;
//    cin >>name;
//    cout << "Hello, " << name << "!" << endl;
//
//    //ask for and read the midterm and final grades
//    //    cout << "Please enter your midterm and final exam grades: ";
//    //    double midterm, final;
//    //    cin >> midterm >> final;
//
//    //ask for the homework grades
//    cout << "Enter some words, "
//    "followed by end of file: ";
//
//
//    // a variable into which to read
//    string x;
//    vector<string> words;
//
//    //invariant:
//    //  we have read count grades so far, and
//    //  sum is the sum of the first count grades
//    while (cin >> x) {
//        words.push_back(x);
//
//    }
//
//    typedef vector<double>::size_type vec_sz;
//    vec_sz size = words.size();
//    cout << size << endl;
//
//    if (size==0) {
//        cout << endl << "You myst enter your grades. "
//        "Please try again." << endl;
//        return 1;
//
//    }
//
//    sort(words.begin(), words.end());
//    
//    string current_word;
//    int count;
//    
//    //invariant: we have couted current_index of the total words in the vector
//    for(vec_sz current_index = 1; current_index <size; ++current_index){
//        if (current_word!=words[current_index]){
//            cout << "The word \"" << current_word << "\" appears " << count << " times." << endl;
//            current_word = words[current_index];
//            count = 0;
//        }
//        count++;
//    }
//
//    
//    cout << "The word \"" << current_word << "\" appears " << count << " times." << endl;
//    return 0;
//}