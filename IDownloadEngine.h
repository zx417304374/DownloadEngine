#ifndef IDOWNLOADENGINE_H
#define IDOWNLOADENGINE_H

#include <QObject>

class IDownloadEngine : public QObject
{
    Q_OBJECT
signals:
    void started();
    void errorOccur(const QString& aMessage);
    void finished();
    void progressUpdated(int aMin, int aMax, int aCurrent);
    void speedUpdated(int aByteCount);

public:
    IDownloadEngine(QObject *parent = 0);
    virtual ~IDownloadEngine() = 0;

public slots:
    virtual void start() = 0;
    virtual void pause() = 0;
    virtual void cancel() = 0;
};

#endif // IDOWNLOADENGINE_H
