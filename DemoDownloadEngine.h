#ifndef DEMODOWNLOADENGINE_H
#define DEMODOWNLOADENGINE_H

#include <QTimer>
#include "IDownloadEngine.h"


class DemoDownloadEngine : public IDownloadEngine
{
    Q_OBJECT
public:
    explicit DemoDownloadEngine(QObject *parent = 0);

public slots:
    void start();
    void pause();
    void cancel();
private slots:
    void onTimeOut();

private:
    QTimer mTimer_;
};

#endif // DEMODOWNLOADENGINE_H
