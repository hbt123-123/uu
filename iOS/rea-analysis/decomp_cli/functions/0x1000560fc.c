// rea decompile_all
// name: FUN_1000560fc
// address: 0x1000560fc
// body: available
// range: 0x1000560fc-0x1000562bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000560fc(void)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_1c8 [168];
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  
  puVar6 = PTR___swiftEmptyArrayStorage_1000f0740;
  puVar1 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (*(undefined **)(unaff_x20 + 0x58) != (undefined *)0x0) {
    puVar1 = *(undefined **)(unaff_x20 + 0x58);
  }
  uVar9 = *(ulong *)(puVar1 + 0x10);
  _swift_bridgeObjectRetain();
  if (uVar9 != 0) {
    uVar8 = 0;
    do {
      puVar7 = (ulong *)(puVar1 + uVar8 * 0xa8 + 0x20);
      uVar10 = uVar8;
      while( true ) {
        if (*(ulong *)(puVar1 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000562c0);
          (*pcVar3)();
        }
        uStack_118 = puVar7[1];
        local_120 = *puVar7;
        uStack_108 = puVar7[3];
        local_110 = puVar7[2];
        uStack_f8 = puVar7[5];
        local_100 = puVar7[4];
        uStack_e8 = puVar7[7];
        local_f0 = puVar7[6];
        uStack_d8 = puVar7[9];
        uStack_e0 = puVar7[8];
        uStack_c8 = puVar7[0xb];
        local_d0 = puVar7[10];
        uStack_b8 = puVar7[0xd];
        uStack_c0 = puVar7[0xc];
        uStack_a8 = puVar7[0xf];
        local_b0 = puVar7[0xe];
        uStack_98 = puVar7[0x11];
        local_a0 = puVar7[0x10];
        uStack_88 = puVar7[0x13];
        local_90 = puVar7[0x12];
        local_80 = puVar7[0x14];
        if ((((char)local_a0 != -1) || ((local_100 != 0 && (*(long *)(local_100 + 0x10) != 0)))) &&
           ((local_120 & 0x100) != 0)) break;
        uVar10 = uVar10 + 1;
        puVar7 = puVar7 + 0x15;
        if (uVar9 == uVar10) goto LAB_100056290;
      }
      FUN_100052a44(&local_120,auStack_1c8);
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_10006eeec(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar2 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_10006eeec(puVar6,uVar2 + 1,1,puVar5);
      }
      uVar8 = uVar10 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar2 + 1;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x38) = uStack_108;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x30) = local_110;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x48) = uStack_f8;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x40) = local_100;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x28) = uStack_118;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x20) = local_120;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x78) = uStack_c8;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x70) = local_d0;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x88) = uStack_b8;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x80) = uStack_c0;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x58) = uStack_e8;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x50) = local_f0;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x68) = uStack_d8;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x60) = uStack_e0;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0xc0) = local_80;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0xa8) = uStack_98;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0xa0) = local_a0;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0xb8) = uStack_88;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0xb0) = local_90;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x98) = uStack_a8;
      *(ulong *)(puVar6 + uVar2 * 0xa8 + 0x90) = local_b0;
    } while (uVar9 - 1 != uVar10);
  }
LAB_100056290:
  _swift_bridgeObjectRelease(puVar1);
  return puVar6;
}

