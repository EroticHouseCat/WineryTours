#ifndef FULLTOUR_H
#define FULLTOUR_H

#include <QWidget>
#include "intour.h"

namespace Ui {
class FullTour;
}

class FullTour : public QWidget
{
    Q_OBJECT

public:
    explicit FullTour(QWidget *parent = 0);
    ~FullTour();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FullTour *ui;
    inTour* tourWindow;
};

#endif // FULLTOUR_H