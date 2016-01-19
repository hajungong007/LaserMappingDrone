""" This module loads the entire VTK library into its namespace.  It
also allows one to use specific packages inside the vtk directory.."""

import os
import sys


# The dl module is used to force the symbols in the loaded VTK modules to
# be global, that is, to force symbols to be shared between modules.  This
# used to be necessary in VTK 4 but might not be with VTK 5 and later.

# The first "except" is because systems like AIX don't have the dl module.
# The second "except" is because the dl module raises a system error on
# ia64 and x86_64 systems because "int" and addresses are different sizes.
try:
    import dl
except ImportError:
    # do not give up too early:
    # are we on AMD64 ?
    try:
      import DLFCN as dl
    except ImportError:
      dl = None
except SystemError:
    dl = None

# set the dlopen flags so that VTK does not run into problems with
# shared symbols.
try:
    # only Python >= 2.2 has this functionality
    orig_dlopen_flags = sys.getdlopenflags()
except AttributeError:
    orig_dlopen_flags = None

if dl and (os.name == 'posix'):
    sys.setdlopenflags(dl.RTLD_NOW|dl.RTLD_GLOBAL)

# --------------------------------------
from vtkCommonCore import *
from vtkCommonMath import *
from vtkCommonMisc import *
from vtkCommonSystem import *
from vtkCommonTransforms import *
from vtkCommonDataModel import *
from vtkCommonExecutionModel import *
from vtkFiltersCore import *
from vtkCommonComputationalGeometry import *
from vtkFiltersGeneral import *
from vtkImagingCore import *
from vtkImagingFourier import *
from vtkFiltersStatistics import *
from vtkFiltersExtraction import *
from vtkFiltersSources import *
from vtkCommonColor import *
from vtkFiltersGeometry import *
from vtkRenderingCore import *
from vtkInteractionStyle import *
from vtkIOCore import *
from vtkIOImage import *
from vtkImagingHybrid import *
from vtkRenderingOpenGL import *
from vtkFiltersModeling import *
from vtkIOLegacy import *
from vtkParallelCore import *
from vtkFiltersParallel import *
from vtkFiltersProgrammable import *
from vtkPythonInterpreter import *
from vtkIOXMLParser import *
from vtkPVCommon import *
from vtkPVVTKExtensionsCore import *
from vtkPVClientServerCoreCore import *
from vtkPVServerImplementationCore import *
from vtkPVServerManagerCore import *
from vtkIOMovie import *
from vtkIOGeometry import *
from vtkIOXML import *
from vtkDomainsChemistry import *
from vtkFiltersAMR import *
from vtkFiltersParallelStatistics import *
from vtkIOEnSight import *
from vtkIOImport import *
from vtkInfovisCore import *
from vtkIOInfovis import *
from vtkIONetCDF import *
from vtkIOParallel import *
from vtkIOExodus import *
from vtkIOParallelExodus import *
from vtkIOParallelXML import *
from vtkImagingSources import *
from vtkFiltersHybrid import *
from vtkImagingGeneral import *
from vtkImagingColor import *
from vtkRenderingFreeType import *
from vtkRenderingAnnotation import *
from vtkRenderingVolume import *
from vtkInteractionWidgets import *
from vtkRenderingContext2D import *
from vtkChartsCore import *
from vtkFiltersGeneric import *
from vtkFiltersHyperTree import *
from vtkRenderingContextOpenGL import *
from vtkRenderingGL2PS import *
from vtkRenderingLabel import *
from vtkIOExport import *
from vtkRenderingFreeTypeOpenGL import *
from vtkRenderingLIC import *
from vtkRenderingMatplotlib import *
from vtkRenderingParallel import *
from vtkPVVTKExtensionsRendering import *
from vtkPVVTKExtensionsDefault import *
from vtkRenderingVolumeOpenGL import *
from vtkRenderingVolumeAMR import *
from vtkViewsCore import *
from vtkViewsContext2D import *
from vtkWebGLExporter import *
from vtkPVClientServerCoreRendering import *
from vtkPVClientServerCoreDefault import *
from vtkPVServerImplementationRendering import *
from vtkPVServerManagerRendering import *
from vtkTestingRendering import *
from vtkPVServerManagerDefault import *
from vtkPVAnimation import *
from vtkFiltersFlowPaths import *
from vtkFiltersPython import *
from vtkFiltersTexture import *
from vtkFiltersVerdict import *
from vtkIOAMR import *
from vtkIOPLY import *
from vtkIOLSDyna import *
from vtkIOParallelLSDyna import *
from vtkIOVPIC import *
from vtkIOXdmf2 import *
from vtkImagingMorphological import *
from vtkInteractionImage import *
from vtkRenderingLOD import *
from vtkPVServerManagerApplication import *
from vtkPVCatalyst import *
from vtkWebCore import *
from vtkParaViewWebCore import *
# --------------------------------------

# useful macro for getting type names
__vtkTypeNameDict = {VTK_VOID:"void",
                     VTK_DOUBLE:"double",
                     VTK_FLOAT:"float",
                     VTK_LONG:"long",
                     VTK_UNSIGNED_LONG:"unsigned long",
                     VTK_INT:"int",
                     VTK_UNSIGNED_INT:"unsigned int",
                     VTK_SHORT:"short",
                     VTK_UNSIGNED_SHORT:"unsigned short",
                     VTK_CHAR:"char",
                     VTK_UNSIGNED_CHAR:"unsigned char",
                     VTK_SIGNED_CHAR:"signed char",
                     VTK_LONG_LONG:"long long",
                     VTK_UNSIGNED_LONG_LONG:"unsigned long long",
                     VTK___INT64:"__int64",
                     VTK_UNSIGNED___INT64:"unsigned __int64",
                     VTK_ID_TYPE:"vtkIdType",
                     VTK_BIT:"bit"}

def vtkImageScalarTypeNameMacro(type):
  return __vtkTypeNameDict[type]

# import convenience decorators
from util.misc import calldata_type

# import the vtkVariant helpers
from util.vtkVariant import *

# reset the dlopen flags to the original state if possible.
if dl and (os.name == 'posix') and orig_dlopen_flags:
    sys.setdlopenflags(orig_dlopen_flags)

# removing things the user shouldn't have to see.
del orig_dlopen_flags
del sys, dl, os
