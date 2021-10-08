//
//  main.cpp
//  test
//
//  Created by na ut y xie on 2021/10/7.
//

#include "Header.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>



int main(int argc, const char * argv[])
{
    
    std::cout << "**************** Begin to run the code! ****************"  << std::endl;
    std::cout << std::endl;
    
    A aa(3);
    A aaa;
    int * b = new int;
    *b = 104;
    
    // rvalue reference
    int && a = 114514;
    std::cout << a << std::endl;
    
    //vector STL
    std::vector<int> A{1,2,3,5,6,2,4,5};
    std::cout<<"The size of vector A is : " << A.size()<<std::endl;
    std::cout << "Is A empty ? " << A.empty() << std::endl;
    std::vector<int>::iterator itr = A.begin();
    std::cout << "Let's see what are in A : ";
    for (;itr < A.end() ;itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;
    
    
    
    
    
    
    
    
    
    
    // insert code here...
    std::cout << std::endl;
    std::cout << "*****************  Code run to the end! ***************" << std::endl;
    return 0;
}
