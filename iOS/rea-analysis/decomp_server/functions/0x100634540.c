// rea decompile_all
// name: FUN_100634540
// address: 0x100634540
// body: available
// range: 0x100634540-0x10063473b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006346fc to 0x10063427c FUN_10063427c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100634540(long param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  size_t sVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar6 = unaff_x20[2];
  uVar7 = (ulong)unaff_x20[3] >> 1;
  lVar5 = uVar7 - lVar6;
  if (SBORROW8(uVar7,lVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10063471c);
    (*pcVar3)();
  }
  sVar8 = *(size_t *)(param_1 + 0x10);
  lVar11 = lVar5;
  if ((unaff_x20[3] & 1) != 0) {
    puVar1 = (undefined *)*unaff_x20;
    lVar2 = unaff_x20[1];
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar4 = puVar1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (puVar4 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar1);
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar9 = *(long *)(puVar4 + 0x10);
    if ((undefined *)(lVar2 + lVar6 + lVar5) == puVar4 + lVar9 + 0x20) {
      uVar7 = *(ulong *)(puVar4 + 0x18);
      _swift_release();
      lVar9 = (uVar7 >> 1) - lVar9;
      lVar11 = lVar5 + lVar9;
      if (SCARRY8(lVar5,lVar9)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100634738);
        (*pcVar3)();
      }
    }
    else {
      _swift_release();
    }
  }
  lVar6 = lVar5 + sVar8;
  if (SCARRY8(lVar5,sVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100634720);
    (*pcVar3)();
  }
  lVar5 = lVar6;
  if (lVar11 < lVar6) {
    if (lVar11 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100634730);
      (*pcVar3)();
    }
    lVar5 = lVar11 * 2;
    if (lVar5 - lVar6 == 0 || lVar5 < lVar6) {
      lVar5 = lVar6;
    }
  }
  FUN_10063a0a0(lVar5);
  lVar6 = unaff_x20[2];
  uVar7 = (ulong)unaff_x20[3] >> 1;
  lVar5 = uVar7 - lVar6;
  if (SBORROW8(uVar7,lVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100634724);
    (*pcVar3)();
  }
  puVar1 = (undefined *)(unaff_x20[1] + lVar6 + lVar5);
  lVar6 = lVar5;
  if ((unaff_x20[3] & 1) != 0) {
    puVar10 = (undefined *)*unaff_x20;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar4 = puVar10;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (puVar4 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar10);
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar11 = *(long *)(puVar4 + 0x10);
    if (puVar1 == puVar4 + lVar11 + 0x20) {
      uVar7 = *(ulong *)(puVar4 + 0x18);
      _swift_release();
      lVar11 = (uVar7 >> 1) - lVar11;
      lVar6 = lVar5 + lVar11;
      if (SCARRY8(lVar5,lVar11)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10063473c);
        (*pcVar3)();
      }
    }
    else {
      _swift_release();
    }
  }
  if (SBORROW8(lVar6,lVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100634728);
    (*pcVar3)();
  }
  if (sVar8 != 0) {
    if (lVar6 - lVar5 < (long)sVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10063472c);
      (*pcVar3)();
    }
    _memcpy(puVar1,(void *)(param_1 + 0x20),sVar8);
    if (0 < (long)sVar8) {
      if (SCARRY8(lVar5,sVar8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100634734);
        (*pcVar3)();
      }
      FUN_100633d94(lVar5 + sVar8);
    }
  }
  if (sVar8 != lVar6 - lVar5) {
    return;
  }
  FUN_10063427c(param_1,sVar8);
  return;
}

