#include <iostream>
using std::cout;
using std::cin;

#include <optional>
using std::optional;


optional<int> first_factor(int num){
    for (int factor=2;factor<num/2;factor++){
        if (num%factor==0){return factor;}
    }
    return {};
}


int main (){
    int number;
    cin >> number;

    auto factor = first_factor(number);
    if (factor.has_value())
        cout << "Found factor: " << factor.value()<<'\n';
    else 
        cout << "Prime number\n";

    return 0;
}