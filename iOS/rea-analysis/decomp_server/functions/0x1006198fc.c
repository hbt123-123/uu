// rea decompile_all
// name: FUN_1006198fc
// address: 0x1006198fc
// body: available
// range: 0x1006198fc-0x10061999b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006198fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,in_x5,in_x4,0x100904f48,&TargetProtocolRequirement_100904f50)
  ;
  uVar2 = 0;
  FUN_100616218(0,uVar1);
  local_90 = in_x4;
  uStack_88 = in_x5;
  FUN_1006152f0(FUN_10061bbf0,auStack_a0,uVar2);
  return;
}

