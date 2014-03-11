
#include "ocl_common.hpp"
extern CloverChunk chunk;

extern "C" void flux_calc_kernel_ocl_
(double *dbyt)
{
    chunk.flux_calc_kernel(*dbyt);
}

void CloverChunk::flux_calc_kernel
(double dbyt)
{
    flux_calc_device.setArg(0, dbyt);

    ENQUEUE(flux_calc_device)
    //ENQUEUE_OFFSET(flux_calc_device)
}

