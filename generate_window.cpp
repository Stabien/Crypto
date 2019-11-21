#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QFormLayout>
#include <QGroupBox>
#include <QLineEdit>
#include <QFileDialog>
#include <QComboBox>
#include <QLabel>
#include <QTextEdit>
#include <fstream>
#include <string>
#include <iostream>
#include "generate_window.h"
#include "main_window.h"

generate_window::generate_window(QString text_crypted)
{
    m_main_layout = new QFormLayout;
    m_text_crypted = new QTextEdit(text_crypted);
    m_import_in_file = new QPushButton("Import in file");

    m_main_layout->addRow(m_text_crypted);
    m_main_layout->addRow(m_import_in_file);

    setLayout(m_main_layout);
}

generate_window::~generate_window()
{

}
