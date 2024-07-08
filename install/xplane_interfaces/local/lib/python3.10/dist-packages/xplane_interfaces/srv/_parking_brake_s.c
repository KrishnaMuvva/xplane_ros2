// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from xplane_interfaces:srv/ParkingBrake.idl
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
#include "xplane_interfaces/srv/detail/parking_brake__struct.h"
#include "xplane_interfaces/srv/detail/parking_brake__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool xplane_interfaces__srv__parking_brake__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("xplane_interfaces.srv._parking_brake.ParkingBrake_Request", full_classname_dest, 57) == 0);
  }
  xplane_interfaces__srv__ParkingBrake_Request * ros_message = _ros_message;
  {  // parking_brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_brake");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->parking_brake = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * xplane_interfaces__srv__parking_brake__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ParkingBrake_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("xplane_interfaces.srv._parking_brake");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ParkingBrake_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  xplane_interfaces__srv__ParkingBrake_Request * ros_message = (xplane_interfaces__srv__ParkingBrake_Request *)raw_ros_message;
  {  // parking_brake
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->parking_brake ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking_brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "xplane_interfaces/srv/detail/parking_brake__struct.h"
// already included above
// #include "xplane_interfaces/srv/detail/parking_brake__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool xplane_interfaces__srv__parking_brake__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("xplane_interfaces.srv._parking_brake.ParkingBrake_Response", full_classname_dest, 58) == 0);
  }
  xplane_interfaces__srv__ParkingBrake_Response * ros_message = _ros_message;
  {  // brake_release
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_release");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_release = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * xplane_interfaces__srv__parking_brake__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ParkingBrake_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("xplane_interfaces.srv._parking_brake");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ParkingBrake_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  xplane_interfaces__srv__ParkingBrake_Response * ros_message = (xplane_interfaces__srv__ParkingBrake_Response *)raw_ros_message;
  {  // brake_release
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_release ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_release", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
