// rea decompile_all
// name: FUN_1005795c4
// address: 0x1005795c4
// body: available
// range: 0x1005795c4-0x1005796db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005795c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [72];
  undefined1 auStack_c8 [24];
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  _swift_beginAccess(param_4 + 0x28,auStack_c8,0,0);
  uStack_a8 = *(undefined8 *)(param_4 + 0x30);
  local_b0 = *(undefined **)(param_4 + 0x28);
  local_98 = *(undefined **)(param_4 + 0x40);
  uStack_a0 = *(undefined8 *)(param_4 + 0x38);
  uStack_88 = *(undefined8 *)(param_4 + 0x50);
  uVar8 = *(undefined8 *)(param_4 + 0x48);
  local_78 = *(undefined8 *)(param_4 + 0x60);
  uStack_80 = *(undefined8 *)(param_4 + 0x58);
  uStack_70 = *(undefined8 *)(param_4 + 0x68);
  if (local_b0 == (undefined *)0x0) {
    uVar1 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uVar3 = 2;
    uVar5 = 0xc000000000000000;
    uVar6 = 2;
    uVar7 = 2;
    uStack_128 = 0;
    local_130 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  else {
    local_90._0_1_ = (undefined1)uVar8;
    local_90._1_1_ = (undefined1)((ulong)uVar8 >> 8);
    local_90._2_1_ = (undefined1)((ulong)uVar8 >> 0x10);
    uVar1 = uStack_a8;
    puVar2 = local_b0;
    puVar4 = local_98;
    uVar5 = uStack_a0;
    uVar3 = (undefined1)local_90;
    uVar6 = local_90._1_1_;
    uVar7 = local_90._2_1_;
    local_130 = local_78;
    uStack_128 = uStack_70;
    local_120 = uStack_88;
    uStack_118 = uStack_80;
  }
  local_90 = uVar8;
  FUN_10007f314(&local_b0,auStack_110,&DAT_100aab4b8,&DAT_100837c28);
  *param_1 = puVar2;
  param_1[1] = uVar1;
  param_1[2] = uVar5;
  param_1[3] = puVar4;
  *(undefined1 *)(param_1 + 4) = uVar3;
  *(undefined1 *)((long)param_1 + 0x21) = uVar6;
  *(undefined1 *)((long)param_1 + 0x22) = uVar7;
  param_1[8] = uStack_128;
  param_1[7] = local_130;
  param_1[6] = uStack_118;
  param_1[5] = local_120;
  return;
}

