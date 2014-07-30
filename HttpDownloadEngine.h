#ifndef HTTPDOWNLOADENGINE_H
#define HTTPDOWNLOADENGINE_H
#include "IDownloadEngine.h"

class HttpDownloadEngine : public IDownloadEngine
{
    Q_OBJECT
public:
    explicit HttpDownloadEngine(QObject *parent = 0);

signals:

public slots:

};

#endif // HTTPDOWNLOADENGINE_H
