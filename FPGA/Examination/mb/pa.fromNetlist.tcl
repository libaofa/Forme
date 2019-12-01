
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name mb -dir "F:/git/FPGA/Examination/mb/planAhead_run_3" -part xc7a100tcsg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "F:/git/FPGA/Examination/mb/main.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {F:/git/FPGA/Examination/mb} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "main.ucf" [current_fileset -constrset]
add_files [list {main.ucf}] -fileset [get_property constrset [current_run]]
link_design
