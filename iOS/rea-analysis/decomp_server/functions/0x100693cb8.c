// rea decompile_all
// name: FUN_100693cb8
// address: 0x100693cb8
// body: available
// range: 0x100693cb8-0x100693d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100693cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined1 auStack_70 [8];
  void *local_68;
  char local_51;
  void *local_50;
  undefined8 uStack_48;
  byte bStack_39;
  void *local_38 [2];
  char local_21;
  
  FUN_100694af0(auStack_70,param_1,param_2);
  puVar1 = auStack_70;
  FUN_100694c28(puVar1,local_38);
  if ((int)puVar1 != 0) {
    do {
      if ((char)bStack_39 < '\0') {
        FUN_100694b70(&local_90,local_50,uStack_48);
      }
      else {
        uStack_88 = uStack_48;
        local_90 = local_50;
        local_80 = (ulong)bStack_39 << 0x38;
      }
      FUN_100694e30(param_3,&local_90);
      if (local_80 < 0) {
        operator_delete(local_90);
      }
      puVar1 = auStack_70;
      FUN_100694c28(puVar1,local_38);
    } while (((ulong)puVar1 & 1) != 0);
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  if ((char)bStack_39 < '\0') {
    operator_delete(local_50);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  return param_3;
}

