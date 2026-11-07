// rea decompile_all
// name: FUN_100439d30
// address: 0x100439d30
// body: available
// range: 0x100439d30-0x100439de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100439d30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x118);
  puVar2 = puVar1;
  _swift_beginAccess(puVar1,auStack_58,0,0);
  uStack_68 = *(ulong *)(param_1 + 0x150);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_98 = *(undefined8 *)(param_1 + 0x120);
    local_a0 = *puVar1;
    uStack_88 = *(undefined8 *)(param_1 + 0x130);
    uStack_90 = *(undefined8 *)(param_1 + 0x128);
    uStack_78 = *(undefined8 *)(param_1 + 0x140);
    local_80 = *(undefined8 *)(param_1 + 0x138);
    local_70 = *(undefined8 *)(param_1 + 0x148);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_10043e46c();
    (*pcVar3)(&local_a0,0xb,&DAT_1009c2330,puVar2,param_3,param_4);
  }
  return;
}

