#include "sharedlib2.h"

#include <QDebug>

using namespace shared_lib2;


SharedLib2::SharedLib2()
{
}

void SharedLib2::f()
{
    qDebug() << "SharedLib2::f called";
}
