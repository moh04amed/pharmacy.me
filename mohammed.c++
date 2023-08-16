#include <iostream>

using namespace std;

int main() {
    float tp_cell, tp_veg, tp_org, tp_gnrl, td_org, td_gnrl, td_math, td_physique, td_physio, 
          emd1_cell, emd2_cell, emd3_cell, emd1_veg, emd2_veg, emd1_physique, emd2_physique, 
          emd1_math, emd2_math, emd1_org, emd2_org, emd1_gnrl, emd2_gnrl, emd_français, 
          emd_histoire, emd_anatomie, emd_physio;

    // Input values
    cout << "Enter TP Cell value: ";
    cin >> tp_cell;
    cout << "Enter TP veg value: ";
    cin >> tp_veg;
    cout << "Enter TP org value: ";
    cin >> tp_org;
    cout << "Enter TP gnrl value: ";
    cin >> tp_gnrl;
    cout << "Enter TD org value: ";
    cin >> td_org;
    cout << "Enter TD gnrl value: ";
    cin >> td_gnrl;
    cout << "Enter TD math value: ";
    cin >> td_math;
    cout << "Enter TD physique value: ";
    cin >> td_physique;
    cout << "Enter TD physio value: ";
    cin >> td_physio;
    cout << "Enter EMD Cell 1 value: ";
    cin >> emd1_cell;
    cout << "Enter EMD Cell 2 value: ";
    cin >> emd2_cell;
    cout << "Enter EMD Cell 3 value: ";
    cin >> emd3_cell;
    cout << "Enter EMD org 1 value: ";
    cin >> emd1_org;
    cout << "Enter EMD org 2 value: ";
    cin >> emd2_org;
    // ... repeat the input for the remaining variables

    // Calculate module averages
    float avg_cell = (tp_cell + emd1_cell + emd2_cell + emd3_cell) / 4;
    float avg_veg = (tp_veg + emd1_veg + emd2_veg) / 3;
    float avg_org = ((tp_org + td_org) / 2 + emd1_org + emd2_org) / 3;
    float avg_gnrl = ((tp_gnrl + td_gnrl) / 2 + emd1_gnrl + emd2_gnrl) / 3;
    float avg_math = (td_math + emd1_math + emd2_math) / 3;
    float avg_physique = (td_physique + emd1_physique + emd2_physique) / 3;
    float avg_physio = (td_physio + emd_physio * 2) / 3;

    // Calculate weighted averages
    float weighted_avg_cell = avg_cell * 3;
    float weighted_avg_veg = avg_veg * 2;
    float weighted_avg_org = avg_org * 3;
    float weighted_avg_gnrl = avg_gnrl * 3;
    float weighted_avg_math = avg_math * 3;
    float weighted_avg_physique = avg_physique * 2;
    float weighted_avg_physio = avg_physio * 2;
    float weighted_avg_français = emd_français * 1;
    float weighted_avg_anatomie = emd_anatomie * 1;
    float weighted_avg_histoire = emd_histoire * 1;

    // Calculate weighted sum
    float weighted_sum = (weighted_avg_cell + weighted_avg_veg + weighted_avg_org +
                          weighted_avg_gnrl + weighted_avg_math + weighted_avg_physique +
                          weighted_avg_physio + weighted_avg_français + weighted_avg_anatomie +
                          weighted_avg_histoire);

    // Calculate final average
    float final_average = weighted_sum / 22;

    // Determine student's status
    string status = (final_average >= 10) ? "Admitted" : "Repeat the year";

    // Print the results
    cout << "Final Average: " << fixed << final_average << endl;
    cout << "Student Status: " << status << endl;

    return 0;
}
