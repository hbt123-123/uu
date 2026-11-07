// rea decompile_all
// name: FUN_100625078
// address: 0x100625078
// body: available
// range: 0x100625078-0x1006251e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100625078(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *param_4;
  lVar9 = *param_3;
  lVar6 = *(long *)(lVar8 + 0x50);
  lVar2 = 0;
  __sSqMa(0,lVar6);
  puVar7 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(lVar9 + 0x50);
  lVar2 = 0;
  __sSqMa(0,lVar10);
  lVar11 = (long)puVar7 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_100614b6c(0,lVar10);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,uVar3);
  FUN_100617228(lVar11,uVar3,pTVar4);
  lVar9 = *(long *)(lVar10 + -8);
  lVar2 = lVar11;
  (**(code **)(lVar9 + 0x30))(lVar11,1,lVar10);
  if ((int)lVar2 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006251e4);
    (*pcVar1)();
  }
  (**(code **)(lVar9 + 0x20))(param_1,lVar11,lVar10);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,lVar8);
  FUN_100617228(puVar7,lVar8,pTVar4);
  lVar2 = *(long *)(lVar6 + -8);
  puVar5 = puVar7;
  (**(code **)(lVar2 + 0x30))(puVar7,1,lVar6);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar2 + 0x20))(param_2,puVar7,lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006251e8);
  (*pcVar1)();
}

