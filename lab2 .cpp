#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int height;
    int weight;

    cout << "Please enter your height: " << "\n";
    cin >> height;

       if (height > 0) {
        cout << "Please enter your weight: " <<  "\n";
        cin >> weight;
        if (weight > 0)
        {
            double bmi = (static_cast<double>(weight) * 703) / (height * height);
            cout << fixed << setprecision(2);
            cout << "BMI = " << bmi <<  "\n";

            if (bmi < 18.5) {
                cout << "You are underweight." << "\n";
            }
            else if(bmi > 25){
                cout << "You are overweight." << "\n";
            } else{
                cout << "You are optimal." << "\n";
            }
        }
        else
        {
            cout << "That's an invalid weight." << "\n";
        }
       }
       else{
        cout << "That's an invalid height." << "\n";
       }

return 0;
}
