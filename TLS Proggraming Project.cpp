#include <iostream>
#include <iomanip>
#include <cmath>

double hitungPajak(double penghasilan) {
    double pajak = 0.0;

    if (penghasilan <= 50000000) {
        pajak = penghasilan * 0.05;
    } else if (penghasilan <= 250000000) {
        pajak = 50000000 * 0.05 + (penghasilan - 50000000) * 0.15;
    } else if (penghasilan <= 500000000) {
        pajak = 50000000 * 0.05 + 200000000 * 0.15 + (penghasilan - 250000000) * 0.25;
    } else {
        pajak = 50000000 * 0.05 + 200000000 * 0.15 + 250000000 * 0.25 + (penghasilan - 500000000) * 0.30;
    }

    return std::round(pajak);
}

int main() {
    double penghasilan;

    std::cout << "Masukkan penghasilan tahunan Anda (dalam Rupiah): ";
    std::cin >> penghasilan;

    double pajak = hitungPajak(penghasilan);

    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Penghasilan      : Rp " << std::setw(15) << penghasilan << std::endl;
    std::cout << "Pajak Penghasilan: Rp " << std::setw(15) << pajak << std::endl;
    std::cout << "Penghasilan Bersih: Rp " << std::setw(15) << (penghasilan - pajak) << std::endl;

    return 0;
}