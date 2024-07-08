# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xplane_interfaces:srv/LandingGear.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LandingGear_Request(type):
    """Metaclass of message 'LandingGear_Request'."""

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
                'xplane_interfaces.srv.LandingGear_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__landing_gear__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__landing_gear__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__landing_gear__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__landing_gear__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__landing_gear__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LandingGear_Request(metaclass=Metaclass_LandingGear_Request):
    """Message class 'LandingGear_Request'."""

    __slots__ = [
        '_landing_gear',
    ]

    _fields_and_field_types = {
        'landing_gear': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.landing_gear = kwargs.get('landing_gear', bool())

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
        if self.landing_gear != other.landing_gear:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def landing_gear(self):
        """Message field 'landing_gear'."""
        return self._landing_gear

    @landing_gear.setter
    def landing_gear(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'landing_gear' field must be of type 'bool'"
        self._landing_gear = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LandingGear_Response(type):
    """Metaclass of message 'LandingGear_Response'."""

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
                'xplane_interfaces.srv.LandingGear_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__landing_gear__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__landing_gear__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__landing_gear__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__landing_gear__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__landing_gear__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LandingGear_Response(metaclass=Metaclass_LandingGear_Response):
    """Message class 'LandingGear_Response'."""

    __slots__ = [
        '_gear_release',
    ]

    _fields_and_field_types = {
        'gear_release': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gear_release = kwargs.get('gear_release', bool())

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
        if self.gear_release != other.gear_release:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gear_release(self):
        """Message field 'gear_release'."""
        return self._gear_release

    @gear_release.setter
    def gear_release(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gear_release' field must be of type 'bool'"
        self._gear_release = value


class Metaclass_LandingGear(type):
    """Metaclass of service 'LandingGear'."""

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
                'xplane_interfaces.srv.LandingGear')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__landing_gear

            from xplane_interfaces.srv import _landing_gear
            if _landing_gear.Metaclass_LandingGear_Request._TYPE_SUPPORT is None:
                _landing_gear.Metaclass_LandingGear_Request.__import_type_support__()
            if _landing_gear.Metaclass_LandingGear_Response._TYPE_SUPPORT is None:
                _landing_gear.Metaclass_LandingGear_Response.__import_type_support__()


class LandingGear(metaclass=Metaclass_LandingGear):
    from xplane_interfaces.srv._landing_gear import LandingGear_Request as Request
    from xplane_interfaces.srv._landing_gear import LandingGear_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
