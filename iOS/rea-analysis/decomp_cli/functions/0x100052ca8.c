// rea decompile_all
// name: FUN_100052ca8
// address: 0x100052ca8
// body: available
// range: 0x100052ca8-0x100052ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100052ca8(void)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 auStack_1c8 [168];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  puVar1 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (*(undefined **)(unaff_x20 + 0x58) != (undefined *)0x0) {
    puVar1 = *(undefined **)(unaff_x20 + 0x58);
  }
  uVar8 = *(ulong *)(puVar1 + 0x10);
  _swift_bridgeObjectRetain();
  if (uVar8 != 0) {
    uVar5 = 0;
    do {
      puVar9 = (undefined8 *)(puVar1 + uVar5 * 0xa8 + 0x20);
      uVar10 = uVar5;
LAB_100052d24:
      if (*(ulong *)(puVar1 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100052ee8);
        (*pcVar3)();
      }
      uStack_118 = puVar9[1];
      local_120 = *puVar9;
      uStack_108 = puVar9[3];
      local_110 = puVar9[2];
      uStack_f8 = puVar9[5];
      local_100 = puVar9[4];
      uStack_e8 = puVar9[7];
      local_f0 = puVar9[6];
      uStack_d8 = puVar9[9];
      uStack_e0 = puVar9[8];
      uStack_c8 = puVar9[0xb];
      local_d0 = puVar9[10];
      uStack_b8 = puVar9[0xd];
      uStack_c0 = puVar9[0xc];
      uStack_a8 = puVar9[0xf];
      local_b0 = puVar9[0xe];
      uStack_98 = puVar9[0x11];
      local_a0 = puVar9[0x10];
      uStack_88 = puVar9[0x13];
      local_90 = puVar9[0x12];
      local_80 = puVar9[0x14];
      if ((char)local_120 == '\x01') {
        uVar7 = 0xe600000000000000;
        uVar5 = 0x6e6f6974706f;
LAB_100052d94:
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar5,uVar7,0x6e6f697469736f70,0xea00000000006c61,0);
        FUN_100052a44(&local_120,auStack_1c8);
        _swift_bridgeObjectRelease(uVar7);
        if ((uVar5 & 1) != 0) goto LAB_100052dfc;
        uVar10 = uVar10 + 1;
        FUN_100052a80(&local_120);
        puVar9 = puVar9 + 0x15;
        if (uVar8 == uVar10) break;
        goto LAB_100052d24;
      }
      if ((char)local_120 == '\x02') {
        uVar7 = 0xe400000000000000;
        uVar5 = 0x67616c66;
        goto LAB_100052d94;
      }
      FUN_100052a44(&local_120,auStack_1c8);
      _swift_bridgeObjectRelease(0xea00000000006c61);
LAB_100052dfc:
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      local_78 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        FUN_1000798b4(0,*(long *)(puVar6 + 0x10) + 1,1);
      }
      uVar2 = *(ulong *)(local_78 + 0x10);
      if (*(ulong *)(local_78 + 0x18) >> 1 <= uVar2) {
        FUN_1000798b4(1 < *(ulong *)(local_78 + 0x18),uVar2 + 1,1);
      }
      uVar5 = uVar10 + 1;
      *(ulong *)(local_78 + 0x10) = uVar2 + 1;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x38) = uStack_108;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x30) = local_110;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x48) = uStack_f8;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x40) = local_100;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x28) = uStack_118;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x20) = local_120;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x78) = uStack_c8;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x70) = local_d0;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x88) = uStack_b8;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x80) = uStack_c0;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x58) = uStack_e8;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x50) = local_f0;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x68) = uStack_d8;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x60) = uStack_e0;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0xc0) = local_80;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0xa8) = uStack_98;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0xa0) = local_a0;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0xb8) = uStack_88;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0xb0) = local_90;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x98) = uStack_a8;
      *(undefined8 *)(local_78 + uVar2 * 0xa8 + 0x90) = local_b0;
      puVar6 = local_78;
    } while (uVar8 - 1 != uVar10);
  }
  _swift_bridgeObjectRelease(puVar1);
  return puVar6;
}

