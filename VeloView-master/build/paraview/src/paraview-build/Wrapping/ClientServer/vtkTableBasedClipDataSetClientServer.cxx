// ClientServer wrapper for vtkTableBasedClipDataSet object
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkTableBasedClipDataSet.h"
#include "vtkSystemIncludes.h"
#include "vtkClientServerInterpreter.h"
#include "vtkClientServerStream.h"


vtkObjectBase *vtkTableBasedClipDataSetClientServerNewCommand(void* /*ctx*/)
{
  return vtkTableBasedClipDataSet::New();
}


int VTK_EXPORT vtkTableBasedClipDataSetCommand(vtkClientServerInterpreter *arlu, vtkObjectBase *ob, const char *method, const vtkClientServerStream& msg, vtkClientServerStream& resultStream, void* /*ctx*/)
{
  vtkTableBasedClipDataSet *op = vtkTableBasedClipDataSet::SafeDownCast(ob);
  if(!op)
    {
    vtkOStrStreamWrapper vtkmsg;
    vtkmsg << "Cannot cast " << ob->GetClassName() << " object to vtkTableBasedClipDataSet.  "
           << "This probably means the class specifies the incorrect superclass in vtkTypeMacro.";
    resultStream.Reset();
    resultStream << vtkClientServerStream::Error
                 << vtkmsg.str() << 0 << vtkClientServerStream::End;
    return 0;
    }
  (void)arlu;
  if (!strcmp("GetClassName",method) && msg.GetNumberOfArguments(0) == 2)
    {
    const char    *temp20;
      {
      temp20 = (op)->GetClassName();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("IsA",method) && msg.GetNumberOfArguments(0) == 3)
    {
    char    *temp0;
    int      temp20;
    if(msg.GetArgument(0, 2, &temp0))
      {
      temp20 = (op)->IsA(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("NewInstance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTableBasedClipDataSet  *temp20;
      {
      temp20 = (op)->NewInstance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SafeDownCast",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkObject  *temp0;
    vtkTableBasedClipDataSet  *temp20;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkObject"))
      {
      temp20 = (op)->SafeDownCast(temp0);
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("New",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkTableBasedClipDataSet  *temp20;
      {
      temp20 = (op)->New();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMTime",method) && msg.GetNumberOfArguments(0) == 2)
    {
    unsigned long     temp20;
      {
      temp20 = (op)->GetMTime();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetInsideOut",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetInsideOut(temp0);
      return 1;
      }
    }
  if (!strcmp("GetInsideOut",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetInsideOut();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("InsideOutOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InsideOutOn();
      return 1;
      }
    }
  if (!strcmp("InsideOutOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->InsideOutOff();
      return 1;
      }
    }
  if (!strcmp("SetValue",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetValue(temp0);
      return 1;
      }
    }
  if (!strcmp("GetValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetUseValueAsOffset",method) && msg.GetNumberOfArguments(0) == 3)
    {
    bool   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetUseValueAsOffset(temp0);
      return 1;
      }
    }
  if (!strcmp("GetUseValueAsOffset",method) && msg.GetNumberOfArguments(0) == 2)
    {
    bool   temp20;
      {
      temp20 = (op)->GetUseValueAsOffset();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("UseValueAsOffsetOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseValueAsOffsetOn();
      return 1;
      }
    }
  if (!strcmp("UseValueAsOffsetOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->UseValueAsOffsetOff();
      return 1;
      }
    }
  if (!strcmp("SetClipFunction",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkImplicitFunction  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkImplicitFunction"))
      {
      op->SetClipFunction(temp0);
      return 1;
      }
    }
  if (!strcmp("GetClipFunction",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkImplicitFunction  *temp20;
      {
      temp20 = (op)->GetClipFunction();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetGenerateClipScalars",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateClipScalars(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateClipScalars",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateClipScalars();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateClipScalarsOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateClipScalarsOn();
      return 1;
      }
    }
  if (!strcmp("GenerateClipScalarsOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateClipScalarsOff();
      return 1;
      }
    }
  if (!strcmp("SetLocator",method) && msg.GetNumberOfArguments(0) == 3)
    {
    vtkIncrementalPointLocator  *temp0;
    if(vtkClientServerStreamGetArgumentObject(msg, 0, 2, &temp0, "vtkIncrementalPointLocator"))
      {
      op->SetLocator(temp0);
      return 1;
      }
    }
  if (!strcmp("GetLocator",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkIncrementalPointLocator  *temp20;
      {
      temp20 = (op)->GetLocator();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetMergeTolerance",method) && msg.GetNumberOfArguments(0) == 3)
    {
    double   temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetMergeTolerance(temp0);
      return 1;
      }
    }
  if (!strcmp("GetMergeToleranceMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMergeToleranceMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMergeToleranceMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMergeToleranceMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetMergeTolerance",method) && msg.GetNumberOfArguments(0) == 2)
    {
    double   temp20;
      {
      temp20 = (op)->GetMergeTolerance();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("CreateDefaultLocator",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->CreateDefaultLocator();
      return 1;
      }
    }
  if (!strcmp("SetGenerateClippedOutput",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetGenerateClippedOutput(temp0);
      return 1;
      }
    }
  if (!strcmp("GetGenerateClippedOutput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetGenerateClippedOutput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GenerateClippedOutputOn",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateClippedOutputOn();
      return 1;
      }
    }
  if (!strcmp("GenerateClippedOutputOff",method) && msg.GetNumberOfArguments(0) == 2)
    {
      {
      op->GenerateClippedOutputOff();
      return 1;
      }
    }
  if (!strcmp("GetClippedOutput",method) && msg.GetNumberOfArguments(0) == 2)
    {
    vtkUnstructuredGrid  *temp20;
      {
      temp20 = (op)->GetClippedOutput();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << (vtkObjectBase *)temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("SetOutputPointsPrecision",method) && msg.GetNumberOfArguments(0) == 3)
    {
    int      temp0;
    if(msg.GetArgument(0, 2, &temp0))
      {
      op->SetOutputPointsPrecision(temp0);
      return 1;
      }
    }
  if (!strcmp("GetOutputPointsPrecisionMinValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutputPointsPrecisionMinValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetOutputPointsPrecisionMaxValue",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutputPointsPrecisionMaxValue();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }
  if (!strcmp("GetOutputPointsPrecision",method) && msg.GetNumberOfArguments(0) == 2)
    {
    int      temp20;
      {
      temp20 = (op)->GetOutputPointsPrecision();
      resultStream.Reset();
      resultStream << vtkClientServerStream::Reply << temp20 << vtkClientServerStream::End;
      return 1;
      }
    }

  {
    const char* commandName = "vtkUnstructuredGridAlgorithm";
    if (arlu->HasCommandFunction(commandName) &&
        arlu->CallCommandFunction(commandName, op, method, msg, resultStream)) { return 1; }
  }
  if(resultStream.GetNumberOfMessages() > 0 &&
     resultStream.GetCommand(0) == vtkClientServerStream::Error &&
     resultStream.GetNumberOfArguments(0) > 1)
    {
    /* A superclass wrapper prepared a special message. */
    return 0;
    }
  vtkOStrStreamWrapper vtkmsg;
  vtkmsg << "Object type: vtkTableBasedClipDataSet, could not find requested method: \""
         << method << "\"\nor the method was called with incorrect arguments.\n";
  resultStream.Reset();
  resultStream << vtkClientServerStream::Error
               << vtkmsg.str() << vtkClientServerStream::End;
  vtkmsg.rdbuf()->freeze(0);
  return 0;
}


//-------------------------------------------------------------------------auto
void VTK_EXPORT vtkTableBasedClipDataSet_Init(vtkClientServerInterpreter* csi)
{
  static vtkClientServerInterpreter* last = NULL;
  if(last != csi)
    {
    last = csi;
    csi->AddNewInstanceFunction("vtkTableBasedClipDataSet", vtkTableBasedClipDataSetClientServerNewCommand);
    csi->AddCommandFunction("vtkTableBasedClipDataSet", vtkTableBasedClipDataSetCommand);
    }
}
