// rea decompile_all
// name: FUN_1005301e0
// address: 0x1005301e0
// body: available
// range: 0x1005301e0-0x1005302b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005301e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_70 [16];
  long local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  
  lVar1 = param_3;
  _swift_conformsToProtocol(param_3,&TargetProtocolDescriptor_100900904);
  if (lVar1 == 0 || param_3 == 0) {
    local_50 = *(undefined1 *)(unaff_x20 + 0x49);
    pcVar2 = FUN_100532540;
  }
  else {
    local_50 = *(undefined1 *)(unaff_x20 + 0x48);
    local_4f = *(undefined1 *)(unaff_x20 + 0x49);
    local_4e = *(undefined1 *)(unaff_x20 + 0x4a);
    local_4d = *(undefined1 *)(unaff_x20 + 0x4b);
    pcVar2 = FUN_10053255c;
  }
  local_60 = param_3;
  uStack_58 = param_4;
  FUN_10052d9ec(param_1,param_2,pcVar2,auStack_70,param_3);
  return;
}

