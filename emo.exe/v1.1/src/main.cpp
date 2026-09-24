// Main Application
// Version 1.1
// Author: Your Name
// Date: 2024-06-12
#include <cstdio>
#include <iostream>
#include <cstdint>
#include <ctime>
#include <unistd.h>
#include <thread>
#include <chrono>
#include <cstdlib>
using namespace std;
std::int16_t year =0;
std::int8_t month =0;
std::int8_t day =0;

// Function to clear input buffer
//32% = 100%と仮定してください。おいおい新しいバージョンを書きます。
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
void forprint() {
    for(int a=0; a<64; a++) {
        printf("=");
    }
}
  
void get_current_date() {
    const time_t now = time(nullptr);
    const tm* local_time = localtime(&now);

    if (local_time == nullptr) {
        year = 0;
        month = 0;
        day = 0;
        return;
    }

    year = local_time->tm_year + 1900;//how to put the current year into the year variable is year = local_time->tm_year + 1900;
    month = local_time->tm_mon + 1;
    day = local_time->tm_mday;
    return;
}
int main(){
    get_current_date();
    char name[12] = {};
    cout << "ようこそ。お名前を入力してください" << endl;
    cout << "Welcome. Please enter your name : " << flush;
    cin.width(sizeof(name));
    cin >> name;
    cout << "こんにちは、" << name << "さん！\n";
    cout << "Hello, " << name << "!\n";
    cout << "今日は" << year << "/" << static_cast<int>(month) << "/" << static_cast<int>(day) << "です。\n";
    cout << "Today is " << year << "/" << static_cast<int>(month) << "/" << static_cast<int>(day) << ".\n";
    cout << "Please chose an option: " << endl;
    cout << "1 : run life span program\n";
    cout << "2 : run study tracker program\n";
    cout << "3 : run pomodoro timer\n";

    std::int16_t choice;
    char hoge[12];
    for(int i = 0; i < 12; i++) {
        hoge[i] = '\0';
    }
    cout << "Enter your choice: " << flush;
    while (!(cin >> choice) || choice < 1 || choice > 4) {
        cin.clear();// Clear the error flag on cin
        cin.ignore(10000, '\n');// Ignore the rest of the line
        cout << "Invalid choice. Enter 1-4: " << flush;
    }
    main_menu:;
    switch (choice) {
        case 1: {
            forprint();
            cout << "\n";
            cout << "Called life span program.\n";
            system("../apps/lifespan_v1.3/main");
            break;
        }

        case 2: {
            forprint();
            cout << "\n";
            cout << "Called study tracker program.\n";
            system("../apps/studyTimeTrackingV1.2/main");
            break;
        }
   
        case 3: {
            forprint();
            cout << "\n";
            cout << "Called pomodoro timer.\n";
            system("../apps/pomo/main");
            break;
        }
        default:
            cout << "Invalid choice.\n" << flush;
            goto main_menu;
        }
    return 0;
}