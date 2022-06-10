#include "SeerTildeLogWidget.h"
#include "util.h"
#include <QtWidgets/QScrollBar>

SeerTildeLogWidget::SeerTildeLogWidget (QWidget* parent) : LogWidget(parent) {
}

SeerTildeLogWidget::~SeerTildeLogWidget () {
}

void SeerTildeLogWidget::processText (const QString& text) {

    QString str = text.mid(1); // Remove leading "~"

    if (str.front() == '"') { // Remove leading """
        str = str.mid(1);
    }

    if (str.back() == '"') { // Remove trailing """
        str.chop(1);
    }

    str = SDS::filterEscapes(str);

    if (str.back() == '\n') { // Remove trailing "\n"
        str.chop(1);
    }

//    textEdit->append(str);
    ui->textEdit->append(str);
}

