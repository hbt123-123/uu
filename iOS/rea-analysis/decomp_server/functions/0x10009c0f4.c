// rea decompile_all
// name: FUN_10009c0f4
// address: 0x10009c0f4
// body: available
// range: 0x10009c0f4-0x10009c2e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10009c0f4(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  puVar2 = &local_50;
  if (DAT_100a73bb0 != -1) {
    param_1 = &DAT_100a73bb0;
    _swift_once(&DAT_100a73bb0,FUN_10019b250);
  }
  local_40 = (undefined1 *)DAT_100b36258;
  uStack_38 = DAT_100b36260;
  local_50 = 0x2e;
  uStack_48 = 0xe100000000000000;
  FUN_10009ff0c();
  __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
            (&local_50,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,param_1,param_1);
  plVar9 = (long *)((long)puVar2 + 0x10);
  if ((*plVar9 == 0) ||
     ((uVar3 = plVar9[*plVar9 * 2],
      uVar3 != 0x726576726573 || (plVar9 + *plVar9 * 2)[1] != 0xe600000000000000 &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar3 & 1) == 0)))) {
    _swift_bridgeObjectRelease(puVar2);
    FUN_100401b14(0);
    FUN_1003fb4bc(FUN_100095004,0,0xd000000000000093,0x800000010087fc10,0xd000000000000022,
                  0x8000000100880270,0x122,0);
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    puVar4 = (undefined1 *)puVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar4 & 1) == 0) {
      FUN_10006f94c();
      lVar10 = *(long *)((long)puVar2 + 0x10);
    }
    else {
      lVar10 = *(long *)((long)puVar2 + 0x10);
    }
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10009c2e4);
      (*pcVar1)();
    }
    uVar5 = *(undefined8 *)((long)puVar2 + (lVar10 + -1) * 0x10 + 0x28);
    *(long *)((long)puVar2 + 0x10) = lVar10 + -1;
    _swift_bridgeObjectRelease(uVar5);
    puVar6 = &DAT_100a756e8;
    local_40 = (undefined1 *)puVar2;
    FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
    puVar7 = &DAT_100a756f0;
    FUN_10003f840(&DAT_100a756f0,&DAT_100a756e8,&BYTE_100809720,PTR___sSayxGSKsMc_100995888);
    uVar5 = 0x2e;
    uVar8 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2e,0xe100000000000000,puVar6,puVar7);
    _swift_bridgeObjectRelease(puVar2);
  }
  auVar11._8_8_ = uVar8;
  auVar11._0_8_ = uVar5;
  return auVar11;
}

