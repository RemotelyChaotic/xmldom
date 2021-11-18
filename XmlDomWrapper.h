#ifndef XMLDOMWRAPPER_H
#define XMLDOMWRAPPER_H

#include <QQmlEngine>
#include <QtGlobal>

#ifdef BUILDXMLDOMWRAPPER
  #define DLLDOMWRAPPER Q_DECL_EXPORT
#else
  #define DLLDOMWRAPPER Q_DECL_IMPORT
#endif

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
