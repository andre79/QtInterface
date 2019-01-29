#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "uidialog.h"

#include <QDesktopWidget>
#include <QFileDialog>
#include <QCoreApplication>
#include <QHeaderView>
#include <QMessageBox>
#include <QTableWidgetItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbrir_triggered()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.setNameFilter(tr("Images (*.json *.SIGA *.siga)"));
    dialog.exec();
}

void MainWindow::on_actionFerramenta_de_Arraste_triggered()
{

}

void MainWindow::on_actionFechar_triggered()
{

}

void MainWindow::on_actionsalvar_triggered()
{

}

void MainWindow::on_actionSalvar_Como_triggered()
{

}

void MainWindow::on_actionSalvar_Como_JSON_triggered()
{

}

void MainWindow::on_actionPropriedades_do_Projeto_triggered()
{

}

void MainWindow::on_actionOn_triggered()
{

}

void MainWindow::on_actionsair_triggered()
{

}

void MainWindow::on_actionOff_triggered()
{

}

void MainWindow::on_actionDiario_triggered()
{

}

void MainWindow::on_actionMensal_triggered()
{

}

void MainWindow::on_actionAnual_triggered()
{

}

void MainWindow::on_actionPadr_o_triggered()
{

}

void MainWindow::on_pushButton_2_clicked()
{
   uiDialog uiPersolGrid(this);
   uiPersolGrid.setWindowTitle("Grid Test");
   uiPersolGrid.exec();
}

void MainWindow::on_calendarWidget_activated(const QDate &date)
{
}

void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
}

void MainWindow::on_calendarWidget_currentPageChanged(int year, int month)
{
}

void MainWindow::on_calendarWidget_selectionChanged()
{
}
