// rea decompile_all
// name: FUN_100075338
// address: 0x100075338
// body: available
// range: 0x100075338-0x1000753bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100075338(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 auStack_4c [4];
  undefined8 local_48;
  
  puVar1 = PTR___ss5Int32VN_100995c78;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x20);
    local_48 = param_2;
    do {
      FUN_10006dac0(auStack_4c,*puVar3,&DAT_100a75a60,&DAT_100809b10,puVar1);
      lVar2 = lVar2 + -1;
      param_2 = local_48;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  return param_2;
}

