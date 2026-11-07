// rea decompile_all
// name: FUN_10038b938
// address: 0x10038b938
// body: available
// range: 0x10038b938-0x10038ba27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10038b938(long param_1,ID param_2)

{
  ID IVar1;
  undefined4 uVar2;
  char local_4a;
  byte local_49;
  ulong local_48;
  ulong *local_40;
  undefined8 *local_30;
  long local_28;
  
  local_28 = *(long *)(param_1 + 0xb8);
  if (local_28 != 0) {
    FUN_100392994();
  }
  local_30 = *(undefined8 **)(param_1 + 200);
  if ((local_30 != (undefined8 *)0x0) && (*(char *)((long)local_30 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_30,*(undefined4 *)(local_30 + 1));
  }
  FUN_10038774c(param_1);
  if ((*(char *)(param_1 + 0xd8) != '\x01') || (IVar1 = objc_stub::length(param_2), IVar1 == 0)) {
    uVar2 = 0;
    goto LAB_10038ba04;
  }
  FUN_100388b1c(&local_4a,param_1,param_2);
  if (local_4a == '\0') {
    local_48 = (ulong)local_49;
    if (3 < local_48) {
      local_40 = &local_48;
      goto LAB_10038b9f4;
    }
LAB_10038b9e4:
    uVar2 = 0;
  }
  else {
    if (local_48 < 4) goto LAB_10038b9e4;
LAB_10038b9f4:
    uVar2 = *(undefined4 *)((long)local_40 + (local_48 - 4));
  }
  thunk_FUN_10037edac(&local_4a);
LAB_10038ba04:
  FUN_100385fb0(&local_30);
  FUN_100385098(&local_28);
  return uVar2;
}

