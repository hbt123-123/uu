// rea decompile_all
// name: FUN_1000aee40
// address: 0x1000aee40
// body: available
// range: 0x1000aee40-0x1000af06b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000aee40(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_260 [16];
  undefined8 *local_250;
  ulong local_238;
  ulong uStack_230;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  long local_150;
  long lStack_148;
  undefined *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = *unaff_x20;
  local_150 = unaff_x20[1];
  lVar6 = *(long *)(lVar1 + 0x10);
  lStack_148 = lVar1;
  FUN_1000133cc(&lStack_148,&local_140,&DAT_100104d48,&USHORT_1000d6ae0);
  FUN_1000133cc(&local_150,&local_140,&DAT_100104d68,&USHORT_1000d6ae8);
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)(lVar1 + 0x20);
    do {
      uStack_138 = puVar7[1];
      puVar8 = (undefined *)*puVar7;
      uStack_128 = puVar7[3];
      local_130 = puVar7[2];
      uStack_118 = puVar7[5];
      uStack_120 = puVar7[4];
      uStack_108 = puVar7[7];
      local_110 = puVar7[6];
      uStack_f8 = puVar7[9];
      uStack_100 = puVar7[8];
      uStack_e8 = puVar7[0xb];
      local_f0 = puVar7[10];
      local_d8 = puVar7[0xd];
      uStack_e0 = puVar7[0xc];
      uStack_c8 = puVar7[0xf];
      local_d0 = puVar7[0xe];
      uStack_b8 = puVar7[0x11];
      uStack_c0 = puVar7[0x10];
      uStack_a8 = puVar7[0x13];
      local_b0 = puVar7[0x12];
      uStack_98 = puVar7[0x15];
      uStack_a0 = puVar7[0x14];
      uStack_88 = puVar7[0x17];
      local_90 = puVar7[0x16];
      uStack_78 = puVar7[0x19];
      uStack_80 = puVar7[0x18];
      puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
      local_140 = puVar8;
      if ((undefined *)0x1 < puVar8) {
        _swift_bridgeObjectRetain();
        puVar5 = puVar8;
      }
      local_250 = &local_168;
      local_168 = param_1;
      uStack_160 = param_2;
      local_158 = param_3;
      FUN_10006ff98(&local_140,&local_238);
      uVar4 = 0;
      FUN_1000b38d0(FUN_1000b2a38,auStack_260,puVar5);
      _swift_bridgeObjectRelease(puVar5);
      if ((uVar4 & 1) != 0) {
        FUN_10001fc18(&lStack_148,&DAT_100104d48,&USHORT_1000d6ae0);
        FUN_10001fc18(&local_150,&DAT_100104d68,&USHORT_1000d6ae8);
        uVar3 = local_d0;
        uVar2 = local_d8;
        uVar4 = local_d8 & 0xffffffffffff;
        if ((local_d0 & 0x2000000000000000) != 0) {
          uVar4 = local_d0 >> 0x38 & 0xf;
        }
        if (uVar4 == 0) {
          FUN_10006ff98(&local_140,&local_238);
          FUN_100084a5c(&local_238,&local_140);
          FUN_10008efb4(&local_140);
          FUN_10008efb4(&local_140);
        }
        else {
          _swift_bridgeObjectRetain();
          FUN_10008efb4(&local_140);
          local_238 = uVar2;
          uStack_230 = uVar3;
        }
        goto LAB_1000af04c;
      }
      FUN_10008efb4(&local_140);
      puVar7 = puVar7 + 0x1a;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  FUN_10001fc18(&lStack_148,&DAT_100104d48,&USHORT_1000d6ae0);
  FUN_10001fc18(&local_150,&DAT_100104d68,&USHORT_1000d6ae8);
  local_238 = 0;
  uStack_230 = 0;
LAB_1000af04c:
  auVar9._8_8_ = uStack_230;
  auVar9._0_8_ = local_238;
  return auVar9;
}

