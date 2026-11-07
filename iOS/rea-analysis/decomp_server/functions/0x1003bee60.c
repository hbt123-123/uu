// rea decompile_all
// name: FUN_1003bee60
// address: 0x1003bee60
// body: available
// range: 0x1003bee60-0x1003bf0a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003bee60(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  ID IVar9;
  ulong uVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long unaff_x20;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  long local_90;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  undefined *local_68;
  
  puVar12 = PTR___swiftEmptySetSingleton_100995eb0;
  local_68 = PTR___swiftEmptySetSingleton_100995eb0;
  _swift_beginAccess(unaff_x20 + 0x60,auStack_80,0,0);
  lVar8 = *(long *)(unaff_x20 + 0x60);
  uVar15 = *(ulong *)(lVar8 + 0x10);
  puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar15 != 0) {
    lVar1 = lVar8 + 0x20;
    _swift_bridgeObjectRetain();
    uVar18 = 0;
    puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      if (*(ulong *)(lVar8 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1003bf0a8);
        (*pcVar7)();
      }
      puVar2 = (undefined8 *)(lVar1 + uVar18 * 0x10);
      pcVar7 = (code *)*puVar2;
      uVar4 = puVar2[1];
      _swift_retain(uVar4);
      (*pcVar7)(&local_90);
      _swift_release(uVar4);
      lVar6 = local_90;
      lVar17 = *(long *)(local_90 + 0x10);
      if (lVar17 != 0) {
        puVar16 = (ulong *)(local_90 + 0x28);
        do {
          uVar3 = puVar16[-1];
          uVar5 = *puVar16;
          uVar10 = uVar3 & 0xffffffffffff;
          if ((uVar5 & 0x2000000000000000) != 0) {
            uVar10 = uVar5 >> 0x38 & 0xf;
          }
          if (uVar10 != 0) {
            _swift_bridgeObjectRetain(uVar5);
            IVar9 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager")
            ;
            uVar10 = uVar3;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar5);
            IVar9 = NSFileManager::fileExistsAtPath_(IVar9,"fileExistsAtPath:",uVar10);
            if ((int)IVar9 != 0) {
              _swift_bridgeObjectRetain(uVar5);
              plVar11 = &local_90;
              FUN_10006d958(plVar11,uVar3,uVar5);
              _swift_bridgeObjectRelease(local_88);
              if (((ulong)plVar11 & 1) != 0) {
                puVar12 = puVar14;
                _swift_isUniquelyReferenced_nonNull_native();
                puVar13 = puVar14;
                if (((ulong)puVar12 & 1) == 0) {
                  puVar13 = (undefined *)0x0;
                  FUN_100033898(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
                }
                uVar10 = *(ulong *)(puVar13 + 0x10);
                puVar14 = puVar13;
                if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar10) {
                  puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
                  FUN_100033898(puVar14,uVar10 + 1,1,puVar13);
                }
                *(ulong *)(puVar14 + 0x10) = uVar10 + 1;
                *(ulong *)(puVar14 + uVar10 * 0x10 + 0x20) = uVar3;
                *(ulong *)(puVar14 + uVar10 * 0x10 + 0x28) = uVar5;
                goto LAB_1003bef3c;
              }
            }
            _swift_bridgeObjectRelease(uVar5);
          }
LAB_1003bef3c:
          puVar16 = puVar16 + 2;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      uVar18 = uVar18 + 1;
      _swift_bridgeObjectRelease(lVar6);
    } while (uVar18 != uVar15);
    _swift_bridgeObjectRelease();
    puVar12 = local_68;
  }
  _swift_bridgeObjectRelease(puVar12);
  return puVar14;
}

