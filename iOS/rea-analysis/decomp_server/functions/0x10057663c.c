// rea decompile_all
// name: FUN_10057663c
// address: 0x10057663c
// body: available
// range: 0x10057663c-0x10057674f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10057663c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [24];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  _swift_beginAccess(param_4 + 0x50,auStack_b8,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x58);
  local_a0 = *(undefined **)(param_4 + 0x50);
  local_88 = *(undefined **)(param_4 + 0x68);
  uStack_90 = *(undefined8 *)(param_4 + 0x60);
  uStack_78 = *(undefined8 *)(param_4 + 0x78);
  uVar6 = *(undefined8 *)(param_4 + 0x70);
  local_68 = *(undefined8 *)(param_4 + 0x88);
  uStack_70 = *(undefined8 *)(param_4 + 0x80);
  uStack_60 = *(undefined8 *)(param_4 + 0x90);
  if (local_a0 == (undefined *)0x0) {
    uVar1 = 0;
    local_120 = 0x2000200020002;
    uStack_108 = 0;
    local_110 = 0;
    uVar3 = 2;
    uVar5 = 0xc000000000000000;
    uStack_128 = 0;
    local_130 = 0;
    puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  }
  else {
    local_120 = (ulong)CONCAT16((char)((ulong)uVar6 >> 0x18),
                                (uint6)CONCAT14((char)((ulong)uVar6 >> 0x10),
                                                (uint)CONCAT12((char)((ulong)uVar6 >> 8),
                                                               (ushort)(byte)uVar6)));
    local_80._4_1_ = (undefined1)((ulong)uVar6 >> 0x20);
    uVar1 = uStack_98;
    puVar2 = local_a0;
    puVar4 = local_88;
    uVar5 = uStack_90;
    uVar3 = local_80._4_1_;
    local_130 = local_68;
    uStack_128 = uStack_60;
    local_110 = uStack_78;
    uStack_108 = uStack_70;
  }
  local_80 = uVar6;
  FUN_10007f314(&local_a0,auStack_100,&DAT_100aab4c8,&DAT_100837c38);
  *param_1 = puVar2;
  param_1[1] = uVar1;
  param_1[2] = uVar5;
  param_1[3] = puVar4;
  *(uint *)(param_1 + 4) =
       CONCAT13((char)(local_120 >> 0x30),
                CONCAT12((char)(local_120 >> 0x20),
                         CONCAT11((char)(local_120 >> 0x10),(char)local_120)));
  *(undefined1 *)((long)param_1 + 0x24) = uVar3;
  param_1[8] = uStack_128;
  param_1[7] = local_130;
  param_1[6] = uStack_108;
  param_1[5] = local_110;
  return;
}

