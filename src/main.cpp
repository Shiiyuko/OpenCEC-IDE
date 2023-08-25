#include <QApplication>

#include "cecide.h"

int main(int argv, char **args)
{
    QApplication app(argv, args);

    CodeEditor editor;
    editor.setWindowTitle(QObject::tr("CEC IDE"));
    editor.show();

    return app.exec();
}