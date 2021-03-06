#ifndef _SETTINGS_H
#define _SETTINGS_H

#include "common.h"

#include <QtGui>

class Settings
{
  public:
    Settings();
    virtual ~Settings();
    string getNamePlayer1();
    void setNamePlayer1(string namePlayer1);
    string getNamePlayer2();
    void setNamePlayer2(string namePlayer2);
    bool getIsRaising();
    void setIsRaising(bool isRaising);

  private:
    string namePlayer1;
    string namePlayer2;
    bool isRaising;
};

QDataStream & operator<<(QDataStream & stream, Settings & settings);
QDataStream & operator>>(QDataStream & stream, Settings & settings);

#endif

