/*
Age Calculater, using classes and encapsulation
*/

#include <QCoreApplication>
#include <QDebug>
#include "agecalc.h"

void print(AgeCalc &calc)
{
    qInfo() << calc.name() << "Human Years:" << calc.humanYears();
    qInfo() << calc.name() << "Dog Years:" << calc.dogYears();
    qInfo() << calc.name() << "Cat Years:" << calc.catYears();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AgeCalc saman;
    AgeCalc saghar;

    saman.setName("Saman");
    saman.setAge(25);
    saghar.setName("Saghar");
    saghar.setAge(31);

    print(saman);
    print(saghar);

    return a.exec();
}
