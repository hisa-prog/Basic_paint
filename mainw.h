#ifndef MAINW_H
#define MAINW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class mainw; }
QT_END_NAMESPACE

struct qp //структура для хранения координаты при рисовании
{
   QPoint pos;
   int fl;
};

class mainw : public QMainWindow
{
public:
    explicit mainw();
    void paintEvent( QPaintEvent *event);
    QPoint pos; //координаты точки для рисования
    void mouseMoveEvent(QMouseEvent *event);
    QVector<qp> vcp; //массив (вектор) для хранения рисунка
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    int f;

};
#endif // MAINW_H
