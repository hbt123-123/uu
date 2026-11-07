// rea decompile_all
// name: FUN_1000ae94c
// address: 0x1000ae94c
// body: available
// range: 0x1000ae94c-0x1000aebd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000ae94c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  long *unaff_x20;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_280 [16];
  undefined8 *local_270;
  long local_260;
  undefined *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 auStack_238 [208];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *local_80;
  long local_78;
  long alStack_70 [2];
  
  lVar1 = *unaff_x20;
  local_78 = unaff_x20[1];
  uVar9 = *(ulong *)(lVar1 + 0x10);
  local_250 = param_2;
  uStack_248 = param_3;
  alStack_70[0] = lVar1;
  FUN_1000133cc(alStack_70,&local_150,&DAT_100104d48,&USHORT_1000d6ae0);
  FUN_1000133cc(&local_78,&local_150,&DAT_100104d68,&USHORT_1000d6ae8);
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (uVar9 != 0) {
    uVar7 = 0;
    local_260 = lVar1 + 0x20;
    do {
      puVar5 = (undefined8 *)(local_260 + uVar7 * 0xd0);
      uVar8 = uVar7;
      local_258 = puVar6;
      while( true ) {
        if (uVar9 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000aebd0);
          (*pcVar2)();
        }
        uStack_148 = puVar5[1];
        local_150 = *puVar5;
        uStack_138 = puVar5[3];
        local_140 = puVar5[2];
        uStack_128 = puVar5[5];
        uVar10 = puVar5[4];
        uStack_118 = puVar5[7];
        local_120 = puVar5[6];
        uStack_108 = puVar5[9];
        uStack_110 = puVar5[8];
        uStack_f8 = puVar5[0xb];
        local_100 = puVar5[10];
        uStack_e8 = puVar5[0xd];
        uStack_f0 = puVar5[0xc];
        uStack_d8 = puVar5[0xf];
        local_e0 = puVar5[0xe];
        uStack_c8 = puVar5[0x11];
        uStack_d0 = puVar5[0x10];
        uStack_b8 = puVar5[0x13];
        local_c0 = puVar5[0x12];
        uStack_a8 = puVar5[0x15];
        uStack_b0 = puVar5[0x14];
        uStack_98 = puVar5[0x17];
        local_a0 = puVar5[0x16];
        uStack_88 = puVar5[0x19];
        uStack_90 = puVar5[0x18];
        uVar7 = uVar8 + 1;
        local_130 = uVar10;
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000aebd4);
          (*pcVar2)();
        }
        uStack_160 = local_250;
        local_158 = uStack_248;
        local_270 = &local_168;
        local_168 = param_1;
        FUN_10006ff98(&local_150,auStack_238);
        _swift_bridgeObjectRetain(uVar10);
        uVar3 = 0;
        FUN_1000b3814(FUN_10008f108,auStack_280,uVar10);
        _swift_bridgeObjectRelease(uVar10);
        puVar6 = local_258;
        if ((uVar3 & 1) != 0) break;
        FUN_10008efb4(&local_150);
        uVar8 = uVar8 + 1;
        puVar5 = puVar5 + 0x1a;
        puVar6 = local_258;
        if (uVar7 == uVar9) goto LAB_1000aeb78;
      }
      puVar4 = local_258;
      _swift_isUniquelyReferenced_nonNull_native();
      local_80 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        FUN_100079958(0,*(long *)(puVar6 + 0x10) + 1,1);
      }
      uVar8 = *(ulong *)(local_80 + 0x10);
      if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar8) {
        FUN_100079958(1 < *(ulong *)(local_80 + 0x18),uVar8 + 1,1);
      }
      *(ulong *)(local_80 + 0x10) = uVar8 + 1;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x28) = uStack_148;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x20) = local_150;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x58) = uStack_118;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x50) = local_120;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x68) = uStack_108;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x60) = uStack_110;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x38) = uStack_138;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x30) = local_140;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x48) = uStack_128;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x40) = local_130;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x98) = uStack_d8;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x90) = local_e0;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0xa8) = uStack_c8;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0xa0) = uStack_d0;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x78) = uStack_f8;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x70) = local_100;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x88) = uStack_e8;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0x80) = uStack_f0;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0xd8) = uStack_98;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0xd0) = local_a0;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0xe8) = uStack_88;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0xe0) = uStack_90;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0xb8) = uStack_b8;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0xb0) = local_c0;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 200) = uStack_a8;
      *(undefined8 *)(local_80 + uVar8 * 0xd0 + 0xc0) = uStack_b0;
      puVar6 = local_80;
    } while (uVar7 != uVar9);
  }
LAB_1000aeb78:
  FUN_10001fc18(alStack_70,&DAT_100104d48,&USHORT_1000d6ae0);
  FUN_10001fc18(&local_78,&DAT_100104d68,&USHORT_1000d6ae8);
  return puVar6;
}

