//
//  Header.h
//  test
//
//  Created by na ut y xie on 2021/10/8.
//
#include <iostream>
#ifndef Header_h
#define Header_h

// The Big Five note
class A
{
public:
    
    int a;
    
    A()
    {
        a = 0;
        std::cout << "Create a new A object! " << "a is : " << a <<std::endl;
    }
    
    A(int x):a{x}
    {

        std::cout << "Create a new A object! " << "a is : " << a <<std::endl;
    }
    
    ~A()
    {
        std::cout << "Destory a new A object!" << std::endl;
    }
    
};






#endif /* Header_h */
