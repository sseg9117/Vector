//
//  Runner.cpp
//  Vector
//
//  Created by Segota, Sheradon on 1/29/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//
#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    useVector();
}
void Controller :: useVector()
{
    // create a vector to store int
    vector<int> vec;
    int i;
    
    // display the original size of vec
    cout << "vector size = " << vec.size() << endl;
    
    // push 5 values into the vector
    for(i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }
    
    // display extended size of vec
    cout << "extended vector size = " << vec.size() << endl;
    
    // access 5 values from the vector
    for(i = 0; i < 5; i++)
    {
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }
    
    // use iterator to access the values
    vector<int>::iterator v = vec.begin();
    while( v != vec.end())
    {
        cout << "value of v = " << *v << endl;
        v++;
    }
}
