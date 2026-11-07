// rea decompile_all
// name: FUN_10045509c
// address: 0x10045509c
// body: available
// range: 0x10045509c-0x10045515b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10045509c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x20;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x40);
  if (uStack_60 >> 0x3c < 0xf) {
    local_68 = *(undefined8 *)(param_1 + 0x38);
    local_80 = (undefined4)*(undefined8 *)(param_1 + 0x20);
    uStack_7c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
    local_78 = (undefined4)*(undefined8 *)(param_1 + 0x28);
    uStack_74 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
    local_70 = (undefined4)*(undefined8 *)(param_1 + 0x30);
    uStack_6c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_10046058c();
    (*pcVar2)(&local_80,4,&DAT_1009c3a50,lVar1,param_3,param_4);
  }
  return;
}

