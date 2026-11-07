// rea decompile_all
// name: FUN_10063a0ac
// address: 0x10063a0ac
// body: available
// range: 0x10063a0ac-0x10063a22b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063a0ac(long param_1,code *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t *unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  size_t sVar8;
  ulong uVar9;
  size_t sVar10;
  
  uVar6 = unaff_x20[3] >> 1;
  if ((unaff_x20[3] & 1) != 0) {
    puVar4 = (undefined *)*unaff_x20;
    puVar3 = puVar4;
    _swift_isUniquelyReferencedNonObjC_nonNull();
    *unaff_x20 = (size_t)puVar4;
    if ((int)puVar3 != 0) {
      sVar8 = unaff_x20[2];
      lVar7 = uVar6 - sVar8;
      if (SBORROW8(uVar6,sVar8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10063a228);
        (*pcVar1)();
      }
      sVar10 = unaff_x20[1];
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar3 = puVar4;
      _swift_unknownObjectRetain();
      _swift_dynamicCastClass();
      if (puVar3 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar4);
        puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar5 = *(long *)(puVar3 + 0x10);
      if ((undefined *)(sVar10 + sVar8 + lVar7) == puVar3 + lVar5 + 0x20) {
        uVar9 = *(ulong *)(puVar3 + 0x18);
        _swift_release();
        lVar5 = (uVar9 >> 1) - lVar5;
        bVar2 = SCARRY8(lVar7,lVar5);
        lVar7 = lVar7 + lVar5;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10063a22c);
          (*pcVar1)();
        }
      }
      else {
        _swift_release();
      }
      if (param_1 <= lVar7) goto LAB_10063a1ec;
    }
  }
  sVar8 = unaff_x20[2];
  puVar3 = (undefined *)(uVar6 - sVar8);
  if (SBORROW8(uVar6,sVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063a210);
    (*pcVar1)();
  }
  puVar4 = puVar3;
  (*param_2)(puVar3,param_1);
  if ((long)uVar6 < (long)sVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063a214);
    (*pcVar1)();
  }
  _memcpy(puVar4 + 0x20,(void *)(unaff_x20[1] + sVar8),(size_t)puVar3);
  if (SBORROW8(0,sVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063a218);
    (*pcVar1)();
  }
  lVar7 = sVar8 + *(long *)(puVar4 + 0x10);
  if (SCARRY8(sVar8,*(long *)(puVar4 + 0x10))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063a21c);
    (*pcVar1)();
  }
  if (lVar7 < (long)sVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063a220);
    (*pcVar1)();
  }
  if (lVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063a224);
    (*pcVar1)();
  }
  _swift_unknownObjectRelease(*unaff_x20);
  unaff_x20[1] = (long)(puVar4 + 0x20) - sVar8;
  unaff_x20[2] = sVar8;
  unaff_x20[3] = lVar7 * 2 | 1;
LAB_10063a1ec:
  *unaff_x20 = (size_t)puVar4;
  return;
}

