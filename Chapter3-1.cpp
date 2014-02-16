//
//  chapter3.cpp
//  AcceleratedC
//
//  Created by Neil on 08/02/2014.
//  Copyright (c) 2014 Neil. All rights reserved.
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
////    cout << "Please enter your midterm and final exam grades: ";
////    double midterm, final;
////    cin >> midterm >> final;
//    
//    //ask for the homework grades
//    cout << "Enter all your homework grades, "
//    "followed by end of file: ";
//    
//    
//    // a variable into which to read
//    double x;
//    vector<double> homework;
//    
//    //invariant:
//    //  we have read count grades so far, and
//    //  sum is the sum of the first count grades
//    while (cin >> x) {
//        homework.push_back(x);
//        
//    }
//    
//    typedef vector<double>::size_type vec_sz;
//    vec_sz size = homework.size();
//    cout << size << endl;
//    
//    if (size==0) {
//        cout << endl << "You myst enter your grades. "
//        "Please try again." << endl;
//        return 1;
//        
//    }
//    
//    sort(homework.begin(), homework.end());
//    
//    vec_sz mid =size/2;
//    vec_sz fq = size/4;
//    vec_sz tq = 3*(size/4);
//    
//    double fquartile,third_quartile;
//    double median;
//    
//    median = size % 2 == 0 ? (homework[mid] + homework[mid-1])/2
//    : homework[mid];
//    
//    if (size % 2 == 0){
//        //vector<double> first_half,second_half;
//        vector<double>::const_iterator first = homework.begin();
//        vector<double>::const_iterator last= homework.end();
//        vector<double>::const_iterator fhe = homework.begin()+size/2;
//        vector<double>::const_iterator shb = homework.begin()+size/2;
//        vector<double> first_half(first,fhe);
//        vector<double> second_half(shb,last);
//        
//        vec_sz fhsize = first_half.size();
//        vec_sz shsize = second_half.size();
//        vec_sz fhmid = fhsize/2;
//        vec_sz shmid = shsize/2;
//        
//        cout << size << endl;
//        
//        fquartile = fhsize % 2 == 0 ? (first_half[fhmid] + first_half[fhmid-1])/2
//        : first_half[fhmid];
//        third_quartile = shsize % 2 == 0 ? (second_half[shmid] + second_half[shmid-1])/2
//        : second_half[shmid];
//        
//    }else if(size % 4 == 1){ fquartile = (homework[fq-1]+3*homework[fq])/4;
//                            third_quartile = (3*homework[tq]+homework[tq+1])/4;
//        
//    }else {fquartile = (3*homework[fq]+homework[fq+1])/4;
//        cout << fq << mid << tq << endl;
//        third_quartile = (homework[tq+1]+3*homework[tq+2])/4;
//        
//    }
//    
//    //write the result
//    streamsize prec = cout.precision();
//    cout << "The first quartile is " << setprecision(3)
//    << fquartile << endl << "The median is " << median << endl
//    << "The third quartile is " << third_quartile << setprecision(prec) << endl;
//    
//    return 0;
//}