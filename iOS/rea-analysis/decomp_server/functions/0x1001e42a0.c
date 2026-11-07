// rea decompile_all
// name: FUN_1001e42a0
// address: 0x1001e42a0
// body: available
// range: 0x1001e42a0-0x1001e44af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001e42a0(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *local_b8;
  undefined1 auStack_a8 [72];
  
  uVar15 = *(ulong *)(param_1 + 0x10);
  if (uVar15 == 0) {
    local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
    uVar13 = 0;
    do {
      if (uVar15 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001e44ac);
        (*pcVar6)();
      }
      uVar2 = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001e44b0);
        (*pcVar6)();
      }
      puVar10 = (undefined4 *)(param_1 + 0x20 + uVar13 * 0x18);
      uVar13 = *(ulong *)(puVar10 + 4);
      if (*(char *)(puVar10 + 1) == '\x01' && uVar13 != 0) {
        uVar5 = *puVar10;
        if (*(long *)(param_2 + 0x10) != 0) {
          uVar14 = *(ulong *)(puVar10 + 2);
          __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(param_2 + 0x28));
          _swift_bridgeObjectRetain(uVar13);
          puVar7 = auStack_a8;
          __sSS4hash4intoys6HasherVz_tF(puVar7,uVar14,uVar13);
          __ss6HasherV9_finalizeSiyF();
          uVar11 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
          uVar12 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
          if ((*(ulong *)(param_2 + 0x38 + (uVar12 >> 3 & 0xffffffffffffff8)) >> (uVar12 & 0x3f) & 1
              ) != 0) {
            do {
              puVar3 = (ulong *)(*(long *)(param_2 + 0x30) + uVar12 * 0x10);
              uVar8 = *puVar3;
              uVar4 = puVar3[1];
              if ((uVar8 == uVar14 && uVar13 == uVar4) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar8,uVar4,uVar14,uVar13,0), (uVar8 & 1) != 0)) {
                _swift_bridgeObjectRelease(uVar13);
                goto LAB_1001e4300;
              }
              uVar12 = uVar12 + 1 & ~uVar11;
            } while ((*(ulong *)(param_2 + 0x38 + (uVar12 >> 3 & 0xffffffffffffff8)) >>
                      (uVar12 & 0x3f) & 1) != 0);
          }
          _swift_bridgeObjectRelease(uVar13);
        }
        puVar9 = local_b8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar9 & 1) == 0) {
          plVar1 = (long *)(local_b8 + 0x10);
          local_b8 = (undefined *)0x0;
          FUN_1000344a0(0,*plVar1 + 1,1);
        }
        uVar13 = *(ulong *)(local_b8 + 0x10);
        if (*(ulong *)(local_b8 + 0x18) >> 1 <= uVar13) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(local_b8 + 0x18));
          FUN_1000344a0(puVar9,uVar13 + 1,1,local_b8);
          local_b8 = puVar9;
        }
        *(ulong *)(local_b8 + 0x10) = uVar13 + 1;
        *(undefined4 *)(local_b8 + uVar13 * 4 + 0x20) = uVar5;
      }
LAB_1001e4300:
      uVar13 = uVar2;
    } while (uVar2 != uVar15);
  }
  return local_b8;
}

