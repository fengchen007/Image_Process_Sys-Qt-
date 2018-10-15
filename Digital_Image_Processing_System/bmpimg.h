#ifndef BMPIMG_H
#define BMPIMG_H

#include <QtCore/QString>
#include <QFile>
#include <QMessageBox>
#include <QDataStream>

#include <bmpfile.h>

class BMPIMG
{
private:
    BITMAPFILEHEADER fileHeader;
    BITMAPINFOHEADER infoHeader;
    RGBQUAD *rgbQuad;
    IMAGEDATA *imgData;

public:
    BMPIMG();//新建BMP文件
    BMPIMG(QString filename);//打开已有BMP文件
    bool isEmpty();
    bool getImage(QString filename);
    void setImage(BMPIMG image);
    BITMAPFILEHEADER getFileHeader();
    BITMAPINFOHEADER getInfoHeader();
};

#endif // BMPIMG_H
