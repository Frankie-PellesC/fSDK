#define ASSIGN_VTBL(s, class, iface)    (s)->lpVtbl = (iface##Vtbl *)(((char *)(s)) + sizeof(class))  
#define ALLOC_IFACE(s, class, iface)	s = malloc(sizeof(class)+sizeof(iface##Vtbl));	\
										if (s) ASSIGN_VTBL(s, class, iface);
#define _countof(x)						(sizeof(x)/sizeof(x[0]))
