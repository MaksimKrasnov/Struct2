#include <iostream>
#include<cmath>
using namespace std;
struct date
{
    int day;
    int month;
    int year;
};
struct Person {
    char name[50];
    char address[200];
    date birthday;
    //int year;
    //float n;
    //double f;
    //bool d;
};


//Напишите структуру которая описывает точку на плоскости
//Написать функцию которая вычисляет расстояние между точками
struct Point {
    double x;
    double y;
};

double calaculateDistance(Point p1, Point p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

//Написать структуру описывающую прямоугольник
//
struct Rectangle {
    double width;
    double height;
    Point leftCorn;
};


//Написать функции 
//1 перемещение прямоугольника
//2 изменение размера
//3 перемещение с изменением размера
//4 вывод на экран

void movedRectangle(Rectangle& rect, double newX, double newY) {
    rect.leftCorn.x = newX;
    rect.leftCorn.y = newY;
}

void showRectangle(Rectangle rect) {
    cout << "Width: " << rect.width;
    cout << "Height: " << rect.height;
    cout << "X: " << rect.leftCorn.x;
    cout << "Y: " << rect.leftCorn.y;

}

int main()
{

    setlocale(LC_ALL, "ru");
    system("chcp 1251");
   /* date birthDay = { 11,4,1995 };
    cout << "My Birthday" << endl;
    cout << "Day: " << birthDay.day << endl;
    cout << "Month: " << birthDay.month << endl;
    cout << "Year: " << birthDay.year << endl;

    date yourBirthday;
    cout << "Enter day" << endl;
    cin >> yourBirthday.day;
    cout << "Enter Month" << endl;
    cin >> yourBirthday.month;
    cout << "Enter year" << endl;
    cin >> yourBirthday.year;

    cout << "Your Birthday" << endl;
    cout << "Day: " << yourBirthday.day << endl;
    cout << "Month: " << yourBirthday.month << endl;
    cout << "Year: " << yourBirthday.year << endl;

    
    Person person;
    cin.ignore();
    cout << "Введите имя" << endl;
    cin.getline(person.name,50);
    cout << "Введите адрес" << endl;
    cin.getline(person.address,200);

    cout << "Введите день рождения" << endl;
    cin >> person.birthday.day;
    cout << "Введите месяц рождения" << endl;
    cin >> person.birthday.month;
    cout << "Введите год рождения" << endl;
    cin >> person.birthday.year;

    cout << "Person" << endl;
    cout << "Имя: " << person.name << endl;ываываыва
    cout << "Адрес: " << person.address;
    cout << "День: " << person.birthday.day << endl;
    cout << "Месяц: " << person.birthday.month << endl;
    cout << "Год: " << person.birthday.year << endl; */

    //Point point1;
    //Point point2;
    //point1.x = 5.2;
    //point1.y = 1.3;
    //point2.x = 1.7;
    //point2.y = 10.58;
    //double distance = calaculateDistance(point1, point2);
    //
    //cout << distance;

    Rectangle rect;
    rect.height = 10;
    rect.width = 50;
    rect.leftCorn.x = 1.2;
    rect.leftCorn.y = 1.8;

    showRectangle(rect);
    movedRectangle(rect, 5.7, 6.9);
    showRectangle(rect);


}
