// rea decompile_all
// name: FUN_100578c14
// address: 0x100578c14
// body: available
// range: 0x100578c14-0x100578cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100578c14(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [64];
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x28);
  local_80 = *(undefined **)(unaff_x20 + 0x20);
  local_68 = *(undefined **)(unaff_x20 + 0x38);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x48);
  local_60 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = uStack_78;
  puVar2 = local_80;
  puVar3 = local_68;
  uVar4 = uStack_70;
  local_e0 = uStack_50;
  uStack_d8 = uStack_48;
  local_d0 = local_60;
  uStack_c8 = uStack_58;
  if (local_80 == (undefined *)0x0) {
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uVar1 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar3 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    uVar4 = 0xc000000000000000;
  }
  FUN_10007f314(&local_80,auStack_c0,&DAT_100aab4c0,&DAT_100837c30);
  *param_1 = puVar2;
  param_1[1] = uVar1;
  param_1[2] = uVar4;
  param_1[3] = puVar3;
  param_1[5] = uStack_c8;
  param_1[4] = local_d0;
  param_1[7] = uStack_d8;
  param_1[6] = local_e0;
  return;
}

