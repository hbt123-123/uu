// rea decompile_all
// name: FUN_10009cee8
// address: 0x10009cee8
// body: available
// range: 0x10009cee8-0x10009d233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10009cee8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 **ppuVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 *local_70;
  undefined *puStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  
  ppuVar4 = &local_70;
  ppuVar10 = &local_70;
  if (DAT_100a73bb0 != -1) {
    param_1 = &DAT_100a73bb0;
    _swift_once(&DAT_100a73bb0,FUN_10019b250);
  }
  local_60 = DAT_100b36258;
  uStack_58 = DAT_100b36260;
  local_70 = (undefined1 *)0x2e;
  puStack_68 = (undefined *)0xe100000000000000;
  FUN_10009ff0c();
  __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
            (&local_70,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,param_1,param_1);
  uVar13 = *(ulong *)((long)ppuVar4 + 0x10);
  if (uVar13 == 0) {
LAB_10009d120:
    _swift_bridgeObjectRelease(ppuVar4);
    FUN_100401b14(0);
    pcVar3 = FUN_100094024;
    uVar7 = 0x85;
  }
  else {
    lVar14 = uVar13 - 1;
    uVar5 = *(ulong *)((long)ppuVar4 + lVar14 * 0x10 + 0x20);
    if ((uVar5 != 0x726576726573 ||
         *(long *)((long)ppuVar4 + lVar14 * 0x10 + 0x28) != -0x1a00000000000000) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar5 & 1) == 0)) goto LAB_10009d120;
    puVar6 = (undefined1 *)ppuVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar6 & 1) == 0) {
      FUN_10006f94c();
    }
    if (*(ulong *)((long)ppuVar4 + 0x10) < uVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10009d234);
      (*pcVar3)();
    }
    uVar7 = *(undefined8 *)((long)ppuVar4 + lVar14 * 0x10 + 0x28);
    *(undefined8 *)((long)ppuVar4 + lVar14 * 0x10 + 0x20) = 0x7265706c6568;
    *(undefined8 *)((long)ppuVar4 + lVar14 * 0x10 + 0x28) = 0xe600000000000000;
    _swift_bridgeObjectRelease(uVar7);
    puVar8 = &DAT_100a756e8;
    local_60 = (undefined1 *)ppuVar4;
    FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
    puVar9 = &DAT_100a756f0;
    FUN_10003f840(&DAT_100a756f0,&DAT_100a756e8,&BYTE_100809720,PTR___sSayxGSKsMc_100995888);
    uVar7 = 0x2e;
    uVar11 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2e,0xe100000000000000,puVar8,puVar9);
    _swift_bridgeObjectRelease(ppuVar4);
    lVar14 = 0xe;
    _NSSearchPathForDirectoriesInDomains(0xe,1,1);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    if (*(long *)(lVar14 + 0x10) != 0) {
      puVar6 = *(undefined1 **)(lVar14 + 0x20);
      uVar1 = *(undefined8 *)(lVar14 + 0x28);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRelease(lVar14);
      local_60 = (undefined1 *)0x2f;
      uStack_58 = 0xe100000000000000;
      __sSS6appendyySSF(uVar7,uVar11);
      _swift_bridgeObjectRelease(uVar11);
      __sSS6appendyySSF(0x73676f4c2f,0xe500000000000000);
      uVar7 = uStack_58;
      puVar2 = PTR___sSSSTsWP_100995820;
      puVar8 = PTR___sSSN_1009957f8;
      puVar12 = PTR___sSSN_1009957f8;
      local_70 = puVar6;
      puStack_68 = (undefined *)uVar1;
      __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
                (&local_70,PTR___sSSN_1009957f8,PTR___sSSs25LosslessStringConvertiblesWP_100995838,
                 PTR___sSSSTsWP_100995820);
      local_70 = (undefined1 *)ppuVar10;
      puStack_68 = puVar12;
      __sSS6append10contentsOfyx_tSTRzSJ7ElementRtzlF(&local_60,puVar8,puVar2);
      _swift_bridgeObjectRelease(uVar7);
      goto LAB_10009d1ec;
    }
    _swift_bridgeObjectRelease(lVar14);
    _swift_bridgeObjectRelease(uVar11);
    FUN_100401b14(0);
    pcVar3 = FUN_1000940fc;
    uVar7 = 0x8b;
  }
  FUN_1003fb4bc(pcVar3,0,0xd000000000000093,0x800000010087fc10,0xd000000000000014,0x800000010087ffb0
                ,uVar7,0);
  local_70 = (undefined1 *)0x0;
  puStack_68 = (undefined *)0x0;
LAB_10009d1ec:
  auVar15._8_8_ = puStack_68;
  auVar15._0_8_ = local_70;
  return auVar15;
}

