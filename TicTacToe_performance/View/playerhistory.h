#ifndef PLAYERHISTORY_H
#define PLAYERHISTORY_H

#include <QSoundEffect>  // Include QSound
#include <QtSql>
#include <QDialog>
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMap>
#include <QList>
#include <QPair>
#include <QComboBox>
#include <memory>
namespace Ui {
class Playerhistory;
}

class Playerhistory : public QDialog
{
    Q_OBJECT

public:
    explicit Playerhistory(QWidget *parent = nullptr);
    ~Playerhistory();
    bool recordGame(QString &username, QString &result, QString &lastBoardPosition);
    void onGameSelected(int index);
    void loadUserGames(QString &username);
    void loadUserStatistics( QString &username);
    QString getLastBoardPosition(int gameId);
    QList<QPair<int, QString>> getUserGames( QString &username);
    QMap<QString, int> getUserStatistics( QString &username);
protected:
    void resizeEvent(QResizeEvent *event) override; // Declare resizeEvent here
private slots:
    void on_return_2_clicked();

private:
    Ui::Playerhistory *ui;
    QSoundEffect clickSound;  // Add a member for the sound effect
    QSqlDatabase m_db;
    void setMainPageBackground();
};

#endif // PLAYERHISTORY_H
