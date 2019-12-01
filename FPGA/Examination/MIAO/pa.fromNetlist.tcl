
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name LLLL -dir "F:/git/FPGA/Examination/MIAO/planAhead_run_1" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "F:/git/FPGA/Examination/MIAO/main.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {F:/git/FPGA/Examination/MIAO} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "main.ucf" [current_fileset -constrset]
add_files [list {main.ucf}] -fileset [get_property constrset [current_run]]
link_design
