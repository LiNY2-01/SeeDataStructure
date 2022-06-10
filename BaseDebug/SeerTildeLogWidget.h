#pragma once

#include "LogWidget.h"

class SeerTildeLogWidget : public LogWidget {

    Q_OBJECT

    public:
        explicit SeerTildeLogWidget (QWidget* parent = 0);
       ~SeerTildeLogWidget ();

        void                processText                 (const QString& text);
};

