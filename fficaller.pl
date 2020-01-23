:- module(fficaller, [dup_many/1]).

:- use_module(plffi).




dup_many(0) :- writeln(done).
dup_many(N) :-
    succ(NN, N),
    strdup(iamareallylongatomwithlotsofstuffinit, _), % 38 chars
    dup_many(NN).
