#include "uidialog.h"
#include "ui_uidialog.h"

#include <QTableWidgetItem>

uiDialog::uiDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uiDialog)
{
    ui->setupUi(this);
    loadTable();
}

uiDialog::~uiDialog()
{
    delete ui;
}

void uiDialog::on_tableView_activated(const QModelIndex &index)
{

}

void uiDialog::on_tableView_clicked(const QModelIndex &index)
{

}

void uiDialog::on_tableView_doubleClicked(const QModelIndex &index)
{

}

void uiDialog::on_tableView_entered(const QModelIndex &index)
{

}

void uiDialog::on_tableView_iconSizeChanged(const QSize &size)
{

}

void uiDialog::on_tableView_pressed(const QModelIndex &index)
{

}

void uiDialog::on_tableView_viewportEntered()
{

}

void uiDialog::loadTable()
{
    int numRows = 101;
    int numCols = 4;
    ui->tableWidget->setRowCount(numRows);
    ui->tableWidget->setColumnCount(numCols);

    for (int ridx = 1 ; ridx < numRows ; ridx++ )
    {
        for (int cidx = 0 ; cidx < numCols ; cidx++)
        {
          QTableWidgetItem* item = new QTableWidgetItem();
          item->setText("Row:"+ QString::number(ridx) + " x Col:" + QString::number(cidx) + "");
          ui->tableWidget->setItem(ridx,cidx,item);
        }
    }
}

