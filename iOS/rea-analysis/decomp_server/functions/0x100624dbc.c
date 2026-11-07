// rea decompile_all
// name: FUN_100624dbc
// address: 0x100624dbc
// body: available
// range: 0x100624dbc-0x100624e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100624dbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  lVar2 = 0;
  __sSqMa();
  puVar6 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  FUN_100614b6c(0,param_3);
  pTVar4 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,uVar3);
  FUN_100617228(puVar6,uVar3,pTVar4);
  lVar2 = *(long *)(param_3 + -8);
  puVar5 = puVar6;
  (**(code **)(lVar2 + 0x30))(puVar6,1,param_3);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar2 + 0x20))(param_1,puVar6,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100624e8c);
  (*pcVar1)();
}

