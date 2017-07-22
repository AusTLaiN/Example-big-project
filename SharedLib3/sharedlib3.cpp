#include "sharedlib3.h"

#include <QDebug>

using namespace shared_lib3;

SharedLib3::SharedLib3()
{
}

void SharedLib3::func()
{
    qDebug() << "SharedLib3::func called";
}
