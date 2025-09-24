#include <iostream>
#include <clocale>

using namespace std;

void head(){
    cout << "+------------------------+" << endl;
    cout << "|Практическая работа #7  |" << endl;
    cout << "+------------------------+" << endl;
    cout << "|Выполнил: Сабиров Ильназ|" << endl;
    cout << "|Группа: П-23            |" << endl;
    cout << "+------------------------+" << endl;
}

struct Elevator{
    int floor;
    bool status;
    int direction;
};


int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    head();

    char repeat;

    do{

        cout << "Хотите повторить выполнение программы?(Y/N)" << endl;
        cout << ":> ";
        cin >> repeat;
    }while(repeat == 'Y' || repeat == 'y');

    return 0;
}