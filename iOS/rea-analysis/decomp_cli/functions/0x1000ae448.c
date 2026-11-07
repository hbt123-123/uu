// rea decompile_all
// name: FUN_1000ae448
// address: 0x1000ae448
// body: available
// range: 0x1000ae448-0x1000ae6c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000ae448(ulong param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *unaff_x20;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_260 [16];
  ulong *local_250;
  ulong local_238;
  ulong uStack_230;
  ulong local_168;
  ulong uStack_160;
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
  lVar7 = *(long *)(lVar1 + 0x10);
  lStack_148 = lVar1;
  FUN_1000133cc(&lStack_148,&local_140,&DAT_100104d48,&USHORT_1000d6ae0);
  FUN_1000133cc(&local_150,&local_140,&DAT_100104d68,&USHORT_1000d6ae8);
  if (lVar7 != 0) {
    puVar9 = (undefined8 *)(lVar1 + 0x20);
    do {
      uStack_138 = puVar9[1];
      puVar10 = (undefined *)*puVar9;
      uStack_128 = puVar9[3];
      local_130 = puVar9[2];
      uStack_118 = puVar9[5];
      uStack_120 = puVar9[4];
      uStack_108 = puVar9[7];
      local_110 = puVar9[6];
      uStack_f8 = puVar9[9];
      uStack_100 = puVar9[8];
      uStack_e8 = puVar9[0xb];
      local_f0 = puVar9[10];
      local_d8 = puVar9[0xd];
      uStack_e0 = puVar9[0xc];
      uStack_c8 = puVar9[0xf];
      local_d0 = puVar9[0xe];
      uStack_b8 = puVar9[0x11];
      uStack_c0 = puVar9[0x10];
      uStack_a8 = puVar9[0x13];
      local_b0 = puVar9[0x12];
      uStack_98 = puVar9[0x15];
      uStack_a0 = puVar9[0x14];
      uStack_88 = puVar9[0x17];
      local_90 = puVar9[0x16];
      uStack_78 = puVar9[0x19];
      uStack_80 = puVar9[0x18];
      puVar5 = PTR___swiftEmptyArrayStorage_1000f0740;
      local_140 = puVar10;
      if ((undefined *)0x1 < puVar10) {
        _swift_bridgeObjectRetain();
        puVar5 = puVar10;
      }
      local_158 = (undefined1)param_3;
      local_250 = &local_168;
      local_168 = param_1;
      uStack_160 = param_2;
      FUN_10006ff98(&local_140,&local_238);
      uVar4 = 0;
      FUN_1000b38d0(FUN_1000b0bf8,auStack_260,puVar5);
      _swift_bridgeObjectRelease(puVar5);
      if ((uVar4 & 1) != 0) {
        FUN_10001fc18(&lStack_148,&DAT_100104d48,&USHORT_1000d6ae0);
        FUN_10001fc18(&local_150,&DAT_100104d68,&USHORT_1000d6ae8);
        uVar6 = local_d0;
        uVar8 = local_d8;
        uVar3 = uStack_100;
        uVar2 = uStack_108;
        _swift_bridgeObjectRetain(uStack_100);
        FUN_1000979e4(param_1,param_2,param_3);
        local_238 = param_1;
        uStack_230 = param_2;
        __sSS6appendyySSF(0x3c20,0xe200000000000000);
        uVar4 = uVar8 & 0xffffffffffff;
        if ((uVar6 & 0x2000000000000000) != 0) {
          uVar4 = uVar6 >> 0x38 & 0xf;
        }
        if (uVar4 == 0) {
          FUN_100084a5c(&local_168,&local_140);
          uVar6 = uStack_160;
          uVar8 = local_168;
        }
        else {
          _swift_bridgeObjectRetain(uVar6);
        }
        __sSS6appendyySSF(uVar8,uVar6);
        _swift_bridgeObjectRelease(uVar6);
        __sSS6appendyySSF(0x20203e,0xe300000000000000);
        __sSS6appendyySSF(uVar2,uVar3);
        _swift_bridgeObjectRelease(uVar3);
        FUN_10008efb4(&local_140);
        goto LAB_1000ae6a4;
      }
      FUN_10008efb4(&local_140);
      puVar9 = puVar9 + 0x1a;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  FUN_10001fc18(&lStack_148,&DAT_100104d48,&USHORT_1000d6ae0);
  FUN_10001fc18(&local_150,&DAT_100104d68,&USHORT_1000d6ae8);
  local_238 = 0;
  uStack_230 = 0xe000000000000000;
LAB_1000ae6a4:
  auVar11._8_8_ = uStack_230;
  auVar11._0_8_ = local_238;
  return auVar11;
}

