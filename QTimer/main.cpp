/*
  In this example, I have used QTimer class by including it in our header file.
  An example of using signals and slots.
  The result is writing the word "Test" for 5 times with 1000ms intervals.
*/

#include <QCoreApplication>
#include "test.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test test;

    return a.exec();
}
