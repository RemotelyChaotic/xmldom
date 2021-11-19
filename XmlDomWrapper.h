#ifndef XMLDOMWRAPPER_H
#define XMLDOMWRAPPER_H

#include <QCoreApplication>
#include <QQmlEngine>
#include <QtGlobal>

#ifdef BUILDXMLDOMWRAPPER
  #define DLLDOMWRAPPER Q_DECL_EXPORT
#else
  #define DLLDOMWRAPPER Q_DECL_IMPORT
#endif

inline void InitResources()
{
  Q_INIT_RESOURCE(xmlDomResources);
}
Q_COREAPP_STARTUP_FUNCTION(InitResources)

namespace xmldom {
inline void RegisterWrapper(QQmlEngine* pEngine)
{
  if (nullptr != pEngine)
  {
    pEngine->addImportPath(":/xmldom");
  }
}
}

#endif // XMLDOMWRAPPER_H
