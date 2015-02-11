//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************
///  \file
///
///  Exception objects required for standalone
///  compilation.
///
///  *********************************************
///
///  Authors (add name and date if you modify):
///   
///  \author Pat Scott 
///          (patscott@physics.mcgill.ca)
///  \date 2014 Mar
///
///  *********************************************

#ifndef __standalone_error_handlers_hpp__
#define __standalone_error_handlers_hpp__

#include "gambit/Utils/exceptions.hpp"

namespace Gambit
{

  /// Utility errors
  error& utils_error();
  /// Utility warnings
  warning& utils_warning();

  /// Backend errors
  error& backend_error();
  /// Backend warnings
  warning& backend_warning();

  /// Logging errors
  error& logging_error();
  /// Logging warnings
  warning& logging_warning();

  /// Model errors
  error& model_error();
  /// Model warnings
  warning& model_warning();

  /// Invalid point exceptions
  invalid_point_exception& invalid_point();

  namespace Printers
  {
    /// Printer errors
    error& printer_error();
    /// Printer warnings
    warning& printer_warning();
  }

}

#endif //#ifndef __standalone_error_handlers_hpp__

