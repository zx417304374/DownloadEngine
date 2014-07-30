#include "DemoDownloadEngine.h"

DemoDownloadEngine::DemoDownloadEngine(QObject *parent) :
    IDownloadEngine(parent),
    mTimer_()
{
    connect(&mTimer_, SIGNAL(timeout()), this, SLOT(onTimeOut()));
}

void DemoDownloadEngine::start()
{
    mTimer_.start(1000);
}

void DemoDownloadEngine::pause()
{
    mTimer_.stop();
}

void DemoDownloadEngine::cancel()
{
    mTimer_.stop();
}

void DemoDownloadEngine::onTimeOut()
{
    static int i = 0;
    emit speedUpdated(1000);
    emit progressUpdated(0, 100, i);
    ++i;
    if (i > 100)
    {
        mTimer_.stop();
        emit finished();
    }
}
