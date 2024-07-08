# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xplane_interfaces:srv/ParkingBrake.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParkingBrake_Request(type):
    """Metaclass of message 'ParkingBrake_Request'."""

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
                'xplane_interfaces.srv.ParkingBrake_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__parking_brake__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__parking_brake__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__parking_brake__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__parking_brake__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__parking_brake__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParkingBrake_Request(metaclass=Metaclass_ParkingBrake_Request):
    """Message class 'ParkingBrake_Request'."""

    __slots__ = [
        '_parking_brake',
    ]

    _fields_and_field_types = {
        'parking_brake': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.parking_brake = kwargs.get('parking_brake', bool())

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
        if self.parking_brake != other.parking_brake:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def parking_brake(self):
        """Message field 'parking_brake'."""
        return self._parking_brake

    @parking_brake.setter
    def parking_brake(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'parking_brake' field must be of type 'bool'"
        self._parking_brake = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ParkingBrake_Response(type):
    """Metaclass of message 'ParkingBrake_Response'."""

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
                'xplane_interfaces.srv.ParkingBrake_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__parking_brake__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__parking_brake__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__parking_brake__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__parking_brake__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__parking_brake__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParkingBrake_Response(metaclass=Metaclass_ParkingBrake_Response):
    """Message class 'ParkingBrake_Response'."""

    __slots__ = [
        '_brake_release',
    ]

    _fields_and_field_types = {
        'brake_release': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brake_release = kwargs.get('brake_release', bool())

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
        if self.brake_release != other.brake_release:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def brake_release(self):
        """Message field 'brake_release'."""
        return self._brake_release

    @brake_release.setter
    def brake_release(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brake_release' field must be of type 'bool'"
        self._brake_release = value


class Metaclass_ParkingBrake(type):
    """Metaclass of service 'ParkingBrake'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xplane_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xplane_interfaces.srv.ParkingBrake')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__parking_brake

            from xplane_interfaces.srv import _parking_brake
            if _parking_brake.Metaclass_ParkingBrake_Request._TYPE_SUPPORT is None:
                _parking_brake.Metaclass_ParkingBrake_Request.__import_type_support__()
            if _parking_brake.Metaclass_ParkingBrake_Response._TYPE_SUPPORT is None:
                _parking_brake.Metaclass_ParkingBrake_Response.__import_type_support__()


class ParkingBrake(metaclass=Metaclass_ParkingBrake):
    from xplane_interfaces.srv._parking_brake import ParkingBrake_Request as Request
    from xplane_interfaces.srv._parking_brake import ParkingBrake_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
