#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <wiringPi.h>
#include <QThread>
#include <QDebug>
#include <mcp3004.h>
#include <wiringPiSPI.h>
#include <softPwm.h>
#include <Iir.h>
#include <QtSql>
#include <QSqlDatabase>
#include <math.h>
#include <sr595.h>
#include <QDateTime>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void addPoint(double x, double y);
    void clearData();
    void plot();
    void plot_end();
    void plot_two();
    void plot_kinetic();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    int readadc(int);

    void makePlot();
    void on_pushButton_19_clicked();

    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_toolButton_3_clicked();

    void on_toolButton_4_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_46_clicked();



    void on_pushButton_47_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_49_clicked();

    void on_pushButton_57_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_62_clicked();

    void on_pushButton_63_clicked();

    void on_pushButton_64_clicked();

    void on_pushButton_97_clicked();

    void on_pushButton_101_clicked();

    void on_pushButton_103_clicked();

    void on_pushButton_105_clicked();

    void on_pushButton_106_clicked();

    void on_pushButton_108_clicked();

    void on_pushButton_99_clicked();

    void on_pushButton_102_clicked();

    void on_pushButton_107_clicked();

    void on_pushButton_98_clicked();

    void on_pushButton_100_clicked();

    void on_pushButton_104_clicked();

    int get_reading();

private:
    Ui::MainWindow *ui;

    QVector<double> qv_x, qv_y;
};

#endif // MAINWINDOW_H
