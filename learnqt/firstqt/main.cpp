#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
int main(int argc , char* argv[]){
    QApplication q(argc,argv);
    QMainWindow w;
    w.resize(300,400);
    QPushButton button(&w);
    button.setText("quit");
    button.move(100,200);
    QObject::connect(&button, SIGNAL(clicked()), &w ,SLOT(close()));
    w.show();
    return q.exec();
}
