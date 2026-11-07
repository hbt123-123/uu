// rea decompile_all
// name: FUN_10062c78c
// address: 0x10062c78c
// body: available
// range: 0x10062c78c-0x10062c90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10062c78c(undefined *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if ((param_4 & 1) == 0) {
LAB_10062c7ac:
    puVar4 = param_1;
    thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
  }
  else {
    uVar5 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar6 = param_1;
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_dynamicCastClass();
    if (puVar6 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar9 = *(long *)(puVar6 + 0x10);
    _swift_release();
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10062c8fc);
      (*pcVar3)();
    }
    if (lVar9 != (param_4 >> 1) - param_3) {
      _swift_unknownObjectRelease();
      goto LAB_10062c7ac;
    }
    puVar6 = param_1;
    _swift_dynamicCastClass(param_1,uVar5);
    _swift_unknownObjectRelease(param_1);
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar6 != (undefined *)0x0) goto LAB_10062c844;
  }
  _swift_unknownObjectRelease(param_1);
  puVar6 = puVar4;
LAB_10062c844:
  uVar7 = *(ulong *)(puVar6 + 0x10);
  if (1 < uVar7) {
    uVar8 = uVar7 >> 1;
    lVar9 = uVar7 + 0x1f;
    lVar10 = 0x20;
    do {
      if (lVar10 != lVar9) {
        if (*(ulong *)(puVar6 + 0x10) <= lVar10 - 0x20U) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10062c8f0);
          (*pcVar3)();
        }
        if (*(ulong *)(puVar6 + 0x10) <= lVar9 - 0x20U) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10062c8f4);
          (*pcVar3)();
        }
        uVar1 = puVar6[lVar10];
        uVar2 = puVar6[lVar9];
        puVar4 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar4 & 1) == 0) {
          FUN_1006541b8();
        }
        puVar6[lVar10] = uVar2;
        if (*(ulong *)(puVar6 + 0x10) <= lVar9 - 0x20U) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10062c8f8);
          (*pcVar3)();
        }
        puVar6[lVar9] = uVar1;
      }
      lVar9 = lVar9 + -1;
      lVar10 = lVar10 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return puVar6;
}

