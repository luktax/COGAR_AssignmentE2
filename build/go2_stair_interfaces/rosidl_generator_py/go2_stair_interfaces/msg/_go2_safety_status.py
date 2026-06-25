# generated from rosidl_generator_py/resource/_idl.py.em
# with input from go2_stair_interfaces:msg/Go2SafetyStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Go2SafetyStatus(type):
    """Metaclass of message 'Go2SafetyStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SAFE': 0,
        'WARNING': 1,
        'STOP_REQUIRED': 2,
        'RECOVERY_REQUIRED': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('go2_stair_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'go2_stair_interfaces.msg.Go2SafetyStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__go2_safety_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__go2_safety_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__go2_safety_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__go2_safety_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__go2_safety_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SAFE': cls.__constants['SAFE'],
            'WARNING': cls.__constants['WARNING'],
            'STOP_REQUIRED': cls.__constants['STOP_REQUIRED'],
            'RECOVERY_REQUIRED': cls.__constants['RECOVERY_REQUIRED'],
        }

    @property
    def SAFE(self):
        """Message constant 'SAFE'."""
        return Metaclass_Go2SafetyStatus.__constants['SAFE']

    @property
    def WARNING(self):
        """Message constant 'WARNING'."""
        return Metaclass_Go2SafetyStatus.__constants['WARNING']

    @property
    def STOP_REQUIRED(self):
        """Message constant 'STOP_REQUIRED'."""
        return Metaclass_Go2SafetyStatus.__constants['STOP_REQUIRED']

    @property
    def RECOVERY_REQUIRED(self):
        """Message constant 'RECOVERY_REQUIRED'."""
        return Metaclass_Go2SafetyStatus.__constants['RECOVERY_REQUIRED']


class Go2SafetyStatus(metaclass=Metaclass_Go2SafetyStatus):
    """
    Message class 'Go2SafetyStatus'.

    Constants:
      SAFE
      WARNING
      STOP_REQUIRED
      RECOVERY_REQUIRED
    """

    __slots__ = [
        '_header',
        '_status',
        '_reason',
        '_roll_error',
        '_pitch_error',
        '_roll_rate',
        '_pitch_rate',
        '_contact_count',
        '_foot_contact',
        '_state_timeout',
        '_attitude_warning',
        '_attitude_stop',
        '_rate_warning',
        '_rate_stop',
        '_contact_warning',
        '_contact_stop',
        '_sport_age_s',
        '_lowstate_age_s',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'status': 'uint8',
        'reason': 'string',
        'roll_error': 'float',
        'pitch_error': 'float',
        'roll_rate': 'float',
        'pitch_rate': 'float',
        'contact_count': 'uint8',
        'foot_contact': 'boolean[4]',
        'state_timeout': 'boolean',
        'attitude_warning': 'boolean',
        'attitude_stop': 'boolean',
        'rate_warning': 'boolean',
        'rate_stop': 'boolean',
        'contact_warning': 'boolean',
        'contact_stop': 'boolean',
        'sport_age_s': 'float',
        'lowstate_age_s': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.status = kwargs.get('status', int())
        self.reason = kwargs.get('reason', str())
        self.roll_error = kwargs.get('roll_error', float())
        self.pitch_error = kwargs.get('pitch_error', float())
        self.roll_rate = kwargs.get('roll_rate', float())
        self.pitch_rate = kwargs.get('pitch_rate', float())
        self.contact_count = kwargs.get('contact_count', int())
        self.foot_contact = kwargs.get(
            'foot_contact',
            [bool() for x in range(4)]
        )
        self.state_timeout = kwargs.get('state_timeout', bool())
        self.attitude_warning = kwargs.get('attitude_warning', bool())
        self.attitude_stop = kwargs.get('attitude_stop', bool())
        self.rate_warning = kwargs.get('rate_warning', bool())
        self.rate_stop = kwargs.get('rate_stop', bool())
        self.contact_warning = kwargs.get('contact_warning', bool())
        self.contact_stop = kwargs.get('contact_stop', bool())
        self.sport_age_s = kwargs.get('sport_age_s', float())
        self.lowstate_age_s = kwargs.get('lowstate_age_s', float())

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
        if self.header != other.header:
            return False
        if self.status != other.status:
            return False
        if self.reason != other.reason:
            return False
        if self.roll_error != other.roll_error:
            return False
        if self.pitch_error != other.pitch_error:
            return False
        if self.roll_rate != other.roll_rate:
            return False
        if self.pitch_rate != other.pitch_rate:
            return False
        if self.contact_count != other.contact_count:
            return False
        if self.foot_contact != other.foot_contact:
            return False
        if self.state_timeout != other.state_timeout:
            return False
        if self.attitude_warning != other.attitude_warning:
            return False
        if self.attitude_stop != other.attitude_stop:
            return False
        if self.rate_warning != other.rate_warning:
            return False
        if self.rate_stop != other.rate_stop:
            return False
        if self.contact_warning != other.contact_warning:
            return False
        if self.contact_stop != other.contact_stop:
            return False
        if self.sport_age_s != other.sport_age_s:
            return False
        if self.lowstate_age_s != other.lowstate_age_s:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def reason(self):
        """Message field 'reason'."""
        return self._reason

    @reason.setter
    def reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reason' field must be of type 'str'"
        self._reason = value

    @builtins.property
    def roll_error(self):
        """Message field 'roll_error'."""
        return self._roll_error

    @roll_error.setter
    def roll_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll_error = value

    @builtins.property
    def pitch_error(self):
        """Message field 'pitch_error'."""
        return self._pitch_error

    @pitch_error.setter
    def pitch_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_error = value

    @builtins.property
    def roll_rate(self):
        """Message field 'roll_rate'."""
        return self._roll_rate

    @roll_rate.setter
    def roll_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll_rate = value

    @builtins.property
    def pitch_rate(self):
        """Message field 'pitch_rate'."""
        return self._pitch_rate

    @pitch_rate.setter
    def pitch_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_rate = value

    @builtins.property
    def contact_count(self):
        """Message field 'contact_count'."""
        return self._contact_count

    @contact_count.setter
    def contact_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'contact_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'contact_count' field must be an unsigned integer in [0, 255]"
        self._contact_count = value

    @builtins.property
    def foot_contact(self):
        """Message field 'foot_contact'."""
        return self._foot_contact

    @foot_contact.setter
    def foot_contact(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'foot_contact' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._foot_contact = value

    @builtins.property
    def state_timeout(self):
        """Message field 'state_timeout'."""
        return self._state_timeout

    @state_timeout.setter
    def state_timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'state_timeout' field must be of type 'bool'"
        self._state_timeout = value

    @builtins.property
    def attitude_warning(self):
        """Message field 'attitude_warning'."""
        return self._attitude_warning

    @attitude_warning.setter
    def attitude_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'attitude_warning' field must be of type 'bool'"
        self._attitude_warning = value

    @builtins.property
    def attitude_stop(self):
        """Message field 'attitude_stop'."""
        return self._attitude_stop

    @attitude_stop.setter
    def attitude_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'attitude_stop' field must be of type 'bool'"
        self._attitude_stop = value

    @builtins.property
    def rate_warning(self):
        """Message field 'rate_warning'."""
        return self._rate_warning

    @rate_warning.setter
    def rate_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rate_warning' field must be of type 'bool'"
        self._rate_warning = value

    @builtins.property
    def rate_stop(self):
        """Message field 'rate_stop'."""
        return self._rate_stop

    @rate_stop.setter
    def rate_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rate_stop' field must be of type 'bool'"
        self._rate_stop = value

    @builtins.property
    def contact_warning(self):
        """Message field 'contact_warning'."""
        return self._contact_warning

    @contact_warning.setter
    def contact_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'contact_warning' field must be of type 'bool'"
        self._contact_warning = value

    @builtins.property
    def contact_stop(self):
        """Message field 'contact_stop'."""
        return self._contact_stop

    @contact_stop.setter
    def contact_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'contact_stop' field must be of type 'bool'"
        self._contact_stop = value

    @builtins.property
    def sport_age_s(self):
        """Message field 'sport_age_s'."""
        return self._sport_age_s

    @sport_age_s.setter
    def sport_age_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sport_age_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sport_age_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sport_age_s = value

    @builtins.property
    def lowstate_age_s(self):
        """Message field 'lowstate_age_s'."""
        return self._lowstate_age_s

    @lowstate_age_s.setter
    def lowstate_age_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lowstate_age_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lowstate_age_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lowstate_age_s = value
