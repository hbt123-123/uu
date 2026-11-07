// rea decompile_all
// name: FUN_10057b404
// address: 0x10057b404
// body: available
// range: 0x10057b404-0x10057b4d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10057b404(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [72];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x30);
  local_a0 = *(undefined **)(unaff_x20 + 0x28);
  local_88 = *(undefined **)(unaff_x20 + 0x40);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x50);
  local_80 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x58);
  local_60 = *(undefined1 *)(unaff_x20 + 0x68);
  uVar1 = uStack_98;
  puVar3 = local_a0;
  puVar4 = local_88;
  uVar5 = uStack_90;
  uVar2 = local_60;
  local_110 = uStack_70;
  uStack_108 = uStack_68;
  local_100 = local_80;
  uStack_f8 = uStack_78;
  if (local_a0 == (undefined *)0x0) {
    uStack_f8 = 0;
    local_100 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uVar1 = 0;
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    uVar5 = 0xc000000000000000;
    uVar2 = 2;
  }
  FUN_10007f314(&local_a0,auStack_e8,&DAT_100aab4a8,&DAT_10083e020);
  *param_1 = puVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar5;
  param_1[3] = puVar4;
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = uStack_108;
  param_1[6] = local_110;
  *(undefined1 *)(param_1 + 8) = uVar2;
  return;
}

