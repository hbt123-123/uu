// rea decompile_all
// name: FUN_100634018
// address: 0x100634018
// body: available
// range: 0x100634018-0x100634177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100634018(long param_1,code *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  long lVar10;
  
  iVar5 = (int)*unaff_x20;
  _swift_isUniquelyReferencedNonObjC_nonNull();
  if (iVar5 != 0) {
    lVar1 = unaff_x20[2];
    uVar9 = (ulong)unaff_x20[3] >> 1;
    lVar3 = uVar9 - lVar1;
    if (SBORROW8(uVar9,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100634154);
      (*pcVar4)();
    }
    puVar2 = (undefined *)*unaff_x20;
    lVar8 = unaff_x20[1];
    lVar7 = lVar3;
    if ((unaff_x20[3] & 1) != 0) {
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar6 = puVar2;
      _swift_unknownObjectRetain();
      _swift_dynamicCastClass();
      if (puVar6 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar2);
        puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar10 = *(long *)(puVar6 + 0x10);
      if ((undefined *)(lVar8 + lVar1 + lVar3) == puVar6 + lVar10 + 0x20) {
        uVar9 = *(ulong *)(puVar6 + 0x18);
        _swift_release();
        lVar10 = (uVar9 >> 1) - lVar10;
        lVar7 = lVar3 + lVar10;
        if (SCARRY8(lVar3,lVar10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100634178);
          (*pcVar4)();
        }
      }
      else {
        _swift_release();
      }
    }
    if (param_1 <= lVar7) {
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar6 = puVar2;
      _swift_unknownObjectRetain();
      _swift_dynamicCastClass();
      if (puVar6 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar2);
        puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar8 = ((lVar8 + lVar1) - (long)puVar6) + -0x20;
      lVar1 = lVar3 + lVar8;
      if (SCARRY8(lVar3,lVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100634158);
        (*pcVar4)();
      }
      if (lVar1 < *(long *)(puVar6 + 0x10)) {
        (*param_2)(lVar1,*(long *)(puVar6 + 0x10),0);
      }
    }
  }
  return;
}

