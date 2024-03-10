#include "StartPage.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    StartPage startPage;
    startPage.showFullScreen();

    return app.exec();
}
