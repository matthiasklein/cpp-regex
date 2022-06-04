#include <QRegularExpression>
#include <QDebug>

int main(int argc, char *argv[])
{
    if(argc < 2)
        qFatal("usage: %s [regexp]", argv[0]);

    QTextStream cin(stdin);

    for(;;)
    {
        QString input = cin.readLine();

        QRegularExpression pattern = QRegularExpression(argv[1]);
        QRegularExpressionMatch match = pattern.match(input);
        if(match.hasMatch())
            qInfo() << "MATCH " << match.captured(0) << " from INPUT " << input;
    }

    return 0;
}
