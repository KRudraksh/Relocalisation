# Relocalisation

#### To clone Relocalisation, use:
git clone https://github.com/KRudraksh/Relocalisation.git
# 
#### Locate the "read.pcd" and "kitti2.pcd" in 'src/select_pcd/data'
Copy their path and modify it in 'select_pcd/src/pcl_publish.cpp'
# 
#### Perform cmake, using (preferablly):
catkin_make -j5
# 
#### Launch the package, using:
roslauncg select_pcd run.launch
