// rea decompile_all
// name: FUN_100380f5c
// address: 0x100380f5c
// body: available
// range: 0x100380f5c-0x100381027 inclusive
// range: 0x1003810c0-0x1003810f7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_100380f5c(long param_1,ID param_2,undefined1 *param_3,undefined1 *param_4)

{
  ID IVar1;
  undefined1 auStack_78 [30];
  char local_5a;
  char local_59;
  long local_58;
  long *local_50;
  undefined8 *local_40;
  long local_38;
  
  IVar1 = objc_stub::length(param_2);
  if (IVar1 == 0) {
    if (param_4 == (undefined1 *)0x0) {
      return param_3;
    }
    *param_4 = 0;
    return param_3;
  }
  local_38 = *(long *)(param_1 + 0xb8);
  if (local_38 != 0) {
    FUN_100392994();
  }
  local_40 = *(undefined8 **)(param_1 + 200);
  if ((local_40 != (undefined8 *)0x0) && (*(char *)((long)local_40 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_40,*(undefined4 *)(local_40 + 1));
  }
  FUN_100388bbc(&local_5a,param_1,param_2);
  if (local_5a == '\0') {
    if (local_59 == '\0') goto LAB_1003810c0;
    local_50 = &local_58;
  }
  else if (local_58 == 0) {
LAB_1003810c0:
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    goto LAB_1003810c8;
  }
  FUN_10037c13c(auStack_78,local_50);
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 1;
  }
  param_3 = auStack_78;
  FUN_10037c6c8(param_3);
LAB_1003810c8:
  thunk_FUN_10037edac(&local_5a);
  FUN_100385fb0(&local_40);
  FUN_100385098(&local_38);
  return param_3;
}

