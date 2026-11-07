// rea decompile_all
// name: FUN_10038204c
// address: 0x10038204c
// body: available
// range: 0x10038204c-0x100382103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10038204c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  char local_4a;
  byte local_49;
  ulong local_48;
  long local_30;
  undefined8 local_28;
  
  local_30 = *(long *)(param_1 + 0xb8);
  local_28 = param_2;
  if (local_30 != 0) {
    FUN_100392994();
  }
  FUN_10038774c(param_1);
  if ((*(byte *)(param_1 + 0xd8) & 1) == 0) {
    if (*(long *)(param_1 + 0xb0) == 0) {
      uVar1 = *(ulong *)(param_1 + 0x68);
      FUN_100385ff8(uVar1,&local_28);
    }
    else {
      uVar1 = *(ulong *)(param_1 + 0x70);
      FUN_100385ff8(uVar1,&local_28);
    }
  }
  else {
    FUN_100388bd0(&local_4a,param_1,param_2);
    uVar1 = (ulong)local_49;
    if (local_4a != '\0') {
      uVar1 = local_48;
    }
    thunk_FUN_10037edac(&local_4a);
  }
  FUN_100385098(&local_30);
  return uVar1 != 0;
}

