#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double get_dna_p_distance(const string& dna1, const string& dna2){
    if (dna1.length() != dna2.length()){
        cerr << "Error: DNA sequence muct be of equal length!" << endl;
        return -1;
    }
    int differences = 0;
    int length = dna1.length();
    for (int i=0; i < length; ++i){
        if (dna1[i] != dna2[i]){
            ++differences;
        }
        
    }
    return static_cast<double>(differences)/length;

}

int main(){
    const string dna1 = "GAGCCTACTAACGGGAT";
    const string dna2 = "CATCGTAATGACGGCCT";

    double p_distance = get_dna_p_distance(dna1, dna2);

    if (p_distance != -1){
        cout << "P-Distance: " << fixed << setprecision(4) << endl;

    }
    return 0;
}