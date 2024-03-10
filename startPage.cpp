#include "StartPage.h"
#include <QLabel>
#include <QScreen>



StartPage::StartPage(QWidget *parent) : QWidget(parent)
{
    setupUi();
    setupConnections();
    updateFontSize();
}

StartPage::~StartPage()
{
    delete layout;
    delete logoLabel;
    delete gamemodeLabel;
    delete multiplayerButton;
    delete singleplayerButton;
    delete tutorialButton;
    delete exitButton;
}

void StartPage::setupUi()
{
    this->setStyleSheet("background-color: #06423b;");

    layout = new QVBoxLayout(this);

    logoLabel = new QLabel("Labyrinth", this);
    layout->addWidget(logoLabel);

    gamemodeLabel = new QLabel("Gamemode", this);
    layout->addWidget(gamemodeLabel);

    multiplayerButton = new QPushButton("Multiplayer", this);
    layout->addWidget(multiplayerButton);

    singleplayerButton = new QPushButton("Singleplayer", this);
    layout->addWidget(singleplayerButton);

    tutorialButton = new QPushButton("Tutorial", this);
    layout->addWidget(tutorialButton);

    exitButton = new QPushButton("Exit", this);
    layout->addWidget(exitButton);
}

void StartPage::setupConnections()
{
    connect(qApp->primaryScreen(), &QScreen::geometryChanged, this, &StartPage::updateFontSize);
    connect(multiplayerButton, &QPushButton::clicked, this, &StartPage::multiplayerClicked);
    connect(singleplayerButton, &QPushButton::clicked, this, &StartPage::singleplayerClicked);
    connect(tutorialButton, &QPushButton::clicked, this, &StartPage::tutorialClicked);
    connect(exitButton, &QPushButton::clicked, this, &StartPage::exitClicked);
}

void StartPage::updateFontSize()
{
    if (logoLabel)
    {
        int fontSize = qMin(width(), height()) / 5;
        QString styleSheet = QString("font-size: %1px; color: #3B6F50; font-family: 'Apple Chancery', cursive;").arg(fontSize);
        logoLabel->setStyleSheet(styleSheet);
        logoLabel->setAlignment(Qt::AlignCenter);
    }
    if(gamemodeLabel)
    {
        int fontSize = qMin(width(), height()) / 10;
        QString styleSheet = QString("font-size: %1px; color: #3B6F50; font-family: 'Apple Chancery', cursive;").arg(fontSize);
        gamemodeLabel->setStyleSheet(styleSheet);
        gamemodeLabel->setAlignment(Qt::AlignCenter);
    }
}
