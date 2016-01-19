// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCompositeDataReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCompositeDataWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataObjectReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataObjectWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataSetReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataSetWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDataWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGenericDataObjectReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGenericDataObjectWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGraphReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkGraphWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPolyDataReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPolyDataWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRectilinearGridReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRectilinearGridWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSimplePointsReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkSimplePointsWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredGridReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredGridWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredPointsReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkStructuredPointsWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTableReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTableWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTreeReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTreeWriter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkUnstructuredGridReader(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkUnstructuredGridWriter(PyObject *, const char *); }

static PyMethodDef PyvtkIOLegacyPython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkIOLegacyPython(const char *modulename); }

void real_initvtkIOLegacyPython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkIOLegacyPython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkIOLegacyPython");
    }
  PyVTKAddFile_vtkCompositeDataReader(d, modulename);
  PyVTKAddFile_vtkCompositeDataWriter(d, modulename);
  PyVTKAddFile_vtkDataObjectReader(d, modulename);
  PyVTKAddFile_vtkDataObjectWriter(d, modulename);
  PyVTKAddFile_vtkDataReader(d, modulename);
  PyVTKAddFile_vtkDataSetReader(d, modulename);
  PyVTKAddFile_vtkDataSetWriter(d, modulename);
  PyVTKAddFile_vtkDataWriter(d, modulename);
  PyVTKAddFile_vtkGenericDataObjectReader(d, modulename);
  PyVTKAddFile_vtkGenericDataObjectWriter(d, modulename);
  PyVTKAddFile_vtkGraphReader(d, modulename);
  PyVTKAddFile_vtkGraphWriter(d, modulename);
  PyVTKAddFile_vtkPolyDataReader(d, modulename);
  PyVTKAddFile_vtkPolyDataWriter(d, modulename);
  PyVTKAddFile_vtkRectilinearGridReader(d, modulename);
  PyVTKAddFile_vtkRectilinearGridWriter(d, modulename);
  PyVTKAddFile_vtkSimplePointsReader(d, modulename);
  PyVTKAddFile_vtkSimplePointsWriter(d, modulename);
  PyVTKAddFile_vtkStructuredGridReader(d, modulename);
  PyVTKAddFile_vtkStructuredGridWriter(d, modulename);
  PyVTKAddFile_vtkStructuredPointsReader(d, modulename);
  PyVTKAddFile_vtkStructuredPointsWriter(d, modulename);
  PyVTKAddFile_vtkTableReader(d, modulename);
  PyVTKAddFile_vtkTableWriter(d, modulename);
  PyVTKAddFile_vtkTreeReader(d, modulename);
  PyVTKAddFile_vtkTreeWriter(d, modulename);
  PyVTKAddFile_vtkUnstructuredGridReader(d, modulename);
  PyVTKAddFile_vtkUnstructuredGridWriter(d, modulename);
}

