// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from go2_stair_interfaces:msg/Go2SafetyStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "go2_stair_interfaces/msg/detail/go2_safety_status__struct.h"
#include "go2_stair_interfaces/msg/detail/go2_safety_status__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool go2_stair_interfaces__msg__go2_safety_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("go2_stair_interfaces.msg._go2_safety_status.Go2SafetyStatus", full_classname_dest, 59) == 0);
  }
  go2_stair_interfaces__msg__Go2SafetyStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // roll_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // contact_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "contact_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->contact_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // foot_contact
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_contact");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'foot_contact'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 4;
      bool * dest = ros_message->foot_contact;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // state_timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_timeout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->state_timeout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // attitude_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "attitude_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->attitude_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // attitude_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "attitude_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->attitude_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rate_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "rate_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rate_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rate_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "rate_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rate_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // contact_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "contact_warning");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->contact_warning = (Py_True == field);
    Py_DECREF(field);
  }
  {  // contact_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "contact_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->contact_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sport_age_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "sport_age_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sport_age_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lowstate_age_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "lowstate_age_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lowstate_age_s = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * go2_stair_interfaces__msg__go2_safety_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Go2SafetyStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("go2_stair_interfaces.msg._go2_safety_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Go2SafetyStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  go2_stair_interfaces__msg__Go2SafetyStatus * ros_message = (go2_stair_interfaces__msg__Go2SafetyStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->reason.data,
      strlen(ros_message->reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contact_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->contact_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contact_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_contact
    PyObject * field = NULL;
    size_t size = 4;
    bool * src = ros_message->foot_contact;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_contact", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_timeout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->state_timeout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attitude_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->attitude_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attitude_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // attitude_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->attitude_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "attitude_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rate_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rate_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rate_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rate_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rate_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rate_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contact_warning
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->contact_warning ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contact_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contact_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->contact_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "contact_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sport_age_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sport_age_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sport_age_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lowstate_age_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lowstate_age_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lowstate_age_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
