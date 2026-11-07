// rea decompile_all
// name: FUN_10007625c
// address: 0x10007625c
// body: available
// range: 0x10007625c-0x1000762cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10007625c(undefined8 param_1,undefined8 param_2)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  TargetProtocolConformanceDescriptor *unaff_x20;
  undefined1 auVar2 [16];
  
  pTVar1 = unaff_x20;
  _swift_conformsToProtocol();
  if (pTVar1 == (TargetProtocolConformanceDescriptor *)0x0 ||
      unaff_x20 == (TargetProtocolConformanceDescriptor *)0x0) {
    unaff_x20 = (TargetProtocolConformanceDescriptor *)0x0;
    FUN_1000767bc(0,param_1,param_2);
    pTVar1 = &TargetProtocolConformanceDescriptor_1000d4c6c;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000d4c6c,unaff_x20);
  }
  auVar2._8_8_ = pTVar1;
  auVar2._0_8_ = unaff_x20;
  return auVar2;
}

