#ifndef FFILESYNC_H
#define FFILESYNC_H




 //class FDB;
#include "fexception.h"

#include <QDir>

class FFileSync
{
public:
    bool sync(QDir local , int numBckps);

private:
    swapFiles(QDir src, QDir trgt);
  //  FDB *db;
};

#endif // FFILESYNC_H
