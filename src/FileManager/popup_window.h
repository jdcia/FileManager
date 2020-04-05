#ifndef POPUP_WINDOW_H
#define POPUP_WINDOW_H

#include <QObject>
#include <QDialog>

class popup_window : public QWidget
{
    Q_OBJECT
public:
    explicit popup_window(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // POPUP_WINDOW_H
