#include <QApplication>
#include <QPushButton>
#include <QFrame>
#include "window.h"

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 Window window;
 window.show();

 return app.exec();
}