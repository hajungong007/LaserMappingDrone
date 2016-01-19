// python wrapper for vtkBiomTableReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkBiomTableReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkBiomTableReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkBiomTableReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkTableReaderNew
extern "C" { PyObject *PyVTKClass_vtkTableReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableReaderNew
#endif

static const char **PyvtkBiomTableReader_Doc();


static PyObject *
PyvtkBiomTableReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiomTableReader *op = static_cast<vtkBiomTableReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkBiomTableReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiomTableReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiomTableReader *op = static_cast<vtkBiomTableReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBiomTableReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiomTableReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiomTableReader *op = static_cast<vtkBiomTableReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkBiomTableReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBiomTableReader::NewInstance());

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
PyvtkBiomTableReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkBiomTableReader *tempr = vtkBiomTableReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBiomTableReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiomTableReader *op = static_cast<vtkBiomTableReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkBiomTableReader::GetOutput());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBiomTableReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiomTableReader *op = static_cast<vtkBiomTableReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkBiomTableReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBiomTableReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkBiomTableReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkBiomTableReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkBiomTableReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiomTableReader *op = static_cast<vtkBiomTableReader *>(vp);

  vtkTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkBiomTableReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBiomTableReader_Methods[] = {
  {(char*)"GetClassName", PyvtkBiomTableReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBiomTableReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBiomTableReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkBiomTableReader\nC++: vtkBiomTableReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBiomTableReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBiomTableReader\nC++: vtkBiomTableReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkBiomTableReader_GetOutput, METH_VARARGS,
   (char*)"V.GetOutput() -> vtkTable\nC++: vtkTable *GetOutput()\nV.GetOutput(int) -> vtkTable\nC++: vtkTable *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {(char*)"SetOutput", PyvtkBiomTableReader_SetOutput, METH_VARARGS,
   (char*)"V.SetOutput(vtkTable)\nC++: void SetOutput(vtkTable *output)\n\nGet the output of this reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBiomTableReader_StaticNew()
{
  return vtkBiomTableReader::New();
}

PyObject *PyVTKClass_vtkBiomTableReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBiomTableReader_StaticNew,
    PyvtkBiomTableReader_Methods,
    "vtkBiomTableReader", modulename,
    NULL, NULL,
    PyvtkBiomTableReader_Doc(),
    PyVTKClass_vtkTableReaderNew(modulename));
  return cls;
}

const char **PyvtkBiomTableReader_Doc()
{
  static const char *docstring[] = {
    "vtkBiomTableReader - read vtkTable from a .biom input file\n\n",
    "Superclass: vtkTableReader\n\n",
    "vtkBiomTableReader is a source object that reads ASCII biom data\nfiles. The output of this reader is a single vtkTable data object.\n\nSee Also:\n\nvtkTable vtkTableReader vtkDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBiomTableReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBiomTableReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBiomTableReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

