#ifndef HOWTOPLAY_H
#define HOWTOPLAY_H

#include <QDialog>
#include <QMovie>
namespace Ui {
class howtoplay;
}

class howtoplay : public QDialog
{
    Q_OBJECT

public:
    explicit howtoplay(QWidget *parent = nullptr);
    ~howtoplay();

private slots:
    void on_howtoplay_accepted();

    void on_verticalScrollBar_actionTriggered(int action);

    void on_label_linkActivated(const QString &link);

    void on_howtoplay_destroyed();

private:
    Ui::howtoplay *ui;
     QMovie *movie;
};

#endif // HOWTOPLAY_H
