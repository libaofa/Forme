
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name mmmmmm -dir "F:/git/FPGA/Examination/mmmmmm/planAhead_run_1" -part xc7a100tcsg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "F:/git/FPGA/Examination/mmmmmm/main.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {F:/git/FPGA/Examination/mmmmmm} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "F:/git/FPGA/Examination/mmmmmm/main.ucf" [current_fileset -constrset]
add_files [list {HFFF.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {main.ucf}] -fileset [get_property constrset [current_run]]
link_design
