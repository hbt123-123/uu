// rea decompile_all
// name: FUN_1002d91d0
// address: 0x1002d91d0
// body: available
// range: 0x1002d91d0-0x1002d934f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002d91d0(long param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar6 = *unaff_x20;
  if ((uVar6 & 0xc000000000000001) == 0) {
    _swift_bridgeObjectRetain(uVar6);
    FUN_100280288();
    _swift_bridgeObjectRelease(uVar6);
    if ((param_2 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      iVar2 = (int)*unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar6 = *unaff_x20;
      if (iVar2 == 0) {
        FUN_1002eb9a4();
      }
      _swift_release(*(undefined8 *)(*(long *)(uVar6 + 0x30) + param_1 * 8));
      uVar7 = *(undefined8 *)(*(long *)(uVar6 + 0x38) + param_1 * 8);
      FUN_1002d972c(param_1,uVar6);
      *unaff_x20 = uVar6;
    }
  }
  else {
    uVar5 = uVar6 & 0xffffffffffffff8;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6;
    }
    _swift_bridgeObjectRetain(uVar6);
    lVar3 = param_1;
    _swift_retain();
    __ss17__CocoaDictionaryV6lookupyyXlSgyXlF();
    _swift_release(param_1);
    if (lVar3 == 0) {
      _swift_bridgeObjectRelease(uVar6);
      uVar7 = 0;
    }
    else {
      _swift_unknownObjectRelease(lVar3);
      uVar4 = uVar5;
      __ss17__CocoaDictionaryV5countSivg();
      FUN_1002ecba4();
      _swift_retain();
      FUN_100280288();
      _swift_release(uVar5);
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9338);
        (*pcVar1)();
      }
      _swift_release(*(undefined8 *)(*(long *)(uVar5 + 0x30) + param_1 * 8));
      uVar7 = *(undefined8 *)(*(long *)(uVar5 + 0x38) + param_1 * 8);
      FUN_1002d972c(param_1,uVar5);
      _swift_bridgeObjectRelease(uVar6);
      *unaff_x20 = uVar5;
    }
  }
  return uVar7;
}

