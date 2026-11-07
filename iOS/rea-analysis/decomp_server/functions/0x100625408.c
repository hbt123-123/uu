// rea decompile_all
// name: FUN_100625408
// address: 0x100625408
// body: available
// range: 0x100625408-0x100625617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100625408(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  long *param_5,long *param_6)

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
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  
  lVar9 = *param_6;
  lVar5 = *param_4;
  lVar7 = *param_5;
  lVar6 = *(long *)(lVar9 + 0x50);
  lVar2 = 0;
  local_80 = param_3;
  local_78 = param_2;
  local_70 = param_6;
  local_68 = param_1;
  __sSqMa(0,lVar6);
  lVar8 = (long)&local_80 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(lVar7 + 0x50);
  lVar2 = 0;
  __sSqMa(0,lVar11);
  lVar12 = lVar8 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(lVar5 + 0x50);
  lVar2 = 0;
  __sSqMa(0,lVar10);
  lVar7 = lVar12 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_100614b6c(0,lVar10);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,uVar3);
  FUN_100617228(lVar7,uVar3,pTVar4);
  lVar5 = *(long *)(lVar10 + -8);
  lVar2 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,lVar10);
  if ((int)lVar2 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100625610);
    (*pcVar1)();
  }
  (**(code **)(lVar5 + 0x20))(local_68,lVar7,lVar10);
  uVar3 = 0;
  FUN_100614b6c(0,lVar11);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,uVar3);
  FUN_100617228(lVar12,uVar3,pTVar4);
  lVar5 = *(long *)(lVar11 + -8);
  lVar2 = lVar12;
  (**(code **)(lVar5 + 0x30))(lVar12,1,lVar11);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 0x20))(local_78,lVar12,lVar11);
    pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,lVar9);
    FUN_100617228(lVar8,lVar9,pTVar4);
    lVar5 = *(long *)(lVar6 + -8);
    lVar2 = lVar8;
    (**(code **)(lVar5 + 0x30))(lVar8,1,lVar6);
    if ((int)lVar2 != 1) {
      (**(code **)(lVar5 + 0x20))(local_80,lVar8,lVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100625618);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100625614);
  (*pcVar1)();
}

