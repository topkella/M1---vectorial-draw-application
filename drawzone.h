#ifndef DRAWZONE_H
#define DRAWZONE_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QtGui>
#include <QWidget>
#include "mainwindow.h"

class drawZone : public QGraphicsView
{
public:
    explicit drawZone(QWidget *parent = 0);
    void clearScene();
    void saveScene();
    //-----------------------------------------
//    QVariant item_to_variant(QGraphicsItem* item);
//    QGraphicsItem* item_from_variant(QVariant v);
//    void save_state();
//    void restore_state();

    //---------------------------------------------

protected:
    void mouseMoveEvent(QMouseEvent *ev) override;
    void mousePressEvent(QMouseEvent *ev) override;
    void leaveEvent(QEvent *) override;
    void showcontextmenu();

private :
    QGraphicsScene *scene;
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;
    QGraphicsTextItem *text;
    QGraphicsLineItem *line;
    QGraphicsPathItem *path;
    QGraphicsPixmapItem *pixmap;
    QGraphicsPolygonItem *polygon;
    QGraphicsSimpleTextItem *simpletext;
    QPointF origPoint;
    Tool actualTool;

signals:

public slots:

};

#endif // DRAWZONE_H
