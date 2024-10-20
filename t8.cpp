#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int count;
    cout << "Enter the count of cargo for transportation: ";
    cin >> count;


    float totalCost = 0.0;
    float totalWeight = 0.0;
    float minibusWeight = 0.0;
    float truckWeight = 0.0;
    float trainWeight = 0.0;

    for (int i = 1; i <= count; i++) {
        int weight;
        cout << "Enter the tonnage of cargo " << i << ": ";
        cin >> weight;

        if (weight < 1 || weight > 1000) {
            cout << "Invalid weight for cargo " << i << "." << endl;
            return 1;
        }

        totalWeight = weight+ totalWeight;

        if (weight <= 3) {
            totalCost =totalCost+ weight * 200;
            minibusWeight=minibusWeight + weight;
        } else if (weight <= 11) {
            totalCost = totalCost +weight * 175;
            truckWeight = truckWeight +weight;
        } else {
            totalCost =totalCost + weight * 120;
            trainWeight=trainWeight + weight;
        }
    }

    float averagePrice = totalCost / totalWeight;

    float minibusPercentage = (minibusWeight / totalWeight) * 100.0;
    float truckPercentage = (truckWeight / totalWeight) * 100.0;
    float trainPercentage = (trainWeight / totalWeight) * 100.0;

    cout << fixed << setprecision(2);
    cout << averagePrice << endl;
    cout << minibusPercentage << "%" << endl;
    cout << truckPercentage << "%" << endl;
    cout << trainPercentage << "%" << endl;

    return 0;
}
