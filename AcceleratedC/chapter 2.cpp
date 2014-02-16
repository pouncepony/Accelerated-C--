//
//  chapter 2.cpp
//  AcceleratedC
//
//  Created by Neil on 17/01/2014.
//  Copyright (c) 2014 Neil. All rights reserved.
//

#include "chapter 2.h"
#include <iostream>
#include <string>

//using std::cin;
//using std::cout;
//using std::endl;
//using std::string;
//
//int main(){
//
////    std::cout << "What is your name? ";
////
////    std::string name;
////    std::cin >> name;
////
////    std::cout << "Hello, " << name <<std::endl << "ANd what is yours? ";
////    std::cin >>name;
////    std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;
//
//
//    //ask for name
//    cout << "Please enter your first name: ";
//
//    //read the name
//    string name;
//    cin >> name;
//
//
//    //write a greeting
//    const string greeting = "Hello, " + name + "!";
//    const int pad = 1;
//    const int rows = 2*pad + 3;
//    const string::size_type cols = greeting.size() +(2*pad) + 2;
//    
//    cout << endl;
//    
//    
//    for(int r=0;r != rows;r++){
//        
//        string::size_type c =0;
//        while (c != cols)   {
//            if (r == pad + 1 && c == pad + 1){
//                cout << greeting;
//                c+=greeting.size();
//            }
//            else{
//                if(r == 0 || r == rows - 1 || c==0 || c == cols -1)
//                    cout<< "*";
//                else
//                    cout << " ";
//                ++c;
//            }
//        }
//        cout<<endl;
//    }
//
////    const std::string spaces(greeting.size(), ' ');
////    const std::string second = "* " + spaces + " *";
////
////    const std::string first(second.size(), '*');
////
//
////    std::cout << first << std::endl;
////    std::cout << second << std::endl;
////    std::cout <<"* " << greeting << " *" <<std::endl;
////    std::cout << second << std::endl;
////    std::cout << first << std:: endl;
//    
//    string s ="The product of [1,9) is ";
//    int res = 1;
//    for (int i=1;i !=10; ++i){
//        res *=i;
//    }
//    cout << s << res <<endl;
//    
//    return 0;
//}
