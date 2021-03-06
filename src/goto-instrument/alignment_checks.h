/*******************************************************************\

Module: Alignment Checks

Author:

\*******************************************************************/

#ifndef CPROVER_ALIGNMENT_CHECKS_H
#define CPROVER_ALIGNMENT_CHECKS_H

#include <iosfwd>

#include <goto-programs/goto_functions.h>

void print_struct_alignment_problems(
  symbol_tablet &symbol_table,
  std::ostream &out);

#endif
