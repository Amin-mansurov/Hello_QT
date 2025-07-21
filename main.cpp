#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QWidget>
#include <QVBoxLayout>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 int cnt = 0;

 QLabel *label = new QLabel("Нажато: 0 раз");
 QPushButton *button = new QPushButton("Нажми меня");

 QWidget window;
 QVBoxLayout *layout = new QVBoxLayout(&window);
 layout->addWidget(label);
 layout->addWidget(button);


 QObject :: connect (button, &QPushButton::clicked, [&cnt, label](){
    cnt ++;
    label->setText("Нажато: " + QString::number(cnt) + " раз");
 });

 window.show();
 return app.exec();
}