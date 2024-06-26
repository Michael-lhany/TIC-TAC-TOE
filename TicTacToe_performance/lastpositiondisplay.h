#ifndef LASTPOSITIONDISPLAY_H
#define LASTPOSITIONDISPLAY_H

#include <QDialog>
#include <QWidget>
#include <vector>
#include <QString>
namespace Ui {
class lastpositiondisplay;
}

class lastpositiondisplay : public QDialog
{
    Q_OBJECT

public:
    explicit lastpositiondisplay(QWidget *parent = nullptr);
    ~lastpositiondisplay();
    void updateBoard( QString &lastPosition);


private:
    Ui::lastpositiondisplay *ui;
};

#endif // LASTPOSITIONDISPLAY_H
