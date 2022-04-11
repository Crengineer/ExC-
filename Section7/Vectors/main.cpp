#include <iostream>
#include <vector>

using namespace std;

int main(){
    //Vectors has dynamic size
    vector <char> vowels (5);
    //vector <int> test_scores (10); //ten positions of vector set to 0
    vector <int> test_scores {10, 20, 30, 40, 60};
    //methods to access element in the vector
    
    cout << vowels[0] << endl;
    cout << test_scores.at(3) << endl;
    
    //add element over the last element of the vector
    
    test_scores.push_back(20); //5-th element
    cout << test_scores.at(5) <<endl;
    
    //Two dimensional vector
    
    vector <vector<int>> matrix {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 2, 3, 4}
    };
    
    cout << matrix[0][2] <<endl;
    cout << matrix.at(2).at(3) << endl;
    
    return 0;
}