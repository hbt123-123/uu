// rea decompile_all
// name: FUN_10002d5d0
// address: 0x10002d5d0
// body: available
// range: 0x10002d5d0-0x10002d81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong FUN_10002d5d0(ulong param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar3 = &DAT_100a759b8;
  FUN_100004bb4(&DAT_100a759b8,&DAT_10080a9a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined4 *)(puVar3 + 0x20) = param_2;
  puVar4 = puVar3;
  FUN_100128278();
  _swift_setDeallocating(puVar3);
  if (((param_1 >> 0x20 & 1) != 0) ||
     (uVar5 = param_1, FUN_1000231b4(param_1,puVar4), (uVar5 & 1) == 0)) {
    param_1 = 0;
    FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
    thunk_FUN_1003d7218();
    if (param_1 != 0) {
      FUN_1003d541c();
      uVar5 = param_1;
      FUN_1000231b4();
      if ((uVar5 & 1) != 0) goto LAB_10002d798;
    }
    puVar3 = puVar4;
    FUN_10002dad0();
    _swift_bridgeObjectRelease(puVar4);
    if ((ulong)puVar3 >> 0x3e == 0) {
      puVar9 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
      if (puVar9 == (undefined *)0x0) goto LAB_10002d7ec;
LAB_10002d6d0:
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10006fafc(0,(ulong)puVar9 & ((long)puVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10002d81c);
        (*pcVar1)();
      }
      puVar10 = (undefined *)0x0;
      do {
        if (((ulong)puVar3 & 0xc000000000000001) == 0) {
          uVar2 = (undefined4)*(undefined8 *)(puVar3 + (long)puVar10 * 8 + 0x20);
        }
        else {
          puVar6 = puVar10;
          FUN_100169c00(puVar10,puVar3);
          uVar2 = SUB84(puVar6,0);
        }
        FUN_1003d541c();
        uVar5 = *(ulong *)(puVar4 + 0x10);
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar5) {
          FUN_10006fafc(1 < *(ulong *)(puVar4 + 0x18),uVar5 + 1,1);
        }
        puVar10 = puVar10 + 1;
        *(ulong *)(puVar4 + 0x10) = uVar5 + 1;
        *(undefined4 *)(puVar4 + uVar5 * 4 + 0x20) = uVar2;
      } while (puVar9 != puVar10);
      _swift_bridgeObjectRelease(puVar3);
      lVar8 = *(long *)(puVar4 + 0x10);
    }
    else {
      puVar9 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
      if ((long)puVar3 < 0) {
        puVar9 = puVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (puVar9 != (undefined *)0x0) goto LAB_10002d6d0;
LAB_10002d7ec:
      _swift_bridgeObjectRelease(puVar3);
      lVar8 = *(long *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    if (lVar8 == 0) {
      _swift_bridgeObjectRelease(puVar4);
      param_1 = 0;
      bVar7 = 1;
      goto LAB_10002d7a4;
    }
    param_1 = (ulong)*(uint *)(puVar4 + 0x20);
  }
LAB_10002d798:
  _swift_bridgeObjectRelease(puVar4);
  bVar7 = 0;
LAB_10002d7a4:
  return param_1 & 0xffffffff | (ulong)bVar7 << 0x20;
}

