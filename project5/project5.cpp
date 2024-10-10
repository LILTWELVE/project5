// project5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    class Book {
    public:
        string name;
        string author;
        int year;

        Book(string n,string a, int y) {
            name = n;
            author = a;
            year = y;
        }

        void setInfo(string n, string a) {
            name = n;
            author = a;
        }
    };
    Book myBook("Война и мир", "Толстой", 1869);
    cout << "Название книги: " << myBook.name << endl;
    cout << "Автор книги: " << myBook.author << endl;
    cout << "Год издания: " << myBook.year << endl;

    return 0;
}


