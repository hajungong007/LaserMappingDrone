// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings 

extern "C" void real_initvtkCommonMiscPython(const char *modulename);

extern  "C" { VTK_ABI_EXPORT void initvtkCommonMiscPython(); }

void initvtkCommonMiscPython()
{
  static const char modulename[] = "vtkCommonMiscPython";
  real_initvtkCommonMiscPython(modulename);
}

extern  "C" { VTK_ABI_EXPORT void initlibvtkCommonMiscPython(); }

void initlibvtkCommonMiscPython()
{
  static const char modulename[] = "libvtkCommonMiscPython";
  real_initvtkCommonMiscPython(modulename);
}

