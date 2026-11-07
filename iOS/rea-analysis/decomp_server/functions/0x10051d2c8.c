// rea decompile_all
// name: FUN_10051d2c8
// address: 0x10051d2c8
// body: available
// range: 0x10051d2c8-0x10051d513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10051d2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long local_b0;
  undefined8 local_a8;
  undefined *local_68;
  
  local_68 = PTR___swiftEmptySetSingleton_100995eb0;
  local_b0 = param_4;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_1);
  FUN_1004fa518();
  lVar6 = local_b0;
  uVar14 = *(ulong *)(local_b0 + 0x10);
  if (uVar14 == 0) {
    _swift_bridgeObjectRelease(local_b0);
    puVar10 = PTR___swiftEmptySetSingleton_100995eb0;
    puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar15 = 0;
    lVar1 = local_b0 + 0x20;
    puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      puVar10 = local_68;
      if (*(ulong *)(lVar6 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10051d514);
        (*pcVar7)();
      }
      puVar2 = (ulong *)(lVar1 + uVar15 * 0x10);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      if (*(long *)(local_68 + 0x10) == 0) {
        _swift_bridgeObjectRetain(uVar4);
      }
      else {
        __ss6HasherV5_seedABSi_tcfC(&local_b0,*(undefined8 *)(local_68 + 0x28));
        _swift_bridgeObjectRetain(uVar4);
        plVar8 = &local_b0;
        __sSS4hash4intoys6HasherVz_tF(plVar8,uVar3,uVar4);
        __ss6HasherV9_finalizeSiyF();
        uVar13 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
        uVar16 = (ulong)plVar8 & (uVar13 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar10 + (uVar16 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar16 & 0x3f) & 1)
            != 0) {
          do {
            puVar2 = (ulong *)(*(long *)(puVar10 + 0x30) + uVar16 * 0x10);
            uVar9 = *puVar2;
            uVar5 = puVar2[1];
            if ((uVar9 == uVar3 && uVar5 == uVar4) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar9,uVar5,uVar3,uVar4,0), (uVar9 & 1) != 0)) {
              _swift_bridgeObjectRelease(uVar4);
              goto LAB_10051d340;
            }
            uVar16 = uVar16 + 1 & ~uVar13;
          } while ((*(ulong *)(puVar10 + (uVar16 >> 3 & 0xffffffffffffff8) + 0x38) >>
                    (uVar16 & 0x3f) & 1) != 0);
        }
      }
      _swift_bridgeObjectRetain(uVar4);
      FUN_10051e85c(&local_b0,uVar3,uVar4);
      _swift_bridgeObjectRelease(local_a8);
      puVar10 = puVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar11 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        FUN_100507174(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar13 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar13) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        FUN_100507174(puVar12,uVar13 + 1,1,puVar11);
      }
      *(ulong *)(puVar12 + 0x10) = uVar13 + 1;
      *(ulong *)(puVar12 + uVar13 * 0x10 + 0x20) = uVar3;
      *(ulong *)(puVar12 + uVar13 * 0x10 + 0x28) = uVar4;
LAB_10051d340:
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
    _swift_bridgeObjectRelease(lVar6);
    puVar10 = local_68;
  }
  _swift_bridgeObjectRelease(puVar10);
  _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_100995ea0);
  return puVar12;
}

