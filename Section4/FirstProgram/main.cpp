#include <iostream>  //cin and cout defined here


int main(){
    
    int favouriteNumber;
    
    std::cout<< "Enter your favourite number between 1 and 100: ";
    
    std::cin >> favouriteNumber;
    
    std::cout << "Amazing!! The number " << favouriteNumber << " is my favourite number too!" << std::endl;
    
    return 0;
}