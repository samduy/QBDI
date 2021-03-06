/*
 * This file is part of QBDI.
 *
 * Copyright 2017 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef INSTRRULES_H
#define INSTRRULES_H

#include <memory>
#include <vector>

#include "Callback.h"
#include "Patch/InstrRule.h"

namespace QBDI {

/*
 * Setup a user callback in the host state
 *
 * Created patch generator can be used in any instruction rules.
 *
 * @param[in] cbk   Pointer to a user callback
 * @param[in] data  Opaque pointer to user callback data
 */
PatchGenerator::SharedPtrVec getCallbackGenerator(InstCallback cbk, void* data);

}

#endif
