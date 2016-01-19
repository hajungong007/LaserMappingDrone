// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"

#include "vtkSystemIncludes.h"
#include <string.h>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCollectGraph(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCollectPolyData(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCollectTable(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkCutMaterial(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkDuplicatePolyData(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractCTHPart(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractPolyDataPiece(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractUnstructuredGridPiece(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkExtractUserDefinedPiece(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPCellDataToPointData(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPExtractArraysOverTime(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPKdTree(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPLinearExtrusionFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPMaskPoints(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPOutlineCornerFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPOutlineFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPPolyDataNormals(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPProbeFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPProjectSphereFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPReflectionFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPResampleFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPSphereSource(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPYoungsMaterialInterface(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPassThroughFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPieceRequestFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPieceScalars(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkPipelineSize(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkProcessIdScalars(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkRectilinearGridOutlineFilter(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTransmitPolyDataPiece(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTransmitStructuredDataPiece(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTransmitRectilinearGridPiece(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTransmitStructuredGridPiece(PyObject *, const char *); }
extern  "C" {VTK_ABI_EXPORT PyObject *PyVTKAddFile_vtkTransmitUnstructuredGridPiece(PyObject *, const char *); }

static PyMethodDef PyvtkFiltersParallelPython_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

extern  "C" {VTK_ABI_EXPORT void real_initvtkFiltersParallelPython(const char *modulename); }

void real_initvtkFiltersParallelPython(const char *modulename)
{
  PyObject *m, *d;

  m = Py_InitModule((char*)modulename, PyvtkFiltersParallelPython_ClassMethods);
  d = PyModule_GetDict(m);
  if (!d)
    {
    Py_FatalError((char*)"can't get dictionary for module vtkFiltersParallelPython");
    }
  PyVTKAddFile_vtkCollectGraph(d, modulename);
  PyVTKAddFile_vtkCollectPolyData(d, modulename);
  PyVTKAddFile_vtkCollectTable(d, modulename);
  PyVTKAddFile_vtkCutMaterial(d, modulename);
  PyVTKAddFile_vtkDuplicatePolyData(d, modulename);
  PyVTKAddFile_vtkExtractCTHPart(d, modulename);
  PyVTKAddFile_vtkExtractPolyDataPiece(d, modulename);
  PyVTKAddFile_vtkExtractUnstructuredGridPiece(d, modulename);
  PyVTKAddFile_vtkExtractUserDefinedPiece(d, modulename);
  PyVTKAddFile_vtkPCellDataToPointData(d, modulename);
  PyVTKAddFile_vtkPExtractArraysOverTime(d, modulename);
  PyVTKAddFile_vtkPKdTree(d, modulename);
  PyVTKAddFile_vtkPLinearExtrusionFilter(d, modulename);
  PyVTKAddFile_vtkPMaskPoints(d, modulename);
  PyVTKAddFile_vtkPOutlineCornerFilter(d, modulename);
  PyVTKAddFile_vtkPOutlineFilter(d, modulename);
  PyVTKAddFile_vtkPPolyDataNormals(d, modulename);
  PyVTKAddFile_vtkPProbeFilter(d, modulename);
  PyVTKAddFile_vtkPProjectSphereFilter(d, modulename);
  PyVTKAddFile_vtkPReflectionFilter(d, modulename);
  PyVTKAddFile_vtkPResampleFilter(d, modulename);
  PyVTKAddFile_vtkPSphereSource(d, modulename);
  PyVTKAddFile_vtkPYoungsMaterialInterface(d, modulename);
  PyVTKAddFile_vtkPassThroughFilter(d, modulename);
  PyVTKAddFile_vtkPieceRequestFilter(d, modulename);
  PyVTKAddFile_vtkPieceScalars(d, modulename);
  PyVTKAddFile_vtkPipelineSize(d, modulename);
  PyVTKAddFile_vtkProcessIdScalars(d, modulename);
  PyVTKAddFile_vtkRectilinearGridOutlineFilter(d, modulename);
  PyVTKAddFile_vtkTransmitPolyDataPiece(d, modulename);
  PyVTKAddFile_vtkTransmitStructuredDataPiece(d, modulename);
  PyVTKAddFile_vtkTransmitRectilinearGridPiece(d, modulename);
  PyVTKAddFile_vtkTransmitStructuredGridPiece(d, modulename);
  PyVTKAddFile_vtkTransmitUnstructuredGridPiece(d, modulename);
}

