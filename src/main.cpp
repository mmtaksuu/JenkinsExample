#include <QApplication>
#include <QPushButton>
#include <QWindow>
#include <QWidget>
#include <QString>
#include "hello_word.hpp"

int main(int argc, char **argv )
{
    QApplication app(argc, argv);
    QWidget window{};
    window.resize(320, 240);
    window.show();

    std::string hello = HelloWorld{}.helloWorld();

    window.setWindowTitle(QApplication::translate("toplevel", hello.c_str()));

    return app.exec();
}
