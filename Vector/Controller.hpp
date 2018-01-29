//
//  Runner.hpp
//  Vector
//
//  Created by Segota, Sheradon on 1/29/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Controller
{
private:
    int specialNumber;
    string favoriteWord;
    int * numberPointer;
protected:
    
public:
    //Anyone can see this.
    Controller();
    void start();
    void useVector();
    //Ths is a prototype
};

#endif /* Controller_hpp */
