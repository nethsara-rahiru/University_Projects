#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cmath>

using namespace std;

// Function to calculate the median
double calculateMedian(vector<double> data) {
    int n = data.size();
    sort(data.begin(), data.end());

    if (n % 2 == 0)
        return (data[n / 2 - 1] + data[n / 2]) / 2.0;
    else
        return data[n / 2];
}

// Function to calculate variance and standard deviation
void calculateStatistics(vector<double> data, double &variance, double &stdDev) {
    double sum = 0.0, mean, sumSqDiff = 0.0;
    int n = data.size();

    // Calculate the mean
    for (double value : data)
        sum += value;
    mean = sum / n;

    // Calculate variance and standard deviation
    for (double value : data)
        sumSqDiff += pow(value - mean, 2);

    variance = sumSqDiff / n;
    stdDev = sqrt(variance);
}

int main() {
    vector<double> data;
    string input;
    
    // Take input as a single line (comma-separated values)
    cout << "Enter the data set : ";
    getline(cin, input);

    // Replace commas with spaces to make it easier to parse
    replace(input.begin(), input.end(), ',', ' ');

    // Use a stringstream to parse the input
    stringstream ss(input);
    double value;
    
    // Read the values from the stringstream
    while (ss >> value) {
        data.push_back(value);
    }

    // Sort the data
    sort(data.begin(), data.end());

    // Output the data points
    cout << endl << "Data points: " << endl;
    for (double val : data) {
        cout << val << " ";
    }
    cout << endl << endl;

    // Calculate min and max
    double minVal = data.front();
    double maxVal = data.back();

    // Calculate median
    double median = calculateMedian(data);

    // Calculate variance and standard deviation
    double variance, stdDev;
    calculateStatistics(data, variance, stdDev);

    // Output results
    cout << "Min                 : " << minVal << endl;
    cout << "Max                 : " << maxVal << endl;
    cout << "Median              : " << median << endl;
    cout << "Variance            : " << variance << endl;
    cout << "Standard Deviation  : " << stdDev << endl;

    return 0;
}
