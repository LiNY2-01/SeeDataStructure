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

    keySettings.add("Run",              KeySetting("运行",              QKeySequence::fromString("F1"),           "重新运行。不在main()函数断点。"));
    keySettings.add("Start",            KeySetting("开始",            QKeySequence::fromString("F2"),           "重新运行。在main()函数断点。"));
    keySettings.add("Continue",         KeySetting("继续运行",         QKeySequence::fromString("F8"),           "继续执行程序。"));
    keySettings.add("Next",             KeySetting("步过",             QKeySequence::fromString("F5"),           "执行到下一行。 步过函数。"));
    keySettings.add("Step",             KeySetting("步进",             QKeySequence::fromString("F6"),           "执行到下一行。 步入函数。"));
    keySettings.add("Finish",           KeySetting("步出",           QKeySequence::fromString("F7"),           "步出当前函数。"));
    keySettings.add("Debug",            KeySetting("调试",            QKeySequence::fromString("Alt+D"),        "打开调试设置对话。"));
    keySettings.add("Arguments",        KeySetting("参数",        QKeySequence::fromString("Alt+A"),        "打开参数设置对话。"));
    keySettings.add("Quit",             KeySetting("退出",             QKeySequence::fromString("Alt+Q"),        "退出程序。"));
    keySettings.add("SearchText",       KeySetting("搜索文本",       QKeySequence::fromString("Ctrl+F"),       "在代码编辑器中寻找文本。"));
    keySettings.add("SearchTextNext",   KeySetting("搜索下一个",   QKeySequence::fromString("Ctrl+G"),       "在代码编辑器中寻找后一项。"));
    keySettings.add("SearchTextPrev",   KeySetting("搜索前一个",   QKeySequence::fromString("Ctrl+Shift+G"), "在代码编辑器中寻找前一项。"));
    keySettings.add("AlternateDir",     KeySetting("添加源文件目录",     QKeySequence::fromString("Ctrl+O"),       "在指定目录中，寻找源文件"));

    return keySettings;
}

