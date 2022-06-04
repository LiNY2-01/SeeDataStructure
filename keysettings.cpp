#include "keysettings.h"
#include <QtCore/QList>

KeySettings::KeySettings () {
}

KeySettings::KeySettings (const KeySettings& other) {

    *this = other;
}

KeySettings::~KeySettings () {
}

KeySettings& KeySettings::operator= (const KeySettings& rhs) {

    _keys = rhs._keys;

    return *this;
}

QStringList KeySettings::keys () const {

    QList<QString> keylist = _keys.keys();

    QStringList keys;

    for (int i=0; i<keylist.count(); i++) {
        keys.push_back(keylist[i]);
    }

    return keys;
}

bool KeySettings::has (const QString& action) const {

    return _keys.contains(action);
}

KeySetting KeySettings::get (const QString& action) const {

    return _keys[action];
}

void KeySettings::add (const QString& action, const KeySetting& setting) {

    _keys[action] = setting;
}

int KeySettings::count () const {

    return _keys.size();
}

KeySettings KeySettings::populate () {

    KeySettings keySettings;

    keySettings.add("Run",              KeySetting("Run",              QKeySequence::fromString("F1"),           "Run the program again. Do not break in main()."));
    keySettings.add("Start",            KeySetting("Start",            QKeySequence::fromString("F2"),           "Run the program again. Break in main()."));
    keySettings.add("Continue",         KeySetting("Continue",         QKeySequence::fromString("F8"),           "Continue execution of the program."));
    keySettings.add("Next",             KeySetting("Next",             QKeySequence::fromString("F5"),           "Execute the next line. Step over functions."));
    keySettings.add("Step",             KeySetting("Step",             QKeySequence::fromString("F6"),           "Execute the next line. Step into functions."));
    keySettings.add("Finish",           KeySetting("Finish",           QKeySequence::fromString("F7"),           "Finish the current function."));
    keySettings.add("Debug",            KeySetting("Debug",            QKeySequence::fromString("Alt+D"),        "Open the debug dialog."));
    keySettings.add("Arguments",        KeySetting("Arguments",        QKeySequence::fromString("Alt+A"),        "Open the argument dialog."));
    keySettings.add("Quit",             KeySetting("Quit",             QKeySequence::fromString("Alt+Q"),        "Quit ."));
    keySettings.add("SearchText",       KeySetting("SearchText",       QKeySequence::fromString("Ctrl+F"),       "Seach for text in the code editor."));
    keySettings.add("SearchTextNext",   KeySetting("SearchTextNext",   QKeySequence::fromString("Ctrl+G"),       "Seach for next text in the code editor."));
    keySettings.add("SearchTextPrev",   KeySetting("SearchTextPrev",   QKeySequence::fromString("Ctrl+Shift+G"), "Seach for previous text in the code editor."));
    keySettings.add("AlternateDir",     KeySetting("AlternateDir",     QKeySequence::fromString("Ctrl+O"),       "Look for source file in an alternate directory."));

    return keySettings;
}

