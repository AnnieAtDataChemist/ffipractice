:- module(plffi, [strdup/2, c_print/1]).
:- use_foreign_library(plffi).


%!  strdup(+In:string, -Out:string) is det
%
%   foreign predicate to duplicate a string
%
%   @arg In the string going in
%   @arg Out the string going out
