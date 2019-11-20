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

mainWindow::mainWindow() : QWidget()
{
    m_main_layout = new QFormLayout;
    m_text_to_crypt = new QTextEdit;
    m_hbox_buttons = new QHBoxLayout;
    m_generate = new QPushButton("Generate");
    m_leave = new QPushButton("Leave");

    m_hbox_buttons->setAlignment(Qt::AlignRight);
    m_hbox_buttons->addWidget(m_generate);
    m_hbox_buttons->addWidget(m_leave);
    m_hbox_buttons->setContentsMargins(0, 20, 0, 0);

    m_main_layout->addRow(m_text_to_crypt);
    m_main_layout->addRow(m_hbox_buttons);

    setLayout(m_main_layout);

    connect(m_leave, SIGNAL(clicked()), qApp, SLOT(quit()));
}

std::string mainWindow::generation_crypted_text()
{

}
