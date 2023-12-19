/*

  This is an example of using QMap Class

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

    //here I removed one of the varaibles
    ages.remove("Rango");
    qInfo() << "Contains" << ages.contains("Rango");

    foreach(QString key, ages.keys())
    {
        qInfo() << key << " = " << ages[key];
    }

    qInfo() << "Test" << ages.value("Test",-1);

    // here we overwrite the age with a new value
    ages["Saman"] = 35;
    qInfo() << "Saman" << ages.value("Saman",-1);


    return a.exec();
}
