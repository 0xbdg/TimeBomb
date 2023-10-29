#include <iostream>
#include <ctime>
#include <Windows.h>

int main() {
    std::time_t now = std::time(0);
    std::tm timeinfo;
    localtime_s(&timeinfo,&now);

    int day = timeinfo.tm_mday;
    int month = timeinfo.tm_mon + 1;
    int year = timeinfo.tm_year + 1900; 

    if (day == 5 && month == 7 && year == 2023) {
        MessageBoxW(NULL,L"BOM AKTIF",L"HACKED",MB_OK | MB_ICONWARNING);
    }
    else {
        MessageBoxW(NULL, L"masih normal", L"belum aktif", MB_OK | MB_ICONINFORMATION);
    }
    std::cout << timeinfo.tm_hour << ":" << timeinfo.tm_min << ":" << timeinfo.tm_sec << std::endl;


    return 0;
}