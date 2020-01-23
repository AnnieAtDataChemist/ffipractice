#include <string.h>
#include <stdio.h>
#include <SWI-Prolog.h>
 
static foreign_t pl_strdup(term_t string0, term_t string1)
{
  char *input_string, *output_string;
 
  if (PL_get_atom_chars(string0, &input_string))
  {
    output_string = strdup(input_string);
    _Bool ret = PL_unify_atom_chars(string1, output_string);
    free(output_string);
    return ret;
  }
  PL_fail;
}

static foreign_t pl_cprint(term_t string0)
{
  char *as_str;

  if (PL_get_atom_chars(string0, &as_str))
  {
    printf("c prints %s\n", as_str);
    free(as_str);
    PL_succeed;
  }
  PL_fail;
}

install_t install_plffi()
{
  PL_register_foreign("strdup", 2, pl_strdup, 0);
  PL_register_foreign("c_print", 1, pl_cprint, 0);
}
