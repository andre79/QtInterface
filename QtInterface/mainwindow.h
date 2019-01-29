#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAbrir_triggered();

    void on_actionFerramenta_de_Arraste_triggered();

    void on_actionFechar_triggered();

    void on_actionsalvar_triggered();

    void on_actionSalvar_Como_triggered();

    void on_actionSalvar_Como_JSON_triggered();

    void on_actionPropriedades_do_Projeto_triggered();

    void on_actionOn_triggered();

    void on_actionsair_triggered();

    void on_actionOff_triggered();

    void on_actionDiario_triggered();

    void on_actionMensal_triggered();

    void on_actionAnual_triggered();

    void on_actionPadr_o_triggered();

    void on_pushButton_2_clicked();

    void on_calendarWidget_activated(const QDate &date);

    void on_calendarWidget_clicked(const QDate &date);

    void on_calendarWidget_currentPageChanged(int year, int month);

    void on_calendarWidget_selectionChanged();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
