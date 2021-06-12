/**
 * @author richardo2016@gmail.com
 * @email richardo2016
 * @create date 2021-02-19 03:45:13
 * @modify date 2021-02-19 03:45:13
 * @desc expose apis for managing threads in fiber-js like app
 */

#ifndef _JSSDK_THREADS_H
#define _JSSDK_THREADS_H

#include <exlib/include/service.h>

inline void fiberServiceInitializeWorkers(int32_t serviceWorkerCount) {
  exlib::Service::init(serviceWorkerCount);
}

inline void fiberServiceStartLoop() { exlib::Service::dispatch(); }

inline void fiberServiceStartThread(
    exlib::fiber_func fiber_proc,
    void* proc_data,
    int32_t fiber_stacksize,
    const char* fiber_name = NULL,
    exlib::Thread_base** proc_retVal = NULL) {
    exlib::Service::CreateFiber(fiber_proc, proc_data, fiber_stacksize, fiber_name, proc_retVal);
}

inline void fiberServiceToggleUseThread (bool nextVal) {
    exlib::Service::use_thread = nextVal;
}

#endif // _JSSDK_THREADS_H