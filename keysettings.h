#ifndef KEYSETTINGS_H
#define KEYSETTINGS_H
#include <QtGui/QKeySequence>
#include <QtCore/QMap>
#include <QtCore/QStringList>
#include <QtCore/QString>

struct KeySetting {

    KeySetting(QString action, QKeySequence sequence, QString description) : _action(action), _sequence(sequence), _description(description) {}
    KeySetting() {};

    QString         _action;
    QKeySequence    _sequence;
    QString         _description;
};


class KeySettings {

    public:
        KeySettings ();
        KeySettings (const KeySettings& other);
       ~KeySettings ();

        KeySettings& operator= (const KeySettings& rhs);

        QStringList                             keys                () const;
        bool                                    has                 (const QString& action) const;
        KeySetting                              get                 (const QString& action) const;
        void                                    add                 (const QString& action, const KeySetting& setting);
        int                                     count               () const;

        static KeySettings                  populate            ();

    private:
        QMap<QString, KeySetting>          _keys;
};


#endif // KEYSETTINGS_H
