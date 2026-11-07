// rea decompile_all
// name: FUN_100625870
// address: 0x100625870
// body: available
// range: 0x100625870-0x100625b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100625870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,long *param_6,long *param_7,long *param_8)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  
  local_90 = *param_8;
  lVar7 = *param_5;
  lVar5 = *param_6;
  lVar9 = *param_7;
  lVar6 = *(long *)(local_90 + 0x50);
  lVar2 = 0;
  local_a0 = param_4;
  local_98 = param_3;
  local_88 = param_8;
  local_80 = param_2;
  local_78 = param_7;
  local_70 = param_1;
  local_68 = param_6;
  __sSqMa(0,lVar6);
  lVar8 = (long)&local_a0 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(lVar9 + 0x50);
  lVar2 = 0;
  __sSqMa(0,lVar12);
  lVar13 = lVar8 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(lVar5 + 0x50);
  lVar2 = 0;
  __sSqMa(0,lVar5);
  lVar11 = lVar13 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar7 + 0x50);
  lVar2 = 0;
  __sSqMa(0,lVar9);
  lVar10 = lVar11 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_100614b6c(0,lVar9);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,uVar3);
  FUN_100617228(lVar10,uVar3,pTVar4);
  lVar7 = *(long *)(lVar9 + -8);
  lVar2 = lVar10;
  (**(code **)(lVar7 + 0x30))(lVar10,1,lVar9);
  if ((int)lVar2 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100625b1c);
    (*pcVar1)();
  }
  (**(code **)(lVar7 + 0x20))(local_70,lVar10,lVar9);
  uVar3 = 0;
  FUN_100614b6c(0,lVar5);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,uVar3);
  FUN_100617228(lVar11,uVar3,pTVar4);
  lVar7 = *(long *)(lVar5 + -8);
  lVar2 = lVar11;
  (**(code **)(lVar7 + 0x30))(lVar11,1,lVar5);
  if ((int)lVar2 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100625b20);
    (*pcVar1)();
  }
  (**(code **)(lVar7 + 0x20))(local_80,lVar11,lVar5);
  uVar3 = 0;
  FUN_100614b6c(0,lVar12);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,uVar3);
  FUN_100617228(lVar13,uVar3,pTVar4);
  lVar5 = *(long *)(lVar12 + -8);
  lVar2 = lVar13;
  (**(code **)(lVar5 + 0x30))(lVar13,1,lVar12);
  if ((int)lVar2 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100625b24);
    (*pcVar1)();
  }
  (**(code **)(lVar5 + 0x20))(local_98,lVar13,lVar12);
  lVar2 = local_90;
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,local_90);
  FUN_100617228(lVar8,lVar2,pTVar4);
  lVar5 = *(long *)(lVar6 + -8);
  lVar2 = lVar8;
  (**(code **)(lVar5 + 0x30))(lVar8,1,lVar6);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 0x20))(local_a0,lVar8,lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100625b28);
  (*pcVar1)();
}

