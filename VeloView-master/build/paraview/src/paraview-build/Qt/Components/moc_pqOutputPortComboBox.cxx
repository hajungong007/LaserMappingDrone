/****************************************************************************
** Meta object code from reading C++ file 'pqOutputPortComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../paraview/Qt/Components/pqOutputPortComboBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pqOutputPortComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_pqOutputPortComboBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   57,   21,   21, 0x0a,
      97,   92,   21,   21, 0x08,
     136,   92,   21,   21, 0x08,
     169,  163,   21,   21, 0x08,
     203,  196,   21,   21, 0x08,
     232,  196,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_pqOutputPortComboBox[] = {
    "pqOutputPortComboBox\0\0"
    "currentIndexChanged(pqOutputPort*)\0"
    "port\0setCurrentPort(pqOutputPort*)\0"
    "item\0nameChanged(pqServerManagerModelItem*)\0"
    "portChanged(pqOutputPort*)\0index\0"
    "onCurrentIndexChanged(int)\0source\0"
    "addSource(pqPipelineSource*)\0"
    "removeSource(pqPipelineSource*)\0"
};

void pqOutputPortComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        pqOutputPortComboBox *_t = static_cast<pqOutputPortComboBox *>(_o);
        switch (_id) {
        case 0: _t->currentIndexChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 1: _t->setCurrentPort((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 2: _t->nameChanged((*reinterpret_cast< pqServerManagerModelItem*(*)>(_a[1]))); break;
        case 3: _t->portChanged((*reinterpret_cast< pqOutputPort*(*)>(_a[1]))); break;
        case 4: _t->onCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->addSource((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        case 6: _t->removeSource((*reinterpret_cast< pqPipelineSource*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData pqOutputPortComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject pqOutputPortComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_pqOutputPortComboBox,
      qt_meta_data_pqOutputPortComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &pqOutputPortComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *pqOutputPortComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *pqOutputPortComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_pqOutputPortComboBox))
        return static_cast<void*>(const_cast< pqOutputPortComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int pqOutputPortComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void pqOutputPortComboBox::currentIndexChanged(pqOutputPort * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
