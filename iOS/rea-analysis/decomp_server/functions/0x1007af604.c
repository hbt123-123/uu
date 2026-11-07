// rea decompile_all
// name: FUN_1007af604
// address: 0x1007af604
// body: available
// range: 0x1007af604-0x1007af6a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007af604(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_78;
  long local_70;
  undefined1 auStack_68 [56];
  
  lVar1 = param_1;
  FUN_1007ae6e0(param_1,auStack_68,0x38);
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + 0x30;
    lVar2 = lVar1 + ((ulong)(*(byte *)(param_1 + 0x12) >> 2) & 1) * 8;
    local_78 = lVar1;
    local_70 = lVar2;
    FUN_1007ae6e0(lVar2,&local_70,8);
    if (((int)lVar2 != 0) && (FUN_1007ae6e0(lVar1,&local_78,8), (int)lVar1 != 0)) {
      lVar1 = local_70;
      FUN_1007ae6e0(local_70,param_2,8);
      if ((int)lVar1 != 0) {
        FUN_1007ae6e0(local_78,param_3,8);
      }
    }
  }
  return;
}

