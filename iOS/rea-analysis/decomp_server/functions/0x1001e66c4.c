// rea decompile_all
// name: FUN_1001e66c4
// address: 0x1001e66c4
// body: available
// range: 0x1001e66c4-0x1001e6883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1001e66c4(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_2 != 0) {
    uVar11 = 0;
    uVar13 = *(ulong *)(param_3 + 0x10);
    do {
      plVar14 = (long *)(param_3 + 0x30 + uVar11 * 0x18);
      uVar12 = uVar11;
      do {
        if (uVar13 == uVar12) {
          if (*(long *)(puVar4 + 0x10) == 1) {
            uVar9 = *(undefined4 *)(puVar4 + 0x20);
            _swift_release(puVar4);
            uVar8 = 0;
            goto LAB_1001e684c;
          }
          if (*(long *)(puVar4 + 0x10) == 0) {
            _swift_release(puVar4);
            goto LAB_1001e6824;
          }
          _swift_release(puVar4);
          goto LAB_1001e6844;
        }
        if (uVar13 <= uVar12) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001e6880);
          (*pcVar5)();
        }
        uVar11 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001e6884);
          (*pcVar5)();
        }
        lVar3 = plVar14[-2];
        uVar1 = plVar14[-1];
        lVar2 = *plVar14;
        uVar10 = param_1;
        if (uVar1 == param_1 && lVar2 == param_2) break;
        uVar6 = uVar1;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar1,lVar2,param_1,param_2,0);
        uVar12 = uVar12 + 1;
        plVar14 = plVar14 + 3;
        uVar10 = uVar1;
      } while ((uVar6 & 1) == 0);
      _swift_bridgeObjectRetain(lVar2);
      puVar7 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar7 & 1) == 0) {
        FUN_10006fea4(0,*(long *)(puVar4 + 0x10) + 1,1);
      }
      uVar12 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar12) {
        FUN_10006fea4(1 < *(ulong *)(puVar4 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar12 + 1;
      *(int *)(puVar4 + uVar12 * 0x18 + 0x20) = (int)lVar3;
      *(ulong *)(puVar4 + uVar12 * 0x18 + 0x28) = uVar10;
      *(long *)(puVar4 + uVar12 * 0x18 + 0x30) = lVar2;
    } while( true );
  }
  if (*(long *)(param_3 + 0x10) == 0) {
LAB_1001e6824:
    uVar9 = 0;
  }
  else {
    if (*(long *)(param_3 + 0x10) == 1) {
      uVar8 = 0;
      uVar9 = *(undefined4 *)(param_3 + 0x20);
      goto LAB_1001e684c;
    }
LAB_1001e6844:
    uVar9 = 1;
  }
  uVar8 = 1;
LAB_1001e684c:
  return (ulong)CONCAT14(uVar8,uVar9);
}

