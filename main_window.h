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

class mainWindow : public QWidget
{
    Q_OBJECT

    public:
    mainWindow();

    public slots:
    std::string generation_crypted_text();

    private:
    QFormLayout *m_main_layout;
    QTextEdit *m_text_to_crypt;
    QHBoxLayout *m_hbox_buttons;
    QPushButton *m_generate, *m_leave;
};
