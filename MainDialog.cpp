#include "DemoDownloadEngine.h"
#include "MainDialog.h"
#include "ui_MainDialog.h"

MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    mUi_(new Ui::MainDialog),
    mEngine_(new DemoDownloadEngine(this))
{
    mUi_->setupUi(this);

    connect(mEngine_,   SIGNAL(progressUpdated(int,int,int)),
            this,       SLOT(onProgressUpdated(int,int,int)));
}

MainDialog::~MainDialog()
{
    delete mUi_;
}

void MainDialog::on_mStartButton__clicked()
{
    mEngine_->start();
}

void MainDialog::onProgressUpdated(int aMin, int aMax, int aCurrent)
{
    mUi_->mProgressBar_->setRange(aMin, aMax);
    mUi_->mProgressBar_->setValue(aCurrent);
}
