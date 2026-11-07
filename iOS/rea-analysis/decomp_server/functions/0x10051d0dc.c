// rea decompile_all
// name: FUN_10051d0dc
// address: 0x10051d0dc
// body: available
// range: 0x10051d0dc-0x10051d2c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010051d2b4) */

undefined * FUN_10051d0dc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  ulong local_68;
  ulong uStack_60;
  
  local_68 = param_1;
  _swift_bridgeObjectRetain();
  FUN_10051dff8(&local_68);
  uVar4 = local_68;
  lVar12 = *(long *)(local_68 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar12 != 0) {
    puVar13 = (ulong *)(local_68 + 0x28);
    do {
      uVar1 = puVar13[-1];
      uVar3 = *puVar13;
      plVar11 = (long *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*plVar11 == 0) {
        _swift_bridgeObjectRetain(uVar3);
        puVar7 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar7 & 1) == 0) {
          lVar10 = 1;
LAB_10051d240:
          puVar9 = (undefined *)0x0;
          FUN_100507174(0,lVar10,1,puVar8);
        }
LAB_10051d1f8:
        uVar2 = *(ulong *)(puVar9 + 0x10);
        puVar8 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_100507174(puVar8,uVar2 + 1,1,puVar9);
        }
        *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
        *(ulong *)(puVar8 + uVar2 * 0x10 + 0x20) = uVar1;
        *(ulong *)(puVar8 + uVar2 * 0x10 + 0x28) = uVar3;
      }
      else {
        uVar2 = plVar11[*plVar11 * 2];
        uVar6 = (plVar11 + *plVar11 * 2)[1];
        if ((uVar1 != uVar2 || uVar3 != uVar6) &&
           (uVar5 = uVar1,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar1,uVar3,uVar2,uVar6,0), (uVar5 & 1) == 0)) {
          local_68 = uVar2;
          uStack_60 = uVar6;
          _swift_bridgeObjectRetain(uVar3);
          _swift_bridgeObjectRetain(uVar6);
          __sSS6appendyySSF(0x2e,0xe100000000000000);
          uVar2 = uStack_60;
          uVar6 = local_68;
          __sSS9hasPrefixySbSSF(local_68,uStack_60,uVar1,uVar3);
          _swift_bridgeObjectRelease(uVar2);
          if ((uVar6 & 1) == 0) {
            puVar7 = puVar8;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar7 & 1) == 0) {
              lVar10 = *(long *)(puVar8 + 0x10) + 1;
              goto LAB_10051d240;
            }
            goto LAB_10051d1f8;
          }
          _swift_bridgeObjectRelease(uVar3);
        }
      }
      puVar13 = puVar13 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  _swift_release(uVar4);
  _swift_bridgeObjectRetain(puVar8);
  FUN_100008184(0,0xc000000000000000);
  _swift_bridgeObjectRelease(puVar8);
  FUN_100006cdc(0,0xc000000000000000);
  return puVar8;
}

