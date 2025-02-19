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

#ifndef __IOTC_CONFIG_H__
#define __IOTC_CONFIG_H__

#ifndef IOTC_IO_BUFFER_SIZE
#define IOTC_IO_BUFFER_SIZE 32
#endif

#ifndef IOTC_BACKOFF_CHECK_TIME
#define IOTC_BACKOFF_CHECK_TIME 60
#endif

#ifndef IOTC_MQTT_MAX_PAYLOAD_SIZE
#define IOTC_MQTT_MAX_PAYLOAD_SIZE 1024 * 128
#endif

#ifndef IOTC_DEFAULT_IDLE_TIMEOUT
#define IOTC_DEFAULT_IDLE_TIMEOUT 1
#endif

#ifndef IOTC_MAX_IDLE_TIMEOUT
#define IOTC_MAX_IDLE_TIMEOUT 5
#endif

#ifndef IOTC_MQTT_PORT
#define IOTC_MQTT_PORT 443
/* note: usually port 1883 is used for insecure MQTT connections */
#endif

#ifndef IOTC_MQTT_HOST_US_CENTRAL
#define IOTC_MQTT_HOST_US_CENTRAL \
  { "us-central1-mqtt.clearblade.com", IOTC_MQTT_PORT }
#endif
#ifndef IOTC_MQTT_HOST_EUROPE_WEST1
#define IOTC_MQTT_HOST_EUROPE_WEST1 \
  { "europe-west1-mqtt.clearblade.com", IOTC_MQTT_PORT }
#endif
#ifndef IOTC_MQTT_HOST_ASIA_EAST1
#define IOTC_MQTT_HOST_ASIA_EAST1 \
  { "asia-east1-mqtt.clearblade.com", IOTC_MQTT_PORT }
#endif

#endif /* __IOTC_CONFIG_H__ */
