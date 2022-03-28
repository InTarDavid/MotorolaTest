#include <iostream>
#include <string>

using namespace std;
void thealg()
{
    int tapel;
    cout << "How many meters of fence is available? ";
    cin >>tapel; tapel-=2; //I assume that 1 meter is the least a fence pice can have and that conversion to e.g. centimeters is unavaliable
    if (tapel>0)cout << "The length of a is 1 meter, while the length of b is " << tapel << " meters, the optimal square area of the farm is "<< tapel<< " square meters.";
    else cout << "You have too little fence! :("; //I assume to make a farm you need all 4 pieces (the Great Wall, a, a, b)
}

int main()
{
    string thisisrun; bool a;
    cout << "Hello, please write 'RUN' to run the algorithm (remember to use capital letters): ";
    getline(cin,thisisrun);
    if (thisisrun=="RUN")thealg();
    else {cout << "You didn't write 'RUN' :<  Bye..."; return 0;}
    cin >> a;
}
