# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xplane_interfaces:msg/UAVControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UAVControl(type):
    """Metaclass of message 'UAVControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xplane_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xplane_interfaces.msg.UAVControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uav_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uav_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uav_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uav_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uav_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UAVControl(metaclass=Metaclass_UAVControl):
    """Message class 'UAVControl'."""

    __slots__ = [
        '_throttle',
        '_aileron',
        '_elevator',
        '_rudder',
    ]

    _fields_and_field_types = {
        'throttle': 'float',
        'aileron': 'float',
        'elevator': 'float',
        'rudder': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.throttle = kwargs.get('throttle', float())
        self.aileron = kwargs.get('aileron', float())
        self.elevator = kwargs.get('elevator', float())
        self.rudder = kwargs.get('rudder', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.throttle != other.throttle:
            return False
        if self.aileron != other.aileron:
            return False
        if self.elevator != other.elevator:
            return False
        if self.rudder != other.rudder:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def throttle(self):
        """Message field 'throttle'."""
        return self._throttle

    @throttle.setter
    def throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle = value

    @builtins.property
    def aileron(self):
        """Message field 'aileron'."""
        return self._aileron

    @aileron.setter
    def aileron(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aileron' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'aileron' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._aileron = value

    @builtins.property
    def elevator(self):
        """Message field 'elevator'."""
        return self._elevator

    @elevator.setter
    def elevator(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'elevator' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'elevator' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._elevator = value

    @builtins.property
    def rudder(self):
        """Message field 'rudder'."""
        return self._rudder

    @rudder.setter
    def rudder(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rudder' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rudder' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rudder = value
