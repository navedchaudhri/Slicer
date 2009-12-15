/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH) 
 All Rights Reserved.

 See Doc/copyright/copyright.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


#ifndef __qSlicerTransformsModule_h
#define __qSlicerTransformsModule_h

// SlicerQT includes
#include "qSlicerAbstractCoreModule.h"

// qCTK includes
#include <qCTKPimpl.h>

#include "qSlicerBaseQTCoreModulesExport.h"

class vtkMatrix4x4;
class vtkMRMLNode;
class qSlicerTransformsModulePrivate;

class Q_SLICER_BASE_QTCOREMODULES_EXPORT qSlicerTransformsModule :
  public qSlicerAbstractCoreModule
{
  Q_OBJECT
public:

  typedef qSlicerAbstractCoreModule Superclass;
  qSlicerTransformsModule(QObject *parent=0);

  qSlicerGetTitleMacro("Transforms");

  // Return help/acknowledgement text
  virtual QString helpText()const;
  virtual QString acknowledgementText()const;

protected:

  // Description:
  // Create and return the widget representation associated to this module
  virtual qSlicerAbstractModuleWidget * createWidgetRepresentation();

  // Description:
  // Create and return the logic associated to this module
  virtual qSlicerModuleLogic* createLogic();
  
private:
  QCTK_DECLARE_PRIVATE(qSlicerTransformsModule);
};

#endif
