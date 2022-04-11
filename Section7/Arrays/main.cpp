#include <iostream>

using namespace std;

int main(){
    char vowels[] {'a','e','i','o','u'};
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    
    double high_temps[] {20.3, 4.5, 34.56};
    cout << high_temps[2]<<endl;
    
    int elem[5] {23, 44};
    cout << elem[3]  << endl; //elements not set in the array are set to 0
    return 0;
}