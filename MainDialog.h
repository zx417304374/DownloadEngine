#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>
#include "IDownloadEngine.h"

namespace Ui {
    class MainDialog;
}

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MainDialog(QWidget* parent = 0);
    ~MainDialog();

private slots:
    //for ui
    void on_mStartButton__clicked();

    //for other
    void onProgressUpdated(int aMin, int aMax, int aCurrent);

private:
    Ui::MainDialog* mUi_;
    IDownloadEngine* mEngine_;
};

#endif // MAINDIALOG_H
