..



























#include "gamepanel.h"
#include "loading.h"
#include <QApplication>
#include <QResource>

//资源释放，若指定了父对象，则释放父对象时，先释放子对象，再释放父对象，如果某些窗口不再使用了，需要自己释放，因此此时子窗口的父对象不能释放
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //指定资源文件路径后可以删除资源文件了，可以避免程序编译时将资源文件加载到.exe文件中，而是在运行时加载资源文件
    //生成.rcc文件的方法， rcc -library [.qrc资源文件路径] -o [生成二进制资源的名字.rcc]
    //.qrc是文本文件，.rcc是二进制文件
    QResource::registerResource("./resource.rcc");
    Loading w;
    w.show();
    return a.exec();
}
