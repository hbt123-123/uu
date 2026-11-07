// rea decompile_all
// name: FUN_100597c20
// address: 0x100597c20
// body: available
// range: 0x100597c20-0x100597cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100597c20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined8 local_78;
  long lStack_70;
  undefined1 local_68;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x50;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x70);
  if (lStack_70 != 1) {
    local_68 = *(undefined1 *)(param_1 + 0x78);
    local_78 = *(undefined8 *)(param_1 + 0x68);
    uStack_88 = *(undefined8 *)(param_1 + 0x58);
    local_90 = *(undefined8 *)(param_1 + 0x50);
    local_80 = (undefined1)*(undefined8 *)(param_1 + 0x60);
    local_7f = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x60) >> 8);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1005ab544();
    (*pcVar2)(&local_90,0x16,&DAT_1009d5408,lVar1,param_3,param_4);
  }
  return;
}

