/****************************************************************************
** Meta object code from reading C++ file 'pqTreeWidgetItemObject.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Widgets/pqTreeWidgetItemObject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqTreeWidgetItemObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqTreeWidgetItemObject[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      50,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   23,   61,   23, 0x0a,
      80,   78,   23,   23, 0x0a,

 // properties: name, type, flags
      97,   61, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_pqTreeWidgetItemObject[] = {
    "pqTreeWidgetItemObject\0\0"
    "checkedStateChanged(bool)\0modified()\0"
    "bool\0isChecked()\0v\0setChecked(bool)\0"
    "checked\0"
};

void pqTreeWidgetItemObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqTreeWidgetItemObject *_t = static_cast<pqTreeWidgetItemObject *>(_o);
        switch (_id) {
        case 0: _t->checkedStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->modified(); break;
        case 2: { bool _r = _t->isChecked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqTreeWidgetItemObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqTreeWidgetItemObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pqTreeWidgetItemObject,
      qt_meta_data_pqTreeWidgetItemObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqTreeWidgetItemObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqTreeWidgetItemObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqTreeWidgetItemObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqTreeWidgetItemObject))
        return static_cast<void*>(const_cast< pqTreeWidgetItemObject*>(this));
    if (!strcmp(_clname, "QTreeWidgetItem"))
        return static_cast< QTreeWidgetItem*>(const_cast< pqTreeWidgetItemObject*>(this));
    return QObject::qt_metacast(_clname);
}

int pqTreeWidgetItemObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isChecked(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setChecked(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void pqTreeWidgetItemObject::checkedStateChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void pqTreeWidgetItemObject::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
