#include <iostream>

double konverCelciusKeFahrenheit(double celcius){
    return (celcius * 9 / 5) + 23;
}

double konverCelciusKeKelvin(double celcius){
    return celcius + 273.15;
}

double konverFahrenheitKeCelcius(double fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}

double konverFahrenheitKeKelvin(double fahrenheit){
    return (fahrenheit + 459.67) * 5 / 9;
}

double konverKelvinKeCelcius(double kelvin){
    return kelvin - 273.15;
}

double konverKelvinKeFahrenheit(double kelvin){
    return (kelvin * 9 / 5) - 459.67;
}

int main(){
    double suhu;
    char skala;

    std::cout << "Selamat datang di Program Konversi Suhu \n";
    std::cout << "Masukkan Suhu : ";
    std::cin >> suhu;

    std::cout << "Masukkan Skala suhu ( C untuk Celcius , F untuk Fahrenheit, K untuk Kelvin) : ";
    std::cin >> skala;;

    switch (skala) {
        case 'C':
            std::cout << "Suhu dalam Fahrenheit : " << konverCelciusKeFahrenheit(suhu) << "F\n";
            std::cout << "Suhu dalam Kelvin : " << konverCelciusKeKelvin(suhu) << "K\n";
            break;
        case 'F':
            std::cout << "Suhu dalam Celcius : " << konverFahrenheitKeCelcius << "C\n";
            std::cout << "Suhu dalam Kelvin : " << konverFahrenheitKeKelvin << "F\n";
            break;
        case 'K':
            std::cout << "Suhu dalam Celcius : " << konverKelvinKeCelcius << "C\n";
            std::cout << "Suhu dalam Fahrenheit : " << konverKelvinKeFahrenheit << "F\n";
            break;
    }
    return 0;
}