# Relocalisation

#### To clone Relocalisation, use:
<copy-button>git clone https://github.com/KRudraksh/Relocalisation.git</copy-button>
# 
#### Locate the "read.pcd" and "kitti2.pcd" in 'src/select_pcd/data'
<copy-button>Copy their path and modify it in 'select_pcd/src/pcl_publish.cpp'</copy-button>
# 
#### Perform cmake, using (preferablly):
<copy-button>catkin_make -j5</copy-button>
# 
#### Launch the package, using:
<copy-button>roslauncg select_pcd run.launch</copy-button>
