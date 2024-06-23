// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from xplane_interfaces:msg/UAVGlobalState.idl
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
#include "xplane_interfaces/msg/detail/uav_global_state__struct.h"
#include "xplane_interfaces/msg/detail/uav_global_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool xplane_interfaces__msg__uav_global_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("xplane_interfaces.msg._uav_global_state.UAVGlobalState", full_classname_dest, 54) == 0);
  }
  xplane_interfaces__msg__UAVGlobalState * ros_message = _ros_message;
  {  // lattitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "lattitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lattitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude_msl
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude_msl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude_msl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude_agl
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude_agl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude_agl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // global_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->global_roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // global_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->global_pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // global_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->global_yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // groundspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "groundspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->groundspeed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * xplane_interfaces__msg__uav_global_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UAVGlobalState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("xplane_interfaces.msg._uav_global_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UAVGlobalState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  xplane_interfaces__msg__UAVGlobalState * ros_message = (xplane_interfaces__msg__UAVGlobalState *)raw_ros_message;
  {  // lattitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lattitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lattitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude_msl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude_msl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude_msl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude_agl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude_agl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude_agl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // global_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->global_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // global_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->global_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // global_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->global_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // groundspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->groundspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "groundspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
