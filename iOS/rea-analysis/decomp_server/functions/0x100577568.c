// rea decompile_all
// name: FUN_100577568
// address: 0x100577568
// body: available
// range: 0x100577568-0x100577647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100577568(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [80];
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  
  puStack_98 = *(undefined **)(unaff_x20 + 0x28);
  local_a0 = *(undefined **)(unaff_x20 + 0x20);
  local_88 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x48);
  local_80 = *(undefined **)(unaff_x20 + 0x40);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_68 = (undefined1)*(undefined8 *)(unaff_x20 + 0x58);
  uStack_5f = (undefined7)*(undefined8 *)(unaff_x20 + 0x61);
  uStack_58 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x61) >> 0x38);
  local_67 = (undefined7)*(undefined8 *)(unaff_x20 + 0x59);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x59) >> 0x38);
  if (local_a0 == (undefined *)0x0) {
    uVar1 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uVar5 = 2;
    uVar4 = 0xc000000000000000;
    uStack_108 = 0;
    local_110 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar3 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uStack_108 = CONCAT71(uStack_5f,uStack_60);
    local_110 = CONCAT71(local_67,uStack_68);
    uVar1 = uStack_90;
    puVar2 = local_a0;
    puVar3 = local_80;
    uVar4 = local_88;
    puVar6 = puStack_98;
    uVar5 = uStack_58;
    local_100 = uStack_78;
    uStack_f8 = uStack_70;
  }
  FUN_10007f314(&local_a0,auStack_f0,&DAT_100aab4f8,&DAT_100838f20);
  *param_1 = puVar2;
  param_1[1] = puVar6;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  param_1[4] = puVar3;
  param_1[8] = uStack_108;
  param_1[7] = local_110;
  param_1[6] = uStack_f8;
  param_1[5] = local_100;
  *(undefined1 *)(param_1 + 9) = uVar5;
  return;
}

