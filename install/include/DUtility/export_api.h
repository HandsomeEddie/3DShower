#pragma once
#if defined(WIN32)
#   ifdef DUTILITY_DLLIMPL
#       define DUTILITY_DLLDECL _desclspec(dllexport)
#   else
#       define DUTILITY_DLLDECL _desclspec(dllimport)
#   endif
#else
#   ifdef DUTILITY_DLLIMPL
#       define DUTILITY_DLLDECL __attribute__ ((visibility("default")))
#   else
#       define DUTILITY_DLLDECL
#   endif
#endif