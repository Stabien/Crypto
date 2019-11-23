#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

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

class mainWindow : public QWidget
{
    Q_OBJECT

    public:
    mainWindow();

    public slots:
    void generation_crypted_text();
    void generation_uncrypted_text();

    private:
    QFormLayout *m_main_layout;
    QTextEdit *m_text_to_change;
    QHBoxLayout *m_hbox_buttons;
    QPushButton *m_crypt, *m_uncrypt, *m_leave;
    generate_window *m_generate_window;
};

#endif
