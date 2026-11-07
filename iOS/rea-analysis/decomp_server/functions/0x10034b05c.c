// rea decompile_all
// name: FUN_10034b05c
// address: 0x10034b05c
// body: available
// range: 0x10034b05c-0x10034b217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_10034b05c(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *local_58;
  
  uVar2 = 0;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xc,0,0);
  if ((uVar2 & 1) == 0) {
    lVar4 = param_1;
    _SecTrustGetCertificateCount();
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10034b218);
      (*pcVar1)();
    }
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (lVar4 != 0) {
      lVar10 = 0;
      do {
        lVar7 = param_1;
        _SecTrustGetCertificateAtIndex(param_1,lVar10);
        if (lVar7 != 0) {
          puVar6 = puVar8;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar6 == 0) || ((long)puVar8 < 0)) ||
             (puVar6 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar8 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
              if ((long)puVar8 < 0) {
                puVar5 = puVar8;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg(puVar5);
            }
            puVar6 = (undefined *)0x0;
            FUN_100297024(0,puVar5 + 1,1,puVar8);
          }
          uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
          uVar2 = *(ulong *)(uVar9 + 0x10);
          puVar8 = puVar6;
          if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar2) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
            FUN_100297024(puVar8,uVar2 + 1,1,puVar6);
            uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar9 + 0x10) = uVar2 + 1;
          *(long *)(uVar9 + uVar2 * 8 + 0x20) = lVar7;
        }
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
    }
  }
  else {
    _SecTrustCopyCertificateChain();
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    if ((param_1 != 0) &&
       (_swift_dynamicCastObjCClass(param_1,&_OBJC_CLASS___NSArray), param_1 != 0)) {
      local_58 = (undefined *)0x0;
      uVar3 = 0;
      FUN_1002772b8(0);
      __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
                (param_1,&local_58,uVar3);
      if (local_58 != (undefined *)0x0) {
        puVar8 = local_58;
      }
    }
  }
  return puVar8;
}

