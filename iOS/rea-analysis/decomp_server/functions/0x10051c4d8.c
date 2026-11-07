// rea decompile_all
// name: FUN_10051c4d8
// address: 0x10051c4d8
// body: available
// range: 0x10051c4d8-0x10051c72b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10051c4d8(ulong param_1,undefined *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 local_60;
  undefined *local_58;
  
  uVar3 = param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar3 = (ulong)param_2 >> 0x38 & 0xf;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar3 != 0) {
    puVar4 = param_2;
    puVar6 = param_2;
    _swift_bridgeObjectRetain();
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_10051c52c:
    local_58 = (undefined *)0xe000000000000000;
    local_60 = 0;
    lVar8 = 0;
    while( true ) {
      __sSS8IteratorV4nextSJSgyF();
      if (puVar6 == (undefined *)0x0) {
        _swift_bridgeObjectRelease(param_2);
        if (lVar8 == 0) goto LAB_10051c6a8;
        FUN_10051c170();
        _swift_bridgeObjectRelease(0xe000000000000000);
        if (local_58 != (undefined *)0x0) {
          puVar6 = puVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar4 = puVar5;
          if (((ulong)puVar6 & 1) == 0) {
            puVar4 = (undefined *)0x0;
            FUN_100507174(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
          }
          uVar3 = *(ulong *)(puVar4 + 0x10);
          puVar6 = puVar4;
          if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar3) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
            FUN_100507174(puVar6,uVar3 + 1,1,puVar4);
          }
          *(ulong *)(puVar6 + 0x10) = uVar3 + 1;
          *(undefined8 *)(puVar6 + uVar3 * 0x10 + 0x20) = local_60;
          *(undefined **)(puVar6 + uVar3 * 0x10 + 0x28) = local_58;
          return puVar6;
        }
        goto LAB_10051c6b8;
      }
      if ((puVar4 == (undefined *)0x2c) && (puVar6 == (undefined *)0xe100000000000000)) break;
      uVar3 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x2c,0xe100000000000000,puVar4,puVar6,0);
      if ((uVar3 & 1) != 0) break;
      puVar7 = puVar6;
      __sSS6appendyySJF(puVar4);
      _swift_bridgeObjectRelease();
      bVar2 = SCARRY8(lVar8,1);
      lVar8 = lVar8 + 1;
      puVar4 = puVar6;
      puVar6 = puVar7;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10051c6ec);
        (*pcVar1)();
      }
    }
    _swift_bridgeObjectRelease(puVar6);
    if (lVar8 != 0) {
      FUN_10051c170();
      puVar6 = local_58;
      _swift_bridgeObjectRelease(0xe000000000000000);
      if (local_58 == (undefined *)0x0) goto LAB_10051c6ac;
      puVar4 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar4 & 1) == 0) {
        puVar6 = (undefined *)(*(long *)(puVar5 + 0x10) + 1);
        puVar4 = (undefined *)0x0;
        FUN_100507174(0,puVar6,1,puVar5);
        puVar5 = puVar4;
      }
      uVar3 = *(ulong *)(puVar5 + 0x10);
      puVar7 = (undefined *)(uVar3 + 1);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
        puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        puVar6 = puVar7;
        FUN_100507174(puVar4,puVar7,1,puVar5);
        puVar5 = puVar4;
      }
      *(undefined **)(puVar5 + 0x10) = puVar7;
      *(undefined8 *)(puVar5 + uVar3 * 0x10 + 0x20) = local_60;
      *(undefined **)(puVar5 + uVar3 * 0x10 + 0x28) = local_58;
      goto LAB_10051c52c;
    }
    _swift_bridgeObjectRelease(param_2);
LAB_10051c6a8:
    param_2 = (undefined *)0xe000000000000000;
LAB_10051c6ac:
    _swift_bridgeObjectRelease(puVar5);
    puVar5 = param_2;
LAB_10051c6b8:
    _swift_bridgeObjectRelease(puVar5);
    puVar6 = (undefined *)0x0;
  }
  return puVar6;
}

