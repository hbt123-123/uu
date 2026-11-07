// rea decompile_all
// name: FUN_10069f968
// address: 0x10069f968
// body: available
// range: 0x10069f968-0x10069fa57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069f968(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 auStack_68 [40];
  long local_40;
  char local_38;
  
  do {
    local_38 = '\0';
    local_40 = param_1 + 0xf0;
    FUN_100696f64(&local_40);
    if (*(long *)(param_1 + 0x78) == 0) {
      bVar3 = 0;
    }
    else {
      FUN_1006919e4(auStack_68,0x80);
      (**(code **)(**(long **)(param_1 + 0x78) + 0x18))(*(long **)(param_1 + 0x78),auStack_68);
      FUN_1006972a0(&local_40);
      puVar1 = auStack_68;
      FUN_100691fa4(puVar1,0);
      if (puVar1 != (undefined1 *)0x0) {
        puVar1 = auStack_68;
        FUN_100691fa4(puVar1,0);
        puVar2 = auStack_68;
        FUN_100691e98(puVar2);
        FUN_1006a0f38(param_1,puVar1,puVar2,1);
      }
      bVar3 = *(byte *)(param_1 + 0x1b1);
      if ((bVar3 & 1) == 0) {
        FUN_100696cec(param_1 + 0x1b8,900000);
      }
      bVar3 = bVar3 ^ 1;
      FUN_1006919f4(auStack_68);
    }
    if (local_38 == '\x01') {
      FUN_1006972a0(&local_40);
    }
  } while ((bVar3 & 1) != 0);
  return;
}

