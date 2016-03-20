/*
 * http://codegolf.stackexchange.com/a/24090/16295
 *
 * Call from the command line with the two strings to be compared as parameters.
 */
main(int i,char**v){return*v[1]&!(*v[1]++^*v[2]++)?main(3,v):!(*--v[1]^*--v[2]);}
