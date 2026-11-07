// rea decompile_all
// name: FUN_1000d7374
// address: 0x1000d7374
// body: available
// range: 0x1000d7374-0x1000d761b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1000d7374(undefined *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined1 auStack_b0 [16];
  undefined **local_a0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  ulong uStack_68;
  
  uVar5 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar5 = param_2 >> 0x38 & 0xf;
  }
  if (uVar5 != 0) {
    uVar5 = 0x2f;
    __sSS9hasPrefixySbSSF(0x2f,0xe100000000000000,param_1,param_2);
    if ((uVar5 & 1) == 0) {
      local_80 = 0x5c;
      uStack_78 = 0xe100000000000000;
      local_70 = param_1;
      uStack_68 = param_2;
      FUN_10009ff0c();
      puVar6 = &local_80;
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (puVar6,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,uVar5,uVar5);
      if (((ulong)puVar6 & 1) == 0) {
        local_70 = (undefined *)0x2f;
        uStack_68 = 0xe100000000000000;
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_a0 = &local_70;
        _swift_bridgeObjectRetain(param_2);
        lVar7 = 0x7fffffffffffffff;
        FUN_10000b9ac(0x7fffffffffffffff,0,FUN_10009ff84,auStack_b0,param_1,param_2);
        uVar5 = *(ulong *)(lVar7 + 0x10);
        if (uVar5 == 0) {
          _swift_bridgeObjectRelease(lVar7);
          puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
        }
        else {
          local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
          FUN_10006fae0(0,uVar5,0);
          uVar12 = 0;
          puVar6 = (undefined8 *)(lVar7 + 0x38);
          do {
            puVar10 = local_70;
            if (*(ulong *)(lVar7 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d761c);
              (*pcVar4)();
            }
            uVar8 = puVar6[-3];
            uVar9 = puVar6[-2];
            uVar1 = puVar6[-1];
            uVar3 = *puVar6;
            _swift_bridgeObjectRetain(uVar3);
            __sSS14_fromSubstringySSSshFZ(uVar8,uVar9,uVar1,uVar3);
            _swift_bridgeObjectRelease(uVar3);
            uVar2 = *(ulong *)(puVar10 + 0x10);
            local_70 = puVar10;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
              FUN_10006fae0(1 < *(ulong *)(puVar10 + 0x18),uVar2 + 1,1);
            }
            puVar10 = local_70;
            uVar12 = uVar12 + 1;
            *(ulong *)(local_70 + 0x10) = uVar2 + 1;
            *(undefined8 *)(local_70 + uVar2 * 0x10 + 0x20) = uVar8;
            *(undefined8 *)(local_70 + uVar2 * 0x10 + 0x28) = uVar9;
            puVar6 = puVar6 + 4;
          } while (uVar5 != uVar12);
          _swift_bridgeObjectRelease(lVar7);
        }
        puVar11 = (ulong *)(puVar10 + 0x28);
        lVar7 = *(long *)(puVar10 + 0x10) + 1;
        while( true ) {
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) break;
          uVar12 = puVar11[-1];
          uVar2 = *puVar11;
          uVar5 = uVar12 & 0xffffffffffff;
          if ((uVar2 & 0x2000000000000000) != 0) {
            uVar5 = uVar2 >> 0x38 & 0xf;
          }
          if ((((uVar5 == 0) || (uVar12 == 0x2e && uVar2 == 0xe100000000000000)) ||
              (uVar5 = uVar12,
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar12,uVar2,0x2e,0xe100000000000000,0), (uVar5 & 1) != 0)) ||
             ((uVar12 == 0x2e2e && (uVar2 == 0xe200000000000000)))) break;
          puVar11 = puVar11 + 2;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar12,uVar2,0x2e2e,0xe200000000000000,0);
          if ((uVar12 & 1) != 0) break;
        }
        _swift_bridgeObjectRelease(puVar10);
        return lVar7 == 0;
      }
    }
  }
  return false;
}

