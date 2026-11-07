// rea decompile_all
// name: FUN_100625dcc
// address: 0x100625dcc
// body: available
// range: 0x100625dcc-0x10062612f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100625dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6,long *param_7,long *param_8,long *param_9,
                  long *param_10)

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
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long *local_a0;
  long local_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  
  local_a0 = param_10;
  local_b0 = *param_10;
  lVar6 = *param_6;
  lVar9 = *param_7;
  lVar5 = *param_8;
  local_88 = param_9;
  lVar7 = *param_9;
  local_98 = *(long *)(local_b0 + 0x50);
  lVar2 = 0;
  local_c0 = param_5;
  local_b8 = param_4;
  local_90 = param_3;
  local_80 = param_2;
  local_78 = param_8;
  local_70 = param_1;
  local_68 = param_7;
  __sSqMa();
  lVar13 = (long)&local_c0 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(lVar7 + 0x50);
  lVar2 = 0;
  local_a8 = lVar13;
  __sSqMa(0,lVar11);
  lVar13 = lVar13 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(lVar5 + 0x50);
  lVar2 = 0;
  __sSqMa(0,lVar5);
  lVar8 = lVar13 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(lVar9 + 0x50);
  lVar2 = 0;
  __sSqMa(0,lVar10);
  lVar9 = lVar8 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar6 + 0x50);
  lVar2 = 0;
  __sSqMa(0,lVar7);
  lVar12 = lVar9 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_100614b6c(0,lVar7);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,uVar3);
  FUN_100617228(lVar12,uVar3,pTVar4);
  lVar6 = *(long *)(lVar7 + -8);
  lVar2 = lVar12;
  (**(code **)(lVar6 + 0x30))(lVar12,1,lVar7);
  if ((int)lVar2 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100626120);
    (*pcVar1)();
  }
  (**(code **)(lVar6 + 0x20))(local_70,lVar12,lVar7);
  uVar3 = 0;
  FUN_100614b6c(0,lVar10);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,uVar3);
  FUN_100617228(lVar9,uVar3,pTVar4);
  lVar6 = *(long *)(lVar10 + -8);
  lVar2 = lVar9;
  (**(code **)(lVar6 + 0x30))(lVar9,1,lVar10);
  if ((int)lVar2 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100626124);
    (*pcVar1)();
  }
  (**(code **)(lVar6 + 0x20))(local_80,lVar9,lVar10);
  uVar3 = 0;
  FUN_100614b6c(0,lVar5);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,uVar3);
  FUN_100617228(lVar8,uVar3,pTVar4);
  lVar6 = *(long *)(lVar5 + -8);
  lVar2 = lVar8;
  (**(code **)(lVar6 + 0x30))(lVar8,1,lVar5);
  if ((int)lVar2 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100626128);
    (*pcVar1)();
  }
  (**(code **)(lVar6 + 0x20))(local_90,lVar8,lVar5);
  uVar3 = 0;
  FUN_100614b6c(0,lVar11);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,uVar3);
  FUN_100617228(lVar13,uVar3,pTVar4);
  lVar5 = *(long *)(lVar11 + -8);
  lVar2 = lVar13;
  (**(code **)(lVar5 + 0x30))(lVar13,1,lVar11);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 0x20))(local_b8,lVar13,lVar11);
    lVar2 = local_b0;
    pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,local_b0);
    lVar13 = local_a8;
    FUN_100617228(local_a8,lVar2,pTVar4);
    lVar2 = local_98;
    lVar6 = *(long *)(local_98 + -8);
    lVar5 = lVar13;
    (**(code **)(lVar6 + 0x30))(lVar13,1,local_98);
    if ((int)lVar5 != 1) {
      (**(code **)(lVar6 + 0x20))(local_c0,lVar13,lVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100626130);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10062612c);
  (*pcVar1)();
}

