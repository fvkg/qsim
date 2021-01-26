// Copyright 2019 Google LLC. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "simulator_testfixture.h"

#include "gtest/gtest.h"

#include "../lib/formux.h"
#include "../lib/simulator_avx.h"

namespace qsim {

TEST(SimulatorAVXTest, ApplyGate1) {
  TestApplyGate1<SimulatorAVX<For>>();
}

TEST(SimulatorAVXTest, ApplyGate2) {
  TestApplyGate2<SimulatorAVX<For>>();
}

TEST(SimulatorAVXTest, ApplyGate3) {
  TestApplyGate3<SimulatorAVX<For>>();
}

TEST(SimulatorAVXTest, ApplyGate5) {
  TestApplyGate5<SimulatorAVX<For>>();
}

TEST(SimulatorAVXTest, ApplyControlGate) {
  TestApplyControlGate<SimulatorAVX<For>>();
}

TEST(SimulatorAVXTest, ApplyControlGateDagger) {
  TestApplyControlGateDagger<SimulatorAVX<For>>();
}

TEST(SimulatorAVXTest, MultiQubitGates) {
  TestMultiQubitGates<SimulatorAVX<For>>();
}

TEST(SimulatorAVXTest, ExpectationValue1) {
  TestExpectationValue1<SimulatorAVX<For>>();
}

TEST(SimulatorAVXTest, ExpectationValue2) {
  TestExpectationValue2<SimulatorAVX<For>>();
}

}  // namespace qsim

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
