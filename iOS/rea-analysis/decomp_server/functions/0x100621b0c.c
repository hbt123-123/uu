// rea decompile_all
// name: FUN_100621b0c
// address: 0x100621b0c
// body: available
// range: 0x100621b0c-0x100621dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100621b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar2 = 0xff;
  local_c8 = param_12;
  uStack_c0 = param_16;
  local_e0 = param_4;
  local_d0 = param_3;
  local_b8 = param_8;
  local_b0 = param_2;
  local_98 = param_7;
  local_88 = param_1;
  local_78 = param_6;
  local_70 = param_5;
  _swift_getAssociatedTypeWitness();
  lVar3 = 0;
  local_d8 = lVar2;
  __sSqMa();
  lVar9 = (long)&local_e0 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0xff;
  local_a8 = param_11;
  uStack_a0 = param_15;
  _swift_getAssociatedTypeWitness
            (0xff,param_15,param_11,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar2 = 0;
  __sSqMa(0,lVar3);
  lVar8 = lVar9 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xff;
  local_80 = param_14;
  local_90 = param_10;
  _swift_getAssociatedTypeWitness
            (0xff,param_14,param_10,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar2 = 0;
  __sSqMa(0,lVar4);
  lVar6 = lVar8 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_13,param_9,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar2 = 0;
  __sSqMa(0,lVar5);
  lVar10 = lVar6 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100617228(lVar10,param_9,param_13);
  lVar7 = *(long *)(lVar5 + -8);
  lVar2 = lVar10;
  (**(code **)(lVar7 + 0x30))(lVar10,1,lVar5);
  if ((int)lVar2 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100621db8);
    (*pcVar1)();
  }
  (**(code **)(lVar7 + 0x20))(local_88,lVar10,lVar5);
  FUN_100617228(lVar6,local_90,local_80);
  lVar5 = *(long *)(lVar4 + -8);
  lVar2 = lVar6;
  (**(code **)(lVar5 + 0x30))(lVar6,1,lVar4);
  if ((int)lVar2 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100621dbc);
    (*pcVar1)();
  }
  (**(code **)(lVar5 + 0x20))(local_b0,lVar6,lVar4);
  FUN_100617228(lVar8,local_a8,uStack_a0);
  lVar4 = *(long *)(lVar3 + -8);
  lVar2 = lVar8;
  (**(code **)(lVar4 + 0x30))(lVar8,1,lVar3);
  if ((int)lVar2 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100621dc0);
    (*pcVar1)();
  }
  (**(code **)(lVar4 + 0x20))(local_d0,lVar8,lVar3);
  FUN_100617228(lVar9,local_c8,uStack_c0);
  lVar2 = local_d8;
  lVar4 = *(long *)(local_d8 + -8);
  lVar3 = lVar9;
  (**(code **)(lVar4 + 0x30))(lVar9,1,local_d8);
  if ((int)lVar3 != 1) {
    (**(code **)(lVar4 + 0x20))(local_e0,lVar9,lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100621dc4);
  (*pcVar1)();
}

