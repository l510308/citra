/********************************************************************************
** Form generated from reading UI file 'cheat_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHEAT_GUI_H
#define UI_CHEAT_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheatDialog
{
public:
    QLabel *labelTitle;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonNewCheat;
    QPushButton *buttonDelete;
    QPushButton *buttonSave;
    QPushButton *buttonClose;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableCheats;
    QLabel *labelAvailableCheats;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *textNotes;
    QLabel *labelNotes;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *textDetails;
    QLabel *labelDetails;

    void setupUi(QDialog *CheatDialog)
    {
        if (CheatDialog->objectName().isEmpty())
            CheatDialog->setObjectName(QStringLiteral("CheatDialog"));
        CheatDialog->setWindowModality(Qt::ApplicationModal);
        CheatDialog->resize(862, 612);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CheatDialog->sizePolicy().hasHeightForWidth());
        CheatDialog->setSizePolicy(sizePolicy);
        labelTitle = new QLabel(CheatDialog);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setGeometry(QRect(10, 10, 300, 31));
        QFont font;
        font.setPointSize(10);
        labelTitle->setFont(font);
        horizontalLayoutWidget = new QWidget(CheatDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 570, 841, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonNewCheat = new QPushButton(horizontalLayoutWidget);
        buttonNewCheat->setObjectName(QStringLiteral("buttonNewCheat"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonNewCheat->sizePolicy().hasHeightForWidth());
        buttonNewCheat->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(buttonNewCheat);

        buttonDelete = new QPushButton(horizontalLayoutWidget);
        buttonDelete->setObjectName(QStringLiteral("buttonDelete"));

        horizontalLayout->addWidget(buttonDelete);

        buttonSave = new QPushButton(horizontalLayoutWidget);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));

        horizontalLayout->addWidget(buttonSave);

        buttonClose = new QPushButton(horizontalLayoutWidget);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));

        horizontalLayout->addWidget(buttonClose);

        verticalLayoutWidget = new QWidget(CheatDialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 80, 551, 471));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableCheats = new QTableWidget(verticalLayoutWidget);
        if (tableCheats->columnCount() < 3)
            tableCheats->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableCheats->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableCheats->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableCheats->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableCheats->setObjectName(QStringLiteral("tableCheats"));
        tableCheats->setShowGrid(false);
        tableCheats->setColumnCount(3);
        tableCheats->horizontalHeader()->setVisible(true);
        tableCheats->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableCheats);

        labelAvailableCheats = new QLabel(CheatDialog);
        labelAvailableCheats->setObjectName(QStringLiteral("labelAvailableCheats"));
        labelAvailableCheats->setGeometry(QRect(10, 60, 121, 16));
        verticalLayoutWidget_2 = new QWidget(CheatDialog);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(580, 440, 271, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textNotes = new QPlainTextEdit(verticalLayoutWidget_2);
        textNotes->setObjectName(QStringLiteral("textNotes"));

        verticalLayout_2->addWidget(textNotes);

        labelNotes = new QLabel(CheatDialog);
        labelNotes->setObjectName(QStringLiteral("labelNotes"));
        labelNotes->setGeometry(QRect(580, 420, 111, 16));
        verticalLayoutWidget_3 = new QWidget(CheatDialog);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(580, 80, 271, 311));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        textDetails = new QPlainTextEdit(verticalLayoutWidget_3);
        textDetails->setObjectName(QStringLiteral("textDetails"));

        verticalLayout_3->addWidget(textDetails);

        labelDetails = new QLabel(CheatDialog);
        labelDetails->setObjectName(QStringLiteral("labelDetails"));
        labelDetails->setGeometry(QRect(580, 60, 55, 16));

        retranslateUi(CheatDialog);

        QMetaObject::connectSlotsByName(CheatDialog);
    } // setupUi

    void retranslateUi(QDialog *CheatDialog)
    {
        CheatDialog->setWindowTitle(QApplication::translate("CheatDialog", "Cheats", 0));
        labelTitle->setText(QApplication::translate("CheatDialog", "Game Title - GameID", 0));
        buttonNewCheat->setText(QApplication::translate("CheatDialog", "Add Cheat", 0));
        buttonDelete->setText(QApplication::translate("CheatDialog", "Delete", 0));
        buttonSave->setText(QApplication::translate("CheatDialog", "Save", 0));
        buttonClose->setText(QApplication::translate("CheatDialog", "Close", 0));
        QTableWidgetItem *___qtablewidgetitem = tableCheats->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("CheatDialog", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableCheats->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("CheatDialog", "Type", 0));
        labelAvailableCheats->setText(QApplication::translate("CheatDialog", "Available Cheats:", 0));
        labelNotes->setText(QApplication::translate("CheatDialog", "Notes:", 0));
        labelDetails->setText(QApplication::translate("CheatDialog", "Details:", 0));
    } // retranslateUi

};

namespace Ui {
    class CheatDialog: public Ui_CheatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHEAT_GUI_H
