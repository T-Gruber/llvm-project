// This does exist only for fp32
#if __CLC_FPSIZE == 32
#ifndef __CLC_SCALAR

FUNC(__CLC_VECSIZE, __CLC_VECSIZE, __CLC_GENTYPE, __private);
FUNC(__CLC_VECSIZE, __CLC_VECSIZE, __CLC_GENTYPE, __local);
FUNC(__CLC_VECSIZE, __CLC_VECSIZE, __CLC_GENTYPE, __global);

#undef __CLC_OFFSET
#else
FUNC(, 1, __CLC_GENTYPE, __private);
FUNC(, 1, __CLC_GENTYPE, __local);
FUNC(, 1, __CLC_GENTYPE, __global);
#endif
#endif
