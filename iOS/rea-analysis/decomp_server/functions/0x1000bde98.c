// rea decompile_all
// name: FUN_1000bde98
// address: 0x1000bde98
// body: available
// range: 0x1000bde98-0x1000be0a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000bde98(long param_1,char param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ID *pIVar15;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_90,0,0);
    uVar11 = *(ulong *)(param_1 + 0x10);
    if (uVar11 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar11 & 0xffffffffffffff8;
      if ((long)uVar11 < 0) {
        uVar9 = uVar11;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar9 != 0) {
      _swift_beginAccess(param_1 + 0x18,auStack_a8,0,0);
      lVar13 = *(long *)(param_1 + 0x18);
      uVar9 = *(ulong *)(lVar13 + 0x10);
      _swift_bridgeObjectRetain(lVar13);
      puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
      uVar11 = 0;
LAB_1000bdf48:
      lVar12 = uVar11 << 5;
LAB_1000bdf4c:
      if (uVar9 != uVar11) goto code_r0x0001000bdf54;
      _swift_bridgeObjectRelease(lVar13);
      uVar11 = *(ulong *)(puVar7 + 0x10);
      if (uVar11 != 0) {
        uVar9 = 0;
        pIVar15 = (ID *)puVar7;
        do {
          pIVar15 = pIVar15 + 4;
          if (*(ulong *)(puVar7 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1000be090);
            (*pcVar8)();
          }
          uVar9 = uVar9 + 1;
          _objc_msgSend(*pIVar15,"setImage:",param_3);
        } while (uVar11 != uVar9);
      }
      _swift_release(puVar7);
    }
    _swift_release(param_1);
  }
  return;
code_r0x0001000bdf54:
  if (*(ulong *)(lVar13 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1000be08c);
    (*pcVar8)();
  }
  lVar1 = lVar12 + 0x20;
  uVar11 = uVar11 + 1;
  lVar2 = lVar13 + lVar12;
  lVar12 = lVar1;
  if (*(char *)(lVar2 + 0x38) == param_2) goto code_r0x0001000bdf7c;
  goto LAB_1000bdf4c;
code_r0x0001000bdf7c:
  puVar3 = (undefined8 *)(lVar13 + lVar1);
  uVar4 = *puVar3;
  uVar6 = puVar3[1];
  uVar14 = puVar3[2];
  _swift_bridgeObjectRetain(uVar14);
  puVar10 = puVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar10 & 1) == 0) {
    FUN_10006fd50(0,*(long *)(puVar7 + 0x10) + 1,1);
  }
  uVar5 = *(ulong *)(puVar7 + 0x10);
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
    FUN_10006fd50(1 < *(ulong *)(puVar7 + 0x18),uVar5 + 1,1);
  }
  *(ulong *)(puVar7 + 0x10) = uVar5 + 1;
  *(undefined8 *)(puVar7 + uVar5 * 0x20 + 0x20) = uVar4;
  *(undefined8 *)(puVar7 + uVar5 * 0x20 + 0x28) = uVar6;
  *(undefined8 *)(puVar7 + uVar5 * 0x20 + 0x30) = uVar14;
  puVar7[uVar5 * 0x20 + 0x38] = param_2;
  goto LAB_1000bdf48;
}

