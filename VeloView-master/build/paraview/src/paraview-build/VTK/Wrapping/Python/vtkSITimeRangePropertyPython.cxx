// python wrapper for vtkSITimeRangeProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkSITimeRangeProperty.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkSITimeRangeProperty(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkSITimeRangePropertyNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkSIPropertyNew
extern "C" { PyObject *PyVTKClass_vtkSIPropertyNew(const char *); }
#define DECLARED_PyVTKClass_vtkSIPropertyNew
#endif

static const char **PyvtkSITimeRangeProperty_Doc();


static PyObject *
PyvtkSITimeRangeProperty_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSITimeRangeProperty *op = static_cast<vtkSITimeRangeProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkSITimeRangeProperty::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSITimeRangeProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSITimeRangeProperty *op = static_cast<vtkSITimeRangeProperty *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSITimeRangeProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSITimeRangeProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSITimeRangeProperty *op = static_cast<vtkSITimeRangeProperty *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkSITimeRangeProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSITimeRangeProperty::NewInstance());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
        {
        PyVTKObject_GetObject(result)->UnRegister(0);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
        }
      }
    }

  return result;
}


static PyObject *
PyvtkSITimeRangeProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkSITimeRangeProperty *tempr = vtkSITimeRangeProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSITimeRangeProperty_Methods[] = {
  {(char*)"GetClassName", PyvtkSITimeRangeProperty_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSITimeRangeProperty_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSITimeRangeProperty_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkSITimeRangeProperty\nC++: vtkSITimeRangeProperty *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSITimeRangeProperty_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSITimeRangeProperty\nC++: vtkSITimeRangeProperty *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSITimeRangeProperty_StaticNew()
{
  return vtkSITimeRangeProperty::New();
}

PyObject *PyVTKClass_vtkSITimeRangePropertyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSITimeRangeProperty_StaticNew,
    PyvtkSITimeRangeProperty_Methods,
    "vtkSITimeRangeProperty", modulename,
    NULL, NULL,
    PyvtkSITimeRangeProperty_Doc(),
    PyVTKClass_vtkSIPropertyNew(modulename));
  return cls;
}

const char **PyvtkSITimeRangeProperty_Doc()
{
  static const char *docstring[] = {
    "vtkSITimeRangeProperty\n\n",
    "Superclass: vtkSIProperty\n\n",
    "SIProperty that deals with TimeRange on Algorithm object type\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSITimeRangeProperty(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSITimeRangePropertyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSITimeRangeProperty", o) != 0)
    {
    Py_DECREF(o);
    }

}

