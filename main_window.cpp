#include <iostream>
#include <string>
#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QFormLayout>
#include <QGroupBox>
#include <QLineEdit>
#include <QFileDialog>
#include <QComboBox>
#include <QTextEdit>
#include <QLabel>
#include <fstream>
#include "main_window.h"
#include "generate_window.h"

mainWindow::mainWindow() : QWidget()
{
    m_main_layout = new QFormLayout;
    m_text_to_crypt = new QTextEdit;
    m_hbox_buttons = new QHBoxLayout;
    m_crypt = new QPushButton("Crypt");
    m_uncrypt = new QPushButton("Uncrypt");
    m_leave = new QPushButton("Leave");

    m_hbox_buttons->setAlignment(Qt::AlignRight);
    m_hbox_buttons->addWidget(m_crypt);
    m_hbox_buttons->addWidget(m_uncrypt);
    m_hbox_buttons->setContentsMargins(0, 5, 0, 0);

    m_main_layout->addRow(m_text_to_crypt);
    m_main_layout->addRow(m_hbox_buttons);

    resize(450, 245);

    setLayout(m_main_layout);

    connect(m_leave, SIGNAL(clicked()), qApp, SLOT(quit()));
    connect(m_crypt, SIGNAL(clicked()), this, SLOT(generation_crypted_text()));
}

void mainWindow::generation_crypted_text()
{
    //generate_window generate_window;
    QString text_crypted_convert;
    std::string text_to_crypt = m_text_to_crypt->toPlainText().toLower().toUtf8().constData();
    std::string text_crypted = text_to_crypt;
    int i = 0;

    while (text_to_crypt[i] != '\0') {
        if (text_to_crypt[i] >= 97 && text_to_crypt[i] <= 122)
            text_crypted[i] = ((text_to_crypt[i] - 97) * 5 + 17) % 26 + 97;
        else
            text_crypted[i] = text_to_crypt[i];
        i++;
    }

    text_crypted_convert = QString::fromStdString(text_crypted);

    m_generate_window = new generate_window(text_crypted_convert);
    m_generate_window->exec();
}
