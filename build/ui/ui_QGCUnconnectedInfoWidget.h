/********************************************************************************
** Form generated from reading UI file 'QGCUnconnectedInfoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGCUNCONNECTEDINFOWIDGET_H
#define UI_QGCUNCONNECTEDINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QGCUnconnectedInfoWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *connectButton;

    void setupUi(QWidget *QGCUnconnectedInfoWidget)
    {
        if (QGCUnconnectedInfoWidget->objectName().isEmpty())
            QGCUnconnectedInfoWidget->setObjectName(QStringLiteral("QGCUnconnectedInfoWidget"));
        QGCUnconnectedInfoWidget->resize(174, 174);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QGCUnconnectedInfoWidget->sizePolicy().hasHeightForWidth());
        QGCUnconnectedInfoWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(QGCUnconnectedInfoWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        connectButton = new QPushButton(QGCUnconnectedInfoWidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        sizePolicy.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy);
        connectButton->setMinimumSize(QSize(174, 174));
        connectButton->setSizeIncrement(QSize(20, 20));
        connectButton->setBaseSize(QSize(150, 150));
        connectButton->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/QGroundControlConnect"), QSize(), QIcon::Normal, QIcon::Off);
        connectButton->setIcon(icon);
        connectButton->setIconSize(QSize(140, 140));

        gridLayout->addWidget(connectButton, 0, 0, 1, 1);


        retranslateUi(QGCUnconnectedInfoWidget);

        QMetaObject::connectSlotsByName(QGCUnconnectedInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *QGCUnconnectedInfoWidget)
    {
        QGCUnconnectedInfoWidget->setWindowTitle(QApplication::translate("QGCUnconnectedInfoWidget", "Form", Q_NULLPTR));
        connectButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QGCUnconnectedInfoWidget: public Ui_QGCUnconnectedInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGCUNCONNECTEDINFOWIDGET_H
