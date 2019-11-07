<?xml version="1.0" encoding="ASCII"?>
<ResourceModel:App xmi:version="2.0" xmlns:xmi="http://www.omg.org/XMI" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:ResourceModel="http://www.infineon.com/Davex/Resource.ecore" name="PWM_BC" URI="http://resources/4.0.16/app/PWM_BC/0" description="Generates PWM for block commutation&#xA;(trapezoidal) using CCU8 and POSIF module." version="4.0.16" minDaveVersion="4.0.0" instanceLabel="PWM_BC_0" appLabel="" containingProxySignal="true">
  <properties provideInit="true" sharable="true"/>
  <virtualSignals name="Global Signal Posif" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_globalsignal_posifmcm" hwSignal="global_signal" hwResource="//@hwResources.11"/>
  <virtualSignals name="ph_u_global_signal" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_globalsignal_phu_config" hwSignal="global_signal" hwResource="//@hwResources.0"/>
  <virtualSignals name="ph_v_global_signal" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_globalsignal_phv_config" hwSignal="global_signal" hwResource="//@hwResources.1"/>
  <virtualSignals name="ph_w_global_signal" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_globalsignal_phw_config" hwSignal="global_signal" hwResource="//@hwResources.2"/>
  <virtualSignals name="ph_u_external_start" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_gp0_unsync_configa" hwSignal="gp0_unsync" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="ph_v_external_start" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_gp0_unsync_configb" hwSignal="gp0_unsync" hwResource="//@hwResources.1" visible="true"/>
  <virtualSignals name="ph_w_external_start" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_gp0_unsync_configc" hwSignal="gp0_unsync" hwResource="//@hwResources.2" visible="true"/>
  <virtualSignals name="ph_u_trap" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_gp2_unsync_configa" hwSignal="gp2_unsync" hwResource="//@hwResources.0"/>
  <virtualSignals name="ph_v_trap" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_gp2_unsync_configb" hwSignal="gp2_unsync" hwResource="//@hwResources.1"/>
  <virtualSignals name="ph_w_trap" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_gp2_unsync_configc" hwSignal="gp2_unsync" hwResource="//@hwResources.2"/>
  <virtualSignals name="event_ph_u_period/one_match" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pmus_omds_phu" hwSignal="pmus_omds" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="event_ph_v_period/one_match" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pmus_omds_phv" hwSignal="pmus_omds" hwResource="//@hwResources.1" visible="true"/>
  <virtualSignals name="event_ph_w_period/one_match" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pmus_omds_phw" hwSignal="pmus_omds" hwResource="//@hwResources.2" visible="true"/>
  <virtualSignals name="event_ph_u_compare_match up/down" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_cmds_cmus_phu" hwResource="//@hwResources.0" visible="true" solverVariableName="sv0" solverVariableValue="cmd1s_cmu1s"/>
  <virtualSignals name="event_ph_v_compare_match up/down" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_cmds_cmus_phv" hwResource="//@hwResources.1" visible="true" solverVariableName="sv1" solverVariableValue="cmd1s_cmu1s"/>
  <virtualSignals name="event_ph_w_compare_match up/down" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_cmds_cmus_phw" hwResource="//@hwResources.2" visible="true" solverVariableName="sv2" solverVariableValue="cmd1s_cmu1s"/>
  <virtualSignals name="event_ph_v_compare_match up/down" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_cmds_op_cmus_phv" hwResource="//@hwResources.0" required="false" visible="true" solverVariableName="sv1" solverVariableValue=""/>
  <virtualSignals name="event_ph_w_compare_match up/down" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_cmds_op_cmus_phw" hwResource="//@hwResources.1" required="false" visible="true" solverVariableName="sv2" solverVariableValue=""/>
  <virtualSignals name="event_ph_u_trap" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_e2as_phu" hwSignal="e2as" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="event_ph_v_trap" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_e2as_phv" hwSignal="e2as" hwResource="//@hwResources.1" visible="true"/>
  <virtualSignals name="event_ph_w_trap" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_e2as_phw" hwSignal="e2as" hwResource="//@hwResources.2" visible="true"/>
  <virtualSignals name="ph_u_status" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_ch_st_phu" hwResource="//@hwResources.0" visible="true" solverVariableName="sv3" solverVariableValue="sta"/>
  <virtualSignals name="ph_v_status" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_ch_st_phv" hwResource="//@hwResources.1" visible="true" solverVariableName="sv4" solverVariableValue="sta"/>
  <virtualSignals name="ph_w_status" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_ch_st_phw" hwResource="//@hwResources.2" visible="true" solverVariableName="sv5" solverVariableValue="sta"/>
  <virtualSignals name="ph_v_status" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_op_ch_st_phv" hwResource="//@hwResources.0" required="false" visible="true" solverVariableName="sv4" solverVariableValue=""/>
  <virtualSignals name="ph_w_status" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_op_ch_st_phw" hwResource="//@hwResources.1" required="false" visible="true" solverVariableName="sv5" solverVariableValue=""/>
  <virtualSignals name="ph_u_slice_status" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_st_phu" hwSignal="st" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="ph_v_slice_status" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_st_phv" hwSignal="st" hwResource="//@hwResources.1" visible="true"/>
  <virtualSignals name="ph_w_slice_status" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_st_phw" hwSignal="st" hwResource="//@hwResources.2" visible="true"/>
  <virtualSignals name="ph_u_high" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_out0_phu" hwResource="//@hwResources.0" solverVariableName="sv6" solverVariableValue="out0"/>
  <virtualSignals name="ph_v_high" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_out0_phv" hwResource="//@hwResources.1" solverVariableName="sv7" solverVariableValue="out0"/>
  <virtualSignals name="ph_w_high" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_out0_phw" hwResource="//@hwResources.2" solverVariableName="sv8" solverVariableValue="out0"/>
  <virtualSignals name="ph_v_high" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_op_out0_phv" hwResource="//@hwResources.0" required="false" solverVariableName="sv7" solverVariableValue=""/>
  <virtualSignals name="ph_v_high" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_op_out0_phw" hwResource="//@hwResources.1" required="false" solverVariableName="sv8" solverVariableValue=""/>
  <virtualSignals name="ph_u_low" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_out1_phu" hwResource="//@hwResources.0" solverVariableName="sv9" solverVariableValue="out1"/>
  <virtualSignals name="ph_v_low" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_out1_phv" hwResource="//@hwResources.1" solverVariableName="sv10" solverVariableValue="out1"/>
  <virtualSignals name="ph_w_low" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_out1_phw" hwResource="//@hwResources.2" solverVariableName="sv11" solverVariableValue="out1"/>
  <virtualSignals name="ph_v_low" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_op_out1_phv" hwResource="//@hwResources.0" required="false" solverVariableName="sv10" solverVariableValue=""/>
  <virtualSignals name="ph_v_low" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_op_out1_phw" hwResource="//@hwResources.1" required="false" solverVariableName="sv11" solverVariableValue=""/>
  <virtualSignals name="ph_u_period_synchronization" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_ps_phu" hwSignal="ps" hwResource="//@hwResources.0" visible="true"/>
  <virtualSignals name="ph_v_period_synchronization" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_ps_phv" hwSignal="ps" hwResource="//@hwResources.1" visible="true"/>
  <virtualSignals name="ph_w_period_synchronization" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_ps_phw" hwSignal="ps" hwResource="//@hwResources.2" visible="true"/>
  <virtualSignals name="multichannel_next_pattern_update_set" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_mset" hwSignal="pifmset" hwResource="//@hwResources.11" visible="true"/>
  <virtualSignals name="multichannel_pattern_update_synchronization" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_msync" hwSignal="pifmsync" hwResource="//@hwResources.11"/>
  <virtualSignals name="multichannel_pattern_sync_trigger" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_out6" hwSignal="out6" hwResource="//@hwResources.11"/>
  <virtualSignals name="multichannel_pattern_update" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_mste" hwSignal="mste" hwResource="//@hwResources.11" visible="true"/>
  <virtualSignals name="multichannel_pattern_output_0" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_mout0" hwSignal="mout0" hwResource="//@hwResources.11"/>
  <virtualSignals name="multichannel_pattern_input_0" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_mci0" hwSignal="mci0" hwResource="//@hwResources.0"/>
  <virtualSignals name="ph_u_high_pad" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phu_high" hwSignal="pad" hwResource="//@hwResources.3"/>
  <virtualSignals name="ph_u_low_pad" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phu_low" hwSignal="pad" hwResource="//@hwResources.4"/>
  <virtualSignals name="ph_v_high_pad" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phv_high" hwSignal="pad" hwResource="//@hwResources.5"/>
  <virtualSignals name="ph_v_low_pad" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phv_low" hwSignal="pad" hwResource="//@hwResources.6"/>
  <virtualSignals name="ph_w_high_pad" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phw_high" hwSignal="pad" hwResource="//@hwResources.7"/>
  <virtualSignals name="ph_w_low_pad" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phw_low" hwSignal="pad" hwResource="//@hwResources.8"/>
  <virtualSignals name="trap_pad" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_trap" hwSignal="pad" hwResource="//@hwResources.9" required="false"/>
  <virtualSignals name="inverter_enable_pad" URI="http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_inverter" hwSignal="pad" hwResource="//@hwResources.10" visible="true"/>
  <virtualSignals name="PhaseU_High pin_signal" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phu_high" hwSignal="pin" hwResource="//@hwResources.12"/>
  <virtualSignals name="PhaseV_High pin_signal" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phv_high" hwSignal="pin" hwResource="//@hwResources.13"/>
  <virtualSignals name="PhaseW_High pin_signal" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phw_high" hwSignal="pin" hwResource="//@hwResources.14"/>
  <virtualSignals name="PhaseU_Low pin_signal" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phu_low" hwSignal="pin" hwResource="//@hwResources.15"/>
  <virtualSignals name="PhaseV_Low pin_signal" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phv_low" hwSignal="pin" hwResource="//@hwResources.16"/>
  <virtualSignals name="PhaseW_Low pin_signal" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phw_low" hwSignal="pin" hwResource="//@hwResources.17"/>
  <virtualSignals name="Trap Pin_signal" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_trap" hwSignal="pin" hwResource="//@hwResources.18"/>
  <virtualSignals name="Inverter Enable Pin_signal" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_inverter" hwSignal="pin" hwResource="//@hwResources.19"/>
  <requiredApps URI="http://resources/4.0.16/app/PWM_BC/0/appres_global_ccu8_app0" requiredAppName="GLOBAL_CCU8" requiringMode="SHARABLE">
    <downwardMapList xsi:type="ResourceModel:App" href="../../GLOBAL_CCU8/v4_1_12/GLOBAL_CCU8_0.app#/"/>
  </requiredApps>
  <requiredApps URI="http://resources/4.0.16/app/PWM_BC/0/appres_global_posif_app0" requiredAppName="GLOBAL_POSIF" requiringMode="SHARABLE">
    <downwardMapList xsi:type="ResourceModel:App" href="../../GLOBAL_POSIF/v4_0_14/GLOBAL_POSIF_0.app#/"/>
  </requiredApps>
  <hwResources name="PhU Slice" URI="http://resources/4.0.16/app/PWM_BC/0/hwres_ccu8_slice_configa" resourceGroupUri="peripheral/ccu8/*/cc8/*" mResGrpUri="peripheral/ccu8/*/cc8/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/CCU80/CCU80_0.dd#//@provided.28"/>
  </hwResources>
  <hwResources name="PhV Slice" URI="http://resources/4.0.16/app/PWM_BC/0/hwres_ccu8_slice_configb" resourceGroupUri="peripheral/ccu8/*/cc8/*" mResGrpUri="peripheral/ccu8/*/cc8/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/CCU80/CCU80_0.dd#//@provided.0"/>
  </hwResources>
  <hwResources name="PhW Slice" URI="http://resources/4.0.16/app/PWM_BC/0/hwres_ccu8_slice_configc" resourceGroupUri="peripheral/ccu8/*/cc8/*" mResGrpUri="peripheral/ccu8/*/cc8/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/CCU80/CCU80_0.dd#//@provided.14"/>
  </hwResources>
  <hwResources name="PhaseU_High pin" URI="http://resources/4.0.16/app/PWM_BC/0/hwres_port_pad_phuhigh" resourceGroupUri="port/p/*/pad/*" mResGrpUri="port/p/*/pad/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/Port0/Port0_0.dd#//@provided.49"/>
  </hwResources>
  <hwResources name="PhaseU_Low pin" URI="http://resources/4.0.16/app/PWM_BC/0/hwres_port_pad_phulow" resourceGroupUri="port/p/*/pad/*" mResGrpUri="port/p/*/pad/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/Port0/Port0_0.dd#//@provided.24"/>
  </hwResources>
  <hwResources name="PhaseV_High pin" URI="http://resources/4.0.16/app/PWM_BC/0/hwres_port_pad_phvhigh" resourceGroupUri="port/p/*/pad/*" mResGrpUri="port/p/*/pad/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/Port0/Port0_0.dd#//@provided.32"/>
  </hwResources>
  <hwResources name="PhaseV_Low pin" URI="http://resources/4.0.16/app/PWM_BC/0/hwres_port_pad_phvlow" resourceGroupUri="port/p/*/pad/*" mResGrpUri="port/p/*/pad/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/Port0/Port0_0.dd#//@provided.0"/>
  </hwResources>
  <hwResources name="PhaseW_High pin" URI="http://resources/4.0.16/app/PWM_BC/0/hwres_port_pad_phwhigh" resourceGroupUri="port/p/*/pad/*" mResGrpUri="port/p/*/pad/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/Port0/Port0_0.dd#//@provided.28"/>
  </hwResources>
  <hwResources name="PhaseW_Low pin" URI="http://resources/4.0.16/app/PWM_BC/0/hwres_port_pad_phwlow" resourceGroupUri="port/p/*/pad/*" mResGrpUri="port/p/*/pad/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/Port0/Port0_0.dd#//@provided.6"/>
  </hwResources>
  <hwResources name="Trap Pin" URI="http://resources/4.0.16/app/PWM_BC/0/hwres_port_pad_trap" resourceGroupUri="" required="false" mResGrpUri="port/p/*/pad/*"/>
  <hwResources name="Inverter Enable Pin" URI="http://resources/4.0.16/app/PWM_BC/0/hwres_port_pad_inverterenable" resourceGroupUri="port/p/*/pad/*" mResGrpUri="port/p/*/pad/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/Port5/Port5_5.dd#//@provided.6"/>
  </hwResources>
  <hwResources name="MultiChannel Mode" URI="http://resources/4.0.16/app/PWM_BC/0/hwres_posif_mcm" resourceGroupUri="peripheral/posif/*/posif/mcm" mResGrpUri="peripheral/posif/*/posif/mcm">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/POSIF0/POSIF0_0.dd#//@provided.1"/>
  </hwResources>
  <hwResources name="PhaseU_High pin" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_hwres_port_pad_phuhigh" resourceGroupUri="devicepackage/0/97" constraintType="GLOBAL_RESOURCE" mResGrpUri="devicepackage/0/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/DEVICEPACKAGE/DEVICEPACKAGE_0.dd#//@provided.30"/>
  </hwResources>
  <hwResources name="PhaseV_High pin" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_hwres_port_pad_phvhigh" resourceGroupUri="devicepackage/0/98" constraintType="GLOBAL_RESOURCE" mResGrpUri="devicepackage/0/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/DEVICEPACKAGE/DEVICEPACKAGE_0.dd#//@provided.18"/>
  </hwResources>
  <hwResources name="PhaseW_High pin" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_hwres_port_pad_phwhigh" resourceGroupUri="devicepackage/0/99" constraintType="GLOBAL_RESOURCE" mResGrpUri="devicepackage/0/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/DEVICEPACKAGE/DEVICEPACKAGE_0.dd#//@provided.17"/>
  </hwResources>
  <hwResources name="PhaseU_Low pin" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_hwres_port_pad_phulow" resourceGroupUri="devicepackage/0/100" constraintType="GLOBAL_RESOURCE" mResGrpUri="devicepackage/0/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/DEVICEPACKAGE/DEVICEPACKAGE_0.dd#//@provided.15"/>
  </hwResources>
  <hwResources name="PhaseV_Low pin" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_hwres_port_pad_phvlow" resourceGroupUri="devicepackage/0/1" constraintType="GLOBAL_RESOURCE" mResGrpUri="devicepackage/0/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/DEVICEPACKAGE/DEVICEPACKAGE_0.dd#//@provided.5"/>
  </hwResources>
  <hwResources name="PhaseW_Low pin" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_hwres_port_pad_phwlow" resourceGroupUri="devicepackage/0/2" constraintType="GLOBAL_RESOURCE" mResGrpUri="devicepackage/0/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/DEVICEPACKAGE/DEVICEPACKAGE_0.dd#//@provided.4"/>
  </hwResources>
  <hwResources name="Trap Pin" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_hwres_port_pad_trap" resourceGroupUri="" required="false" mResGrpUri="devicepackage/0/*"/>
  <hwResources name="Inverter Enable Pin" URI="http://resources/4.0.16/app/PWM_BC/0/__pin_hwres_port_pad_inverterenable" resourceGroupUri="devicepackage/0/*" mResGrpUri="devicepackage/0/*">
    <downwardMapList xsi:type="ResourceModel:ResourceGroup" href="../../../HW_RESOURCES/DEVICEPACKAGE/DEVICEPACKAGE_0.dd#//@provided.1"/>
  </hwResources>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_global_ccu8_global/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_globalsignal_phu_config" systemDefined="true" sourceSignal="ccu8_global" targetSignal="ph_u_global_signal" targetVirtualSignal="//@virtualSignals.1" proxySrcVirtualSignalUri="http://resources/4.1.12/app/GLOBAL_CCU8/0/vs_global_ccu8_globalsignal" containingProxySignal="true">
    <downwardMapList xsi:type="ResourceModel:VirtualSignal" href="../../GLOBAL_CCU8/v4_1_12/GLOBAL_CCU8_0.app#//@virtualSignals.0"/>
    <srcVirtualSignal href="../../GLOBAL_CCU8/v4_1_12/GLOBAL_CCU8_0.app#//@virtualSignals.0"/>
  </connections>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_global_ccu8_global/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_globalsignal_phv_config" systemDefined="true" sourceSignal="ccu8_global" targetSignal="ph_v_global_signal" targetVirtualSignal="//@virtualSignals.2" proxySrcVirtualSignalUri="http://resources/4.1.12/app/GLOBAL_CCU8/0/vs_global_ccu8_globalsignal" containingProxySignal="true">
    <downwardMapList xsi:type="ResourceModel:VirtualSignal" href="../../GLOBAL_CCU8/v4_1_12/GLOBAL_CCU8_0.app#//@virtualSignals.0"/>
    <srcVirtualSignal href="../../GLOBAL_CCU8/v4_1_12/GLOBAL_CCU8_0.app#//@virtualSignals.0"/>
  </connections>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_global_ccu8_global/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_globalsignal_phw_config" systemDefined="true" sourceSignal="ccu8_global" targetSignal="ph_w_global_signal" targetVirtualSignal="//@virtualSignals.3" proxySrcVirtualSignalUri="http://resources/4.1.12/app/GLOBAL_CCU8/0/vs_global_ccu8_globalsignal" containingProxySignal="true">
    <downwardMapList xsi:type="ResourceModel:VirtualSignal" href="../../GLOBAL_CCU8/v4_1_12/GLOBAL_CCU8_0.app#//@virtualSignals.0"/>
    <srcVirtualSignal href="../../GLOBAL_CCU8/v4_1_12/GLOBAL_CCU8_0.app#//@virtualSignals.0"/>
  </connections>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_global_posif_global/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_globalsignal_posifmcm" systemDefined="true" sourceSignal="posif_global_signal" targetSignal="Global Signal Posif" targetVirtualSignal="//@virtualSignals.0" proxySrcVirtualSignalUri="http://resources/4.0.14/app/GLOBAL_POSIF/0/vs_global_posif_globalsignal" containingProxySignal="true">
    <downwardMapList xsi:type="ResourceModel:VirtualSignal" href="../../GLOBAL_POSIF/v4_0_14/GLOBAL_POSIF_0.app#//@virtualSignals.0"/>
    <srcVirtualSignal href="../../GLOBAL_POSIF/v4_0_14/GLOBAL_POSIF_0.app#//@virtualSignals.0"/>
  </connections>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_out0_phu/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phu_high" systemDefined="true" sourceSignal="ph_u_high" targetSignal="ph_u_high_pad" srcVirtualSignal="//@virtualSignals.29" targetVirtualSignal="//@virtualSignals.48"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_out0_phv/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phv_high" systemDefined="true" sourceSignal="ph_v_high" targetSignal="ph_v_high_pad" srcVirtualSignal="//@virtualSignals.30" targetVirtualSignal="//@virtualSignals.50"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_out0_phw/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phw_high" systemDefined="true" sourceSignal="ph_w_high" targetSignal="ph_w_high_pad" srcVirtualSignal="//@virtualSignals.31" targetVirtualSignal="//@virtualSignals.52"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_op_out0_phv/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phv_high" systemDefined="true" sourceSignal="ph_v_high" targetSignal="ph_v_high_pad" required="false" srcVirtualSignal="//@virtualSignals.32" targetVirtualSignal="//@virtualSignals.50"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_op_out0_phw/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phw_high" systemDefined="true" sourceSignal="ph_v_high" targetSignal="ph_w_high_pad" required="false" srcVirtualSignal="//@virtualSignals.33" targetVirtualSignal="//@virtualSignals.52"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_out1_phu/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phu_low" systemDefined="true" sourceSignal="ph_u_low" targetSignal="ph_u_low_pad" srcVirtualSignal="//@virtualSignals.34" targetVirtualSignal="//@virtualSignals.49"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_out1_phv/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phv_low" systemDefined="true" sourceSignal="ph_v_low" targetSignal="ph_v_low_pad" srcVirtualSignal="//@virtualSignals.35" targetVirtualSignal="//@virtualSignals.51"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_out1_phw/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phw_low" systemDefined="true" sourceSignal="ph_w_low" targetSignal="ph_w_low_pad" srcVirtualSignal="//@virtualSignals.36" targetVirtualSignal="//@virtualSignals.53"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_op_out1_phv/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phv_low" systemDefined="true" sourceSignal="ph_v_low" targetSignal="ph_v_low_pad" required="false" srcVirtualSignal="//@virtualSignals.37" targetVirtualSignal="//@virtualSignals.51"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_op_out1_phw/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phw_low" systemDefined="true" sourceSignal="ph_v_low" targetSignal="ph_w_low_pad" required="false" srcVirtualSignal="//@virtualSignals.38" targetVirtualSignal="//@virtualSignals.53"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_trap/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_gp2_unsync_configa" systemDefined="true" sourceSignal="trap_pad" targetSignal="ph_u_trap" srcVirtualSignal="//@virtualSignals.54" targetVirtualSignal="//@virtualSignals.7"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_trap/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_gp2_unsync_configb" systemDefined="true" sourceSignal="trap_pad" targetSignal="ph_v_trap" srcVirtualSignal="//@virtualSignals.54" targetVirtualSignal="//@virtualSignals.8"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_trap/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_gp2_unsync_configc" systemDefined="true" sourceSignal="trap_pad" targetSignal="ph_w_trap" srcVirtualSignal="//@virtualSignals.54" targetVirtualSignal="//@virtualSignals.9"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_global_ccu8_gsc_enable/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_gp0_unsync_configa" systemDefined="true" sourceSignal="ccu8_global_start" targetSignal="ph_u_external_start" targetVirtualSignal="//@virtualSignals.4" proxySrcVirtualSignalUri="http://resources/4.1.12/app/GLOBAL_CCU8/0/vs_global_ccu8_gsc_enable" containingProxySignal="true">
    <downwardMapList xsi:type="ResourceModel:VirtualSignal" href="../../GLOBAL_CCU8/v4_1_12/GLOBAL_CCU8_0.app#//@virtualSignals.2"/>
    <srcVirtualSignal href="../../GLOBAL_CCU8/v4_1_12/GLOBAL_CCU8_0.app#//@virtualSignals.2"/>
  </connections>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_global_ccu8_gsc_enable/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_gp0_unsync_configb" systemDefined="true" sourceSignal="ccu8_global_start" targetSignal="ph_v_external_start" targetVirtualSignal="//@virtualSignals.5" proxySrcVirtualSignalUri="http://resources/4.1.12/app/GLOBAL_CCU8/0/vs_global_ccu8_gsc_enable" containingProxySignal="true">
    <downwardMapList xsi:type="ResourceModel:VirtualSignal" href="../../GLOBAL_CCU8/v4_1_12/GLOBAL_CCU8_0.app#//@virtualSignals.2"/>
    <srcVirtualSignal href="../../GLOBAL_CCU8/v4_1_12/GLOBAL_CCU8_0.app#//@virtualSignals.2"/>
  </connections>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_global_ccu8_gsc_enable/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_gp0_unsync_configc" systemDefined="true" sourceSignal="ccu8_global_start" targetSignal="ph_w_external_start" targetVirtualSignal="//@virtualSignals.6" proxySrcVirtualSignalUri="http://resources/4.1.12/app/GLOBAL_CCU8/0/vs_global_ccu8_gsc_enable" containingProxySignal="true">
    <downwardMapList xsi:type="ResourceModel:VirtualSignal" href="../../GLOBAL_CCU8/v4_1_12/GLOBAL_CCU8_0.app#//@virtualSignals.2"/>
    <srcVirtualSignal href="../../GLOBAL_CCU8/v4_1_12/GLOBAL_CCU8_0.app#//@virtualSignals.2"/>
  </connections>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_ps_phv/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_msync" systemDefined="true" sourceSignal="ph_v_period_synchronization" targetSignal="multichannel_pattern_update_synchronization" srcVirtualSignal="//@virtualSignals.40" targetVirtualSignal="//@virtualSignals.43"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_ps_phw/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_msync" systemDefined="true" sourceSignal="ph_w_period_synchronization" targetSignal="multichannel_pattern_update_synchronization" required="false" srcVirtualSignal="//@virtualSignals.41" targetVirtualSignal="//@virtualSignals.43"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_mout0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_mci0" systemDefined="true" sourceSignal="multichannel_pattern_output_0" targetSignal="multichannel_pattern_input_0" srcVirtualSignal="//@virtualSignals.46" targetVirtualSignal="//@virtualSignals.47"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phu_high/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phu_high" systemDefined="true" sourceSignal="ph_u_high_pad" targetSignal="PhaseU_High pin_signal" srcVirtualSignal="//@virtualSignals.48" targetVirtualSignal="//@virtualSignals.56"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phu_high/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phu_high" systemDefined="true" sourceSignal="PhaseU_High pin_signal" targetSignal="ph_u_high_pad" srcVirtualSignal="//@virtualSignals.56" targetVirtualSignal="//@virtualSignals.48"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phv_high/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phv_high" systemDefined="true" sourceSignal="ph_v_high_pad" targetSignal="PhaseV_High pin_signal" srcVirtualSignal="//@virtualSignals.50" targetVirtualSignal="//@virtualSignals.57"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phv_high/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phv_high" systemDefined="true" sourceSignal="PhaseV_High pin_signal" targetSignal="ph_v_high_pad" srcVirtualSignal="//@virtualSignals.57" targetVirtualSignal="//@virtualSignals.50"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phw_high/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phw_high" systemDefined="true" sourceSignal="ph_w_high_pad" targetSignal="PhaseW_High pin_signal" srcVirtualSignal="//@virtualSignals.52" targetVirtualSignal="//@virtualSignals.58"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phw_high/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phw_high" systemDefined="true" sourceSignal="PhaseW_High pin_signal" targetSignal="ph_w_high_pad" srcVirtualSignal="//@virtualSignals.58" targetVirtualSignal="//@virtualSignals.52"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phu_low/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phu_low" systemDefined="true" sourceSignal="ph_u_low_pad" targetSignal="PhaseU_Low pin_signal" srcVirtualSignal="//@virtualSignals.49" targetVirtualSignal="//@virtualSignals.59"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phu_low/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phu_low" systemDefined="true" sourceSignal="PhaseU_Low pin_signal" targetSignal="ph_u_low_pad" srcVirtualSignal="//@virtualSignals.59" targetVirtualSignal="//@virtualSignals.49"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phv_low/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phv_low" systemDefined="true" sourceSignal="ph_v_low_pad" targetSignal="PhaseV_Low pin_signal" srcVirtualSignal="//@virtualSignals.51" targetVirtualSignal="//@virtualSignals.60"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phv_low/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phv_low" systemDefined="true" sourceSignal="PhaseV_Low pin_signal" targetSignal="ph_v_low_pad" srcVirtualSignal="//@virtualSignals.60" targetVirtualSignal="//@virtualSignals.51"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phw_low/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phw_low" systemDefined="true" sourceSignal="ph_w_low_pad" targetSignal="PhaseW_Low pin_signal" srcVirtualSignal="//@virtualSignals.53" targetVirtualSignal="//@virtualSignals.61"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_phw_low/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_phw_low" systemDefined="true" sourceSignal="PhaseW_Low pin_signal" targetSignal="ph_w_low_pad" srcVirtualSignal="//@virtualSignals.61" targetVirtualSignal="//@virtualSignals.53"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_trap/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_trap" systemDefined="true" sourceSignal="trap_pad" targetSignal="Trap Pin_signal" srcVirtualSignal="//@virtualSignals.54" targetVirtualSignal="//@virtualSignals.62"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_trap/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_trap" systemDefined="true" sourceSignal="Trap Pin_signal" targetSignal="trap_pad" srcVirtualSignal="//@virtualSignals.62" targetVirtualSignal="//@virtualSignals.54"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_inverter/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_inverter" systemDefined="true" sourceSignal="inverter_enable_pad" targetSignal="Inverter Enable Pin_signal" srcVirtualSignal="//@virtualSignals.55" targetVirtualSignal="//@virtualSignals.63"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/__pin_vs_pwm_bc_pin_inverter/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pin_inverter" systemDefined="true" sourceSignal="Inverter Enable Pin_signal" targetSignal="inverter_enable_pad" srcVirtualSignal="//@virtualSignals.63" targetVirtualSignal="//@virtualSignals.55"/>
  <connections URI="http://resources/4.0.16/app/PWM_BC/0/http://resources/4.0.16/app/PWM_BC/0/vs_pwm_bc_pmus_omds_phu/http://resources/4.0.8/app/INTERRUPT/0/vs_nvic_signal_in" sourceSignal="event_ph_u_period/one_match" targetSignal="sr_irq" srcVirtualSignal="//@virtualSignals.10">
    <downwardMapList xsi:type="ResourceModel:VirtualSignal" href="../../INTERRUPT/v4_0_8/INTERRUPT_0.app#//@virtualSignals.0"/>
    <targetVirtualSignal href="../../INTERRUPT/v4_0_8/INTERRUPT_0.app#//@virtualSignals.0"/>
  </connections>
</ResourceModel:App>
