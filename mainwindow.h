/****************************************************************************

** Copyrights : Mirafra Technologies Ltd (2023)
** This code is the sole proprietary of Mirafra Technologies Limited
** Unauthorised distribution, sale, copy will invite strict penal actions
****************************************************************************/

#include <QMainWindow>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QFileDialog>
#include <QTimer>
#include "player.h"
#include <libudev.h>
#include <QCloseEvent>
#include "ui_mainwindow.h"



QT_BEGIN_NAMESPACE



namespace Ui {
class MainWindow: public Ui_MainWindow {};
} // namespace Ui






class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Player *player = new Player();
    void print_device(struct udev_device* dev);
    void process_device(struct udev_device* dev);
    void enumerate_devices(struct udev* udev);
    void monitor_devices(struct udev* udev);



private slots:
    void on_pushButton_pressed();

    void on_pushButton_2_pressed();

    void on_pushButton_11_pressed();


    void on_pushButton_8_clicked();

private slots:

    void findall();
    void find();
    void findVideo();
    void animateFindClick();
    void openFileOfItem(int row, int column);
    void contextMenu(const QPoint &pos);


private:
    QStringList findFiles(const QStringList &files, const QString &text);
    void showFiles(const QStringList &paths);
    void createFilesTable();
    void openFile(const QString &fileName);

public:
    Ui::MainWindow *ui;

protected:
    void closeEvent(QCloseEvent *event) override {

        if (event->spontaneous()) {
            //qDebug("The close button was clicked of main window");
            exit(0);
            // do event->ignore();
            // or QWidget::closeEvent(event);
        } else {
            QWidget::closeEvent(event);
        }
    }


};

