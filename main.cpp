#include "mainw.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //создаем объект для управления событиями приложения
    mainw * sw = new mainw(); //создадим
    //показать окно
    sw->show();
    //запуск обработки событий
    return a.exec(); //цикл обработки событий
}
