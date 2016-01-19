// python wrapper for vtkEnSight6BinaryReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkEnSight6BinaryReader.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkEnSight6BinaryReader(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkEnSight6BinaryReaderNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkEnSightReaderNew
#endif

static const char **PyvtkEnSight6BinaryReader_Doc();


static PyObject *
PyvtkEnSight6BinaryReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSight6BinaryReader *op = static_cast<vtkEnSight6BinaryReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkEnSight6BinaryReader::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSight6BinaryReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSight6BinaryReader *op = static_cast<vtkEnSight6BinaryReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSight6BinaryReader::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSight6BinaryReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSight6BinaryReader *op = static_cast<vtkEnSight6BinaryReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkEnSight6BinaryReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSight6BinaryReader::NewInstance());

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
PyvtkEnSight6BinaryReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkEnSight6BinaryReader *tempr = vtkEnSight6BinaryReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEnSight6BinaryReader_Methods[] = {
  {(char*)"GetClassName", PyvtkEnSight6BinaryReader_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEnSight6BinaryReader_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEnSight6BinaryReader_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkEnSight6BinaryReader\nC++: vtkEnSight6BinaryReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEnSight6BinaryReader_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEnSight6BinaryReader\nC++: vtkEnSight6BinaryReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEnSight6BinaryReader_StaticNew()
{
  return vtkEnSight6BinaryReader::New();
}

PyObject *PyVTKClass_vtkEnSight6BinaryReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEnSight6BinaryReader_StaticNew,
    PyvtkEnSight6BinaryReader_Methods,
    "vtkEnSight6BinaryReader", modulename,
    NULL, NULL,
    PyvtkEnSight6BinaryReader_Doc(),
    PyVTKClass_vtkEnSightReaderNew(modulename));
  return cls;
}

const char **PyvtkEnSight6BinaryReader_Doc()
{
  static const char *docstring[] = {
    "vtkEnSight6BinaryReader - class to read binary EnSight6 files\n\n",
    "Superclass: vtkEnSightReader\n\n",
    "vtkEnSight6BinaryReader is a class to read binary EnSight6 files into\nvtk. Because the different parts of the EnSight data can be of\nvarious data types, this reader produces multiple outputs, one per\npart in the input file. All variable information is being stored in\nfield data.  The descriptions listed in the case file are used as the\narray names in the field data. For complex vector variables, t",
    "he\ndescription is appended with _r (for the array of real values) and _i\n(for the array if imaginary values).  Complex scalar variables are\nstored as a single array with 2 components, real and imaginary,\nlisted in that order.\n\nCaveats:\n\nYou must manually call Update on this reader and then connect the\nrest of the pipeline because (due to the nature of the file format)\nit is not possible to know ah",
    "ead of time how many outputs you will\nhave or what types they will be. This reader can only handle static\nEnSight datasets (both static geometry and variables).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEnSight6BinaryReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEnSight6BinaryReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEnSight6BinaryReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

