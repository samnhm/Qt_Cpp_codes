/*
  In this example I have used Template and also QString
*/


#include <QCoreApplication>
#include <QDebug>

template<typename T>
void print(T value)
{
    qInfo() << value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    print<int>(1);
    print<double>(1975.1904);
    print<QString>(QString("Qt Company"));

    return a.exec();
}
