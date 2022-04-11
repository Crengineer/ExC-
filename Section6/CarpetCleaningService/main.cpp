#include <iostream>
using namespace std;

int main(){
    int rooms, costPerRoom {30};
    float taxIncrease {0.06};
    cout<< "Enter the number of rooms: ";
    cin >> rooms;
    cout << "The total cost is:  " << rooms*costPerRoom << endl;
    cout << "Per one month, the total cost of the service is: " << 30*(rooms*costPerRoom)*(1+taxIncrease);
    
    return 0;
}