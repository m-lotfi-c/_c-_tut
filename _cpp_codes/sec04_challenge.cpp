

#include<iostream>

/****************************************************************************** 
    main    : returns non-zero if the main is error
    Pre     : The stack exists and it has been initialized.
    Post    : Return non-zero if the stack is empty; zero, otherwise.

*******************************************************************************/
int main(int argc, char *argv[]){ 
    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100: " << std::endl;
    std::cin >> favorite_number;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!! " << favorite_number << " is my favorite number! " << std::endl;
    return 0;    
}