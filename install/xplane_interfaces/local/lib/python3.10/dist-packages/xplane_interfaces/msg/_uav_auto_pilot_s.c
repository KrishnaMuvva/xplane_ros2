// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from xplane_interfaces:msg/UAVAutoPilot.idl
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
#include "xplane_interfaces/msg/detail/uav_auto_pilot__struct.h"
#include "xplane_interfaces/msg/detail/uav_auto_pilot__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool xplane_interfaces__msg__uav_auto_pilot__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("xplane_interfaces.msg._uav_auto_pilot.UAVAutoPilot", full_classname_dest, 50) == 0);
  }
  xplane_interfaces__msg__UAVAutoPilot * ros_message = _ros_message;
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->altitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // airspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "airspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->airspeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * xplane_interfaces__msg__uav_auto_pilot__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UAVAutoPilot */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("xplane_interfaces.msg._uav_auto_pilot");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UAVAutoPilot");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  xplane_interfaces__msg__UAVAutoPilot * ros_message = (xplane_interfaces__msg__UAVAutoPilot *)raw_ros_message;
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // airspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->airspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "airspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
