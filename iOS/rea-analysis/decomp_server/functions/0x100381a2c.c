// rea decompile_all
// name: FUN_100381a2c
// address: 0x100381a2c
// body: available
// range: 0x100381a2c-0x100381afb inclusive
// range: 0x100381b94-0x100381bcf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100381a2c(undefined8 param_1,long param_2,ID param_3,undefined1 *param_4)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 uVar2;
  undefined1 auStack_88 [30];
  char local_6a;
  char local_69;
  long local_68;
  long *local_60;
  undefined8 *local_50;
  long local_48;
  
  IVar1 = objc_stub::length(param_3);
  if (IVar1 == 0) {
    if (param_4 == (undefined1 *)0x0) {
      return param_1;
    }
    *param_4 = 0;
    return param_1;
  }
  local_48 = *(long *)(param_2 + 0xb8);
  uVar2 = extraout_d0;
  if (local_48 != 0) {
    FUN_100392994();
  }
  local_50 = *(undefined8 **)(param_2 + 200);
  if ((local_50 != (undefined8 *)0x0) && (*(char *)((long)local_50 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_50,*(undefined4 *)(local_50 + 1));
  }
  FUN_100388bbc(&local_6a,param_2,param_3);
  if (local_6a == '\0') {
    if (local_69 == '\0') goto LAB_100381b94;
    local_60 = &local_68;
  }
  else if (local_68 == 0) {
LAB_100381b94:
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
    goto LAB_100381b9c;
  }
  FUN_10037c13c(auStack_88,local_60);
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 1;
  }
  FUN_10037c1dc(auStack_88);
  param_1 = uVar2;
LAB_100381b9c:
  thunk_FUN_10037edac(&local_6a);
  FUN_100385fb0(&local_50);
  FUN_100385098(&local_48);
  return param_1;
}

