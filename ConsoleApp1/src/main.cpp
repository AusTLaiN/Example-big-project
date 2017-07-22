#include <QCoreApplication>
#include <QDebug>

#include "sharedlib2.h"
#include "sharedlib3.h"

using namespace shared_lib2;
using namespace shared_lib3;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SharedLib2 lib;
    lib.f();

    SharedLib3 lib3;
    lib3.func();

    QTextStream qcout(stdout);

    qcout.flush();

    return a.exec();
}
