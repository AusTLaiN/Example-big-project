#include <QCoreApplication>
#include <QDebug>

#include "sharedlib2.h"

using namespace shared_lib2;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SharedLib2 lib;

    lib.f();

    QTextStream qcout(stdout);

    qcout.flush();

    return a.exec();
}
