#ifndef UIDIALOG_H
#define UIDIALOG_H

#include <QDialog>
#include <QTableWidgetItem>

namespace Ui {
class uiDialog;
}

class uiDialog : public QDialog
{
    Q_OBJECT

public:
    explicit uiDialog(QWidget *parent = nullptr);
    ~uiDialog();

private slots:
    void on_tableView_activated(const QModelIndex &index);
    void on_tableView_clicked(const QModelIndex &index);
    void on_tableView_doubleClicked(const QModelIndex &index);
    void on_tableView_entered(const QModelIndex &index);
    void on_tableView_iconSizeChanged(const QSize &size);
    void on_tableView_pressed(const QModelIndex &index);
    void on_tableView_viewportEntered();

    //All EVENTS Activated Table
    /*
    void cellActivated(int row, int column);
    void cellChanged(int row, int column);
    void cellClicked(int row, int column);
    void cellDoubleClicked(int row, int column);
    void cellEntered(int row, int column);
    void cellPressed(int row, int column);
    void currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);
    void currentItemChanged(QTableWidgetItem *current, QTableWidgetItem *previous);
    void itemActivated(QTableWidgetItem *item);
    void itemChanged(QTableWidgetItem *item);
    void itemClicked(QTableWidgetItem *item);
    void itemDoubleClicked(QTableWidgetItem *item);
    void itemEntered(QTableWidgetItem *item);
    void itemPressed(QTableWidgetItem *item);
    void itemSelectionChanged();
    */

    void loadTable();

private:
    Ui::uiDialog *ui;
};

#endif // UIDIALOG_H
