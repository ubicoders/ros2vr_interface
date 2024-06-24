std_msgs/Header header
string name
uint32 sys_id


# States
geometry_msgs/Vector3 lin_acc
geometry_msgs/Vector3 lin_vel
geometry_msgs/Vector3 lin_pos
float32 altitude

geometry_msgs/Vector3 ang_acc
geometry_msgs/Vector3 ang_vel
geometry_msgs/Vector3 euler
geometry_msgs/Vector3 euler_dot
geometry_msgs/Quaternion quaternion

# Actuators as states
uint32[] pwm
float32[] actuators
geometry_msgs/Vector3 force
geometry_msgs/Vector3 torque

# Sensors
geometry_msgs/Vector3 accelerometer
geometry_msgs/Vector3 gyroscope
geometry_msgs/Vector3 magnetometer
float32 barometer
float32 temperature
geometry_msgs/Vector3 gps_pos
geometry_msgs/Vector3 gps_vel

# Physical properties
float32 mass
geometry_msgs/Vector3 cg
float32[] moment_arms
geometry_msgs/Vector3 moi_3x1
float32[] moi_3x3
float32[] extra_props

# Collisions and events
Collision[] collisions

# Onboard cameras
uint8[] image_data_0
uint8[] image_data_1
