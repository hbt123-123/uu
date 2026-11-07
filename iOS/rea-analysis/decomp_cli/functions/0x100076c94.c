// rea decompile_all
// name: FUN_100076c94
// address: 0x100076c94
// body: available
// range: 0x100076c94-0x100076f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100076c94(long param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_210 [208];
  undefined8 local_140;
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
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
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
  
  puVar3 = PTR___swiftEmptyArrayStorage_1000f0740;
  uVar9 = 0;
  lVar10 = 0;
  lVar8 = 0;
  uVar11 = 0;
  do {
    if ((lVar8 == 0) || (uVar6 = *(ulong *)(lVar8 + 0x10), uVar9 == uVar6)) {
      if (uVar11 == *(ulong *)(param_1 + 0x10)) {
LAB_100076ee4:
        _swift_bridgeObjectRelease(param_1);
        FUN_100077fd4(lVar8,lVar10,uVar9);
        return puVar3;
      }
      if (*(ulong *)(param_1 + 0x10) <= uVar11) {
LAB_100076f20:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100076f24);
        (*pcVar4)();
      }
      plVar1 = (long *)(param_1 + 0x20 + uVar11 * 0x10);
      lVar7 = *plVar1;
      lVar2 = plVar1[1];
      _swift_bridgeObjectRetain(lVar7);
      _swift_bridgeObjectRetain(lVar2);
      FUN_100077fd4(lVar8,lVar10,uVar9);
      plVar1 = (long *)(param_1 + 0x38 + uVar11 * 0x10);
      lVar8 = lVar7;
      lVar10 = lVar2;
      while ((uVar11 = uVar11 + 1, lVar8 == 0 || (uVar6 = *(ulong *)(lVar8 + 0x10), uVar6 == 0))) {
        if (uVar11 == *(ulong *)(param_1 + 0x10)) {
          uVar9 = 0;
          goto LAB_100076ee4;
        }
        if (*(ulong *)(param_1 + 0x10) <= uVar11) goto LAB_100076f20;
        lVar7 = plVar1[-1];
        lVar2 = *plVar1;
        _swift_bridgeObjectRetain(lVar7);
        _swift_bridgeObjectRetain(lVar2);
        FUN_100077fd4(lVar8,lVar10,0);
        plVar1 = plVar1 + 2;
        lVar8 = lVar7;
        lVar10 = lVar2;
      }
      uVar9 = 0;
    }
    if (uVar6 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100076f28);
      (*pcVar4)();
    }
    lVar7 = lVar8 + uVar9 * 0xd0;
    uStack_138 = *(undefined8 *)(lVar7 + 0x28);
    local_140 = *(undefined8 *)(lVar7 + 0x20);
    uStack_128 = *(undefined8 *)(lVar7 + 0x38);
    local_130 = *(undefined8 *)(lVar7 + 0x30);
    uStack_118 = *(undefined8 *)(lVar7 + 0x48);
    uStack_120 = *(undefined8 *)(lVar7 + 0x40);
    uStack_108 = *(undefined8 *)(lVar7 + 0x58);
    local_110 = *(undefined8 *)(lVar7 + 0x50);
    uStack_f8 = *(undefined8 *)(lVar7 + 0x68);
    uStack_100 = *(undefined8 *)(lVar7 + 0x60);
    uStack_e8 = *(undefined8 *)(lVar7 + 0x78);
    local_f0 = *(undefined8 *)(lVar7 + 0x70);
    uStack_d8 = *(undefined8 *)(lVar7 + 0x88);
    uStack_e0 = *(undefined8 *)(lVar7 + 0x80);
    uStack_c8 = *(ulong *)(lVar7 + 0x98);
    local_d0 = *(undefined8 *)(lVar7 + 0x90);
    uStack_b8 = *(undefined8 *)(lVar7 + 0xa8);
    uStack_c0 = *(undefined8 *)(lVar7 + 0xa0);
    uStack_a8 = *(undefined8 *)(lVar7 + 0xb8);
    local_b0 = *(undefined8 *)(lVar7 + 0xb0);
    uStack_98 = *(undefined8 *)(lVar7 + 200);
    uStack_a0 = *(undefined8 *)(lVar7 + 0xc0);
    uStack_88 = *(undefined8 *)(lVar7 + 0xd8);
    local_90 = *(undefined8 *)(lVar7 + 0xd0);
    uStack_78 = *(undefined8 *)(lVar7 + 0xe8);
    uStack_80 = *(undefined8 *)(lVar7 + 0xe0);
    uVar9 = uVar9 + 1;
    if (2 - (ulong)param_2 <= 2 - (uStack_c8 & 0xff)) {
      FUN_10006ff98(&local_140,auStack_210);
      puVar5 = puVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar5 & 1) == 0) {
        FUN_100079958(0,*(long *)(puVar3 + 0x10) + 1,1);
      }
      uVar6 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar6) {
        FUN_100079958(1 < *(ulong *)(puVar3 + 0x18),uVar6 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar6 + 1;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x28) = uStack_138;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x20) = local_140;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x58) = uStack_108;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x50) = local_110;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x68) = uStack_f8;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x60) = uStack_100;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x38) = uStack_128;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x30) = local_130;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x48) = uStack_118;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x40) = uStack_120;
      *(ulong *)(puVar3 + uVar6 * 0xd0 + 0x98) = uStack_c8;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x90) = local_d0;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0xa8) = uStack_b8;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0xa0) = uStack_c0;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x78) = uStack_e8;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x70) = local_f0;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x88) = uStack_d8;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0x80) = uStack_e0;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0xd8) = uStack_88;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0xd0) = local_90;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0xe8) = uStack_78;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0xe0) = uStack_80;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0xb8) = uStack_a8;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0xb0) = local_b0;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 200) = uStack_98;
      *(undefined8 *)(puVar3 + uVar6 * 0xd0 + 0xc0) = uStack_a0;
    }
  } while( true );
}

