// rea decompile_all
// name: FUN_10057bac8
// address: 0x10057bac8
// body: available
// range: 0x10057bac8-0x10057bba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10057bac8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined8 local_68;
  undefined8 uStack_60;
  
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x48);
  local_a0 = *(undefined **)(unaff_x20 + 0x40);
  local_88 = *(undefined **)(unaff_x20 + 0x58);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
  local_68 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x80);
  if (local_a0 == (undefined *)0x0) {
    uVar1 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uVar2 = 3;
    uVar3 = 2;
    uVar6 = 0xc000000000000000;
    uStack_108 = 0;
    local_110 = 0;
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar5 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  else {
    local_80._0_1_ = (undefined1)uVar7;
    local_80._1_1_ = (undefined1)((ulong)uVar7 >> 8);
    uVar1 = uStack_98;
    puVar4 = local_a0;
    puVar5 = local_88;
    uVar6 = uStack_90;
    uVar3 = (undefined1)local_80;
    uVar2 = local_80._1_1_;
    local_110 = local_68;
    uStack_108 = uStack_60;
    local_100 = uStack_78;
    uStack_f8 = uStack_70;
  }
  local_80 = uVar7;
  FUN_10007f314(&local_a0,auStack_e8,&DAT_100aab4a0,&DAT_100837c10);
  *param_1 = puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar6;
  param_1[3] = puVar5;
  *(undefined1 *)(param_1 + 4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x21) = uVar2;
  param_1[8] = uStack_108;
  param_1[7] = local_110;
  param_1[6] = uStack_f8;
  param_1[5] = local_100;
  return;
}

