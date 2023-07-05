#include <iostream>
#include <conio.h>
#include <map>
#include <string>
using namespace std;
int main()
{
    std::map<std::string, std::string> database;
    database["helo"] = "Halo ! Apa yang bisa saya bantu?";
    database["siapa namamu"] = "Saya adalah Chatbot sederhana";
    database["Apa kabar"] = "Saya adalah program komputer , jadi saya tidak memiliki perasaan , tapi terimaa kasih sudah bertanya";
    database["Apa pekerjaanmu"] = "Saya dirancang untuk membantu menjawab pertanyaan anda ";

    std::string pertanyaan;

    std::cout << "Halo ! Saya adalah Chatbot Sederhana. Silahkan ajukan pertanyaan anda.\n";

    while (true) {
        std::cout << ">";
        std::getline(std::cin, pertanyaan);
        if (database.find(pertanyaan) != database.end()){
            std::cout << database[pertanyaan] << "\n";
        } 
        else if (pertanyaan == "keluar")
        {
           std::cout << "Terimakasih sudah menggunakan program ini";
           break;
        } else {
            std::cout << "Maaf , saya tidak mengerti pertanyaan anda.\n";
        }
    }
    return 0;
}