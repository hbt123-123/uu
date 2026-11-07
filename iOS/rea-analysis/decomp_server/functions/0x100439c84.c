// rea decompile_all
// name: FUN_100439c84
// address: 0x100439c84
// body: available
// range: 0x100439c84-0x100439d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100439c84(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xd0;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0xe0);
  if (uStack_60 >> 0x3c < 0xf) {
    local_68 = *(undefined8 *)(param_1 + 0xd8);
    local_70 = (undefined4)*(undefined8 *)(param_1 + 0xd0);
    uStack_6c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x20);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_10043cfd8();
    (*pcVar2)(&local_70,7,&DAT_1009bf918,lVar1,param_3,param_4);
  }
  return;
}

