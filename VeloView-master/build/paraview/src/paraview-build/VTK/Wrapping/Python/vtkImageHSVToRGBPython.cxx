// python wrapper for vtkImageHSVToRGB
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <vtksys/ios/sstream>
#include "vtkIndent.h"
#include "vtkImageHSVToRGB.h"

#if defined(VTK_BUILD_SHARED_LIBS)
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_IMPORT
#else
# define VTK_PYTHON_EXPORT VTK_ABI_EXPORT
# define VTK_PYTHON_IMPORT VTK_ABI_EXPORT
#endif

extern "C" { VTK_PYTHON_EXPORT void PyVTKAddFile_vtkImageHSVToRGB(PyObject *, const char *); }
extern "C" { VTK_PYTHON_EXPORT PyObject *PyVTKClass_vtkImageHSVToRGBNew(const char *); }

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageHSVToRGB_Doc();


static PyObject *
PyvtkImageHSVToRGB_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSVToRGB *op = static_cast<vtkImageHSVToRGB *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkImageHSVToRGB::GetClassName());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageHSVToRGB_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSVToRGB *op = static_cast<vtkImageHSVToRGB *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageHSVToRGB::IsA(temp0));

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageHSVToRGB_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSVToRGB *op = static_cast<vtkImageHSVToRGB *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    vtkImageHSVToRGB *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageHSVToRGB::NewInstance());

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
PyvtkImageHSVToRGB_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    vtkImageHSVToRGB *tempr = vtkImageHSVToRGB::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageHSVToRGB_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSVToRGB *op = static_cast<vtkImageHSVToRGB *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximum(temp0);
      }
    else
      {
      op->vtkImageHSVToRGB::SetMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageHSVToRGB_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSVToRGB *op = static_cast<vtkImageHSVToRGB *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    double tempr = (ap.IsBound() ?
      op->GetMaximum() :
      op->vtkImageHSVToRGB::GetMaximum());

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageHSVToRGB_Methods[] = {
  {(char*)"GetClassName", PyvtkImageHSVToRGB_GetClassName, METH_VARARGS,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageHSVToRGB_IsA, METH_VARARGS,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageHSVToRGB_NewInstance, METH_VARARGS,
   (char*)"V.NewInstance() -> vtkImageHSVToRGB\nC++: vtkImageHSVToRGB *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageHSVToRGB_SafeDownCast, METH_VARARGS | METH_STATIC,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageHSVToRGB\nC++: vtkImageHSVToRGB *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaximum", PyvtkImageHSVToRGB_SetMaximum, METH_VARARGS,
   (char*)"V.SetMaximum(float)\nC++: void SetMaximum(double a)\n\nHue is an angle. Maximum specifies when it maps back to 0.\nHueMaximum defaults to 255 instead of 2PI, because unsigned char\nis expected as input. Maximum also specifies the maximum of the\nSaturation, and R, G, B.\n"},
  {(char*)"GetMaximum", PyvtkImageHSVToRGB_GetMaximum, METH_VARARGS,
   (char*)"V.GetMaximum() -> float\nC++: double GetMaximum()\n\nHue is an angle. Maximum specifies when it maps back to 0.\nHueMaximum defaults to 255 instead of 2PI, because unsigned char\nis expected as input. Maximum also specifies the maximum of the\nSaturation, and R, G, B.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageHSVToRGB_StaticNew()
{
  return vtkImageHSVToRGB::New();
}

PyObject *PyVTKClass_vtkImageHSVToRGBNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageHSVToRGB_StaticNew,
    PyvtkImageHSVToRGB_Methods,
    "vtkImageHSVToRGB", modulename,
    NULL, NULL,
    PyvtkImageHSVToRGB_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageHSVToRGB_Doc()
{
  static const char *docstring[] = {
    "vtkImageHSVToRGB - Converts HSV components to RGB.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "For each pixel with hue, saturation and value components this filter\noutputs the color coded as red, green, blue.  Output type must be the\nsame as input type.\n\nSee Also:\n\nvtkImageRGBToHSV\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageHSVToRGB(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageHSVToRGBNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageHSVToRGB", o) != 0)
    {
    Py_DECREF(o);
    }

}

