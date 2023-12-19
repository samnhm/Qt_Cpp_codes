/*

  This is an example of using QMap Class
  I have used QMap to display the ages of three variables

 */

#include <QCoreApplication>
#include <QMap>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<QString,int> ages;
    ages.insert("Saman", 25);
    ages.insert("Limon", 13);
    ages.insert("Rango", 15);

    qInfo() << "Keys:" << ages.keys();
    qInfo() << "Values:" << ages.values();
    qInfo() << "Saman is:" << ages["Saman"] << "years old";

    ages.remove("Rango");
    qInfo() << "Contains" << ages.contains("Rango");

    foreach(QString key, ages.keys())
    {
        qInfo() << key << " = " << ages[key];
    }

    qInfo() << "Test" << ages.value("Test",-1);

    ages["Saman"] = 99;
    qInfo() << "Saman" << ages.value("Saman",-1);

    ages["Test"] = 222;
    qInfo() << "Test" << ages.value("Test",-1);

    return a.exec();
}
