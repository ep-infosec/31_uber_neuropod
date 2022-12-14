/* Copyright (c) 2020 The Neuropod Authors

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "gtest/gtest.h"
#include "neuropod/internal/backend_registration.hh"

namespace neuropod
{

TEST(test_backend_registration, invalid_type)
{
    EXPECT_THROW(get_backend_for_type({}, "InvalidType"), std::runtime_error);
}

} // namespace neuropod
