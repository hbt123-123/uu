// rea decompile_all
// name: FUN_1003129a0
// address: 0x1003129a0
// body: available
// range: 0x1003129a0-0x100312a43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003129a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar4 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x58);
  puVar2 = &DAT_100819940;
  local_60 = uVar4;
  uStack_58 = uVar1;
  _swift_getKeyPath(&DAT_100819940,&local_60);
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar1,uVar4,0x1008f97a8,&TargetProtocolRequirement_1008f97b8)
  ;
  uVar4 = 0;
  __sSqMa(0,uVar3);
  FUN_1002c6bac(param_1,FUN_100312a44,puVar2,uVar4);
  _swift_release(puVar2);
  return;
}

