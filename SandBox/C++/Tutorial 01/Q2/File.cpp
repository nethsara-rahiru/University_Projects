#include <iostream>
using namespace std;

int main() {
    double weightPounds, heightInches, weightKg, heightMeters, bmi;

    cout << "Enter weight in pounds: ";
    cin >> weightPounds;
    cout << "Enter height in inches: ";
    cin >> heightInches;

    weightKg = weightPounds * 0.45359237;
    heightMeters = heightInches * 0.0254;
    bmi = weightKg / (heightMeters * heightMeters);

    cout << "Your BMI is " << bmi << endl;
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi < 25.0)
        cout << "Normal" << endl;
    else if (bmi < 30.0)
        cout << "Overweight" << endl;
    else
        cout << "Obese" << endl;

    return 0;
}
