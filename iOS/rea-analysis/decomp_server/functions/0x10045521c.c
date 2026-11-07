// rea decompile_all
// name: FUN_10045521c
// address: 0x10045521c
// body: available
// range: 0x10045521c-0x1004552c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10045521c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x90;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  local_70 = *(long *)(param_1 + 0x98);
  if (local_70 != 0) {
    local_78 = (undefined4)*(undefined8 *)(param_1 + 0x90);
    uStack_74 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0xa8);
    local_68 = *(undefined8 *)(param_1 + 0xa0);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_100460688();
    (*pcVar2)(&local_78,9,&DAT_1009c3ae8,lVar1,param_3,param_4);
  }
  return;
}

