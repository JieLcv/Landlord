/********************************************************************************
** Form generated from reading UI file 'scorepannel.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREPANNEL_H
#define UI_SCOREPANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScorePannel
{
public:
    QGridLayout *gridLayout;
    QLabel *meTitle;
    QLabel *myScore;
    QLabel *score1;
    QLabel *leftTitle;
    QLabel *leftScore;
    QLabel *score2;
    QLabel *rightTitle;
    QLabel *rightScore;
    QLabel *score3;

    void setupUi(QWidget *ScorePannel)
    {
        if (ScorePannel->objectName().isEmpty())
            ScorePannel->setObjectName(QStringLiteral("ScorePannel"));
        ScorePannel->resize(353, 201);
        gridLayout = new QGridLayout(ScorePannel);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        meTitle = new QLabel(ScorePannel);
        meTitle->setObjectName(QStringLiteral("meTitle"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        meTitle->setFont(font);
        meTitle->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        meTitle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(meTitle, 0, 0, 1, 1);

        myScore = new QLabel(ScorePannel);
        myScore->setObjectName(QStringLiteral("myScore"));
        myScore->setFont(font);
        myScore->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        myScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(myScore, 0, 1, 1, 1);

        score1 = new QLabel(ScorePannel);
        score1->setObjectName(QStringLiteral("score1"));
        score1->setFont(font);
        score1->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        score1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(score1, 0, 2, 1, 1);

        leftTitle = new QLabel(ScorePannel);
        leftTitle->setObjectName(QStringLiteral("leftTitle"));
        leftTitle->setFont(font);
        leftTitle->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        leftTitle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(leftTitle, 1, 0, 1, 1);

        leftScore = new QLabel(ScorePannel);
        leftScore->setObjectName(QStringLiteral("leftScore"));
        leftScore->setFont(font);
        leftScore->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        leftScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(leftScore, 1, 1, 1, 1);

        score2 = new QLabel(ScorePannel);
        score2->setObjectName(QStringLiteral("score2"));
        score2->setFont(font);
        score2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        score2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(score2, 1, 2, 1, 1);

        rightTitle = new QLabel(ScorePannel);
        rightTitle->setObjectName(QStringLiteral("rightTitle"));
        rightTitle->setFont(font);
        rightTitle->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        rightTitle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(rightTitle, 2, 0, 1, 1);

        rightScore = new QLabel(ScorePannel);
        rightScore->setObjectName(QStringLiteral("rightScore"));
        rightScore->setFont(font);
        rightScore->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        rightScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(rightScore, 2, 1, 1, 1);

        score3 = new QLabel(ScorePannel);
        score3->setObjectName(QStringLiteral("score3"));
        score3->setFont(font);
        score3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        score3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(score3, 2, 2, 1, 1);


        retranslateUi(ScorePannel);

        QMetaObject::connectSlotsByName(ScorePannel);
    } // setupUi

    void retranslateUi(QWidget *ScorePannel)
    {
        ScorePannel->setWindowTitle(QApplication::translate("ScorePannel", "Form", 0));
        meTitle->setText(QApplication::translate("ScorePannel", "\346\210\221", 0));
        myScore->setText(QString());
        score1->setText(QApplication::translate("ScorePannel", "\345\210\206", 0));
        leftTitle->setText(QApplication::translate("ScorePannel", "\345\267\246\344\276\247\346\234\272\345\231\250\344\272\272", 0));
        leftScore->setText(QString());
        score2->setText(QApplication::translate("ScorePannel", "\345\210\206", 0));
        rightTitle->setText(QApplication::translate("ScorePannel", "\345\217\263\344\276\247\346\234\272\345\231\250\344\272\272", 0));
        rightScore->setText(QString());
        score3->setText(QApplication::translate("ScorePannel", "\345\210\206", 0));
    } // retranslateUi

};

namespace Ui {
    class ScorePannel: public Ui_ScorePannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREPANNEL_H
