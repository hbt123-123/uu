// rea decompile_all
// name: FUN_1003aa83c
// address: 0x1003aa83c
// body: available
// range: 0x1003aa83c-0x1003aa8b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1003aa83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  
  lVar3 = *unaff_x20;
  uVar1 = 0;
  local_60 = param_1;
  uStack_58 = param_2;
  local_50 = param_3;
  FUN_1003ab1b0(0);
  uVar2 = 0;
  FUN_1003de7bc(0,*(undefined8 *)(lVar3 + 0x50));
  FUN_1003d73a0(&local_38,param_4,auStack_70,uVar1,uVar2);
  return local_38;
}

