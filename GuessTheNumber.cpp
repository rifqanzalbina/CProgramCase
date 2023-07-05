#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    srand(time(0));
    int angkaTebakan = rand() % 100 + 1;
    int tebakan;
    int jumlahTebakan = 0;
    bool berhasil = false;

    std::cout << "Selamat datang di permainan Tebak Angka ! : \n";
    std::cout << "Saya telah memilih sebuah angka antara 1 hingga 100. \n";

    while (!berhasil){
        std::cout << "Tebak angka";
        std::cin >> tebakan;
        jumlahTebakan++;

        if (tebakan == angkaTebakan){
            berhasil = true;
            std::cout << "Selamat ! Anda menebak angka dengan benar setelah " << jumlahTebakan << " kali tebakan \n";
        } else if(tebakan < angkaTebakan) {
            std::cout << "Angka terlalu rendah. Coba lagi. \n";
        } else {
            std::cout << "Angka terlalu tinggi. Coba lagi. \n";
        }
    }
    return 0;
}