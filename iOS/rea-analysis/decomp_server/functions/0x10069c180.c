// rea decompile_all
// name: FUN_10069c180
// address: 0x10069c180
// body: available
// range: 0x10069c180-0x10069c22f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010069c214) */

undefined1 * FUN_10069c180(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  ulong local_a0;
  void *local_98 [2];
  char local_81;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long lStack_58;
  long local_50;
  undefined1 local_48 [40];
  
  FUN_10069c3b0(local_48);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_50 = (long)*(char *)(param_1 + 0x17);
  if (local_50 < 0) {
    local_50 = *(long *)(param_1 + 8);
  }
  lStack_58 = param_1;
  FUN_10069c3b0(local_98,param_2);
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a0 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    local_a0 = (ulong)*(byte *)(param_2 + 0x17);
  }
  puVar1 = local_48;
  lStack_a8 = param_2;
  FUN_10069c230(puVar1,&local_70,local_98,&local_c0);
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
  return puVar1;
}

