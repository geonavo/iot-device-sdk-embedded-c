/* Copyright 2023 ClearBlade Inc.
 *
 * This is part of the ClearBlade IoT Device SDK for Embedded C for Google Cloud.
 * It is licensed under the BSD 3-Clause license; you may not use this file
 * except in compliance with the License.
 *
 * You may obtain a copy of the License at:
 *  https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Copyright 2018-2020 Google LLC
 *
 * This is part of the Google Cloud IoT Device SDK for Embedded C.
 * It is licensed under the BSD 3-Clause license; you may not use this file
 * except in compliance with the License.
 *
 * You may obtain a copy of the License at:
 *  https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __IOTC_ITEST_MOCK_LAYER_MQTTLOGIC_PREV_H__
#define __IOTC_ITEST_MOCK_LAYER_MQTTLOGIC_PREV_H__

#include "iotc_layer.h"

#ifdef __cplusplus
extern "C" {
#endif

iotc_state_t iotc_mock_layer_mqttlogic_prev_push(void* context, void* data,
                                                 iotc_state_t state);

iotc_state_t iotc_mock_layer_mqttlogic_prev_pull(void* context, void* data,
                                                 iotc_state_t state);

iotc_state_t iotc_mock_layer_mqttlogic_prev_close(void* context, void* data,
                                                  iotc_state_t state);

iotc_state_t iotc_mock_layer_mqttlogic_prev_close_externally(
    void* context, void* data, iotc_state_t state);

iotc_state_t iotc_mock_layer_mqttlogic_prev_init(void* context, void* data,
                                                 iotc_state_t state);

iotc_state_t iotc_mock_layer_mqttlogic_prev_connect(void* context, void* data,
                                                    iotc_state_t state);

#ifdef __cplusplus
}
#endif

#endif /* __IOTC_ITEST_MOCK_LAYER_MQTTLOGIC_PREV_H__ */
