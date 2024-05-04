// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from xplane_interfaces:msg/UAVControl.idl
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
#include "xplane_interfaces/msg/detail/uav_control__struct.h"
#include "xplane_interfaces/msg/detail/uav_control__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool xplane_interfaces__msg__uav_control__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("xplane_interfaces.msg._uav_control.UAVControl", full_classname_dest, 45) == 0);
  }
  xplane_interfaces__msg__UAVControl * ros_message = _ros_message;
  {  // throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alieron
    PyObject * field = PyObject_GetAttrString(_pymsg, "alieron");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alieron = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // elevator
    PyObject * field = PyObject_GetAttrString(_pymsg, "elevator");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->elevator = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rudder
    PyObject * field = PyObject_GetAttrString(_pymsg, "rudder");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rudder = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * xplane_interfaces__msg__uav_control__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UAVControl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("xplane_interfaces.msg._uav_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UAVControl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  xplane_interfaces__msg__UAVControl * ros_message = (xplane_interfaces__msg__UAVControl *)raw_ros_message;
  {  // throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alieron
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alieron);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alieron", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elevator
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->elevator);
    {
      int rc = PyObject_SetAttrString(_pymessage, "elevator", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rudder
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rudder);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rudder", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
