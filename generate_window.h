#ifndef GENERATE_WINDOW_H
#define GENERATE_WINDOW_H

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

class generate_window : public QDialog
{
    Q_OBJECT

    public:
    generate_window(QString text_crypted);
    ~generate_window();

    private:
    QFormLayout *m_main_layout;
    QTextEdit *m_text_crypted;
    QPushButton *m_import_in_file;
};

#endif
