#ifndef STARTPAGE_H
#define STARTPAGE_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QApplication>

class StartPage : public QWidget
{
    Q_OBJECT

public:
    explicit StartPage(QWidget *parent = nullptr);
    ~StartPage();

signals:
    void multiplayerClicked();
    void singleplayerClicked();
    void tutorialClicked();
    void exitClicked();

private:
    QLabel *logoLabel;
    QLabel *gamemodeLabel;
    QPushButton *multiplayerButton;
    QPushButton *singleplayerButton;
    QPushButton *tutorialButton;
    QPushButton *exitButton;
    QVBoxLayout *layout;

    void setupUi();
    void setupConnections();
    void updateFontSize();
};

#endif
