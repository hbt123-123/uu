// rea decompile_all
// name: FUN_10067d670
// address: 0x10067d670
// body: available
// range: 0x10067d670-0x10067d7bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10067d670(ulong *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar8 = *param_1;
  lVar9 = *(long *)(uVar8 + 0x10);
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = uVar8;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
    FUN_1006295a0(0,lVar9 + 1,1,uVar8);
  }
  uVar7 = *(ulong *)(uVar6 + 0x10);
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar7) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_1006295a0(uVar8,uVar7 + 1,1,uVar6);
  }
  *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
  *(undefined1 *)(uVar8 + uVar7 + 0x20) = 0x80;
  *param_1 = uVar8;
  lVar3 = param_2 - param_3;
  if (SBORROW8(param_2,param_3)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10067d7a8);
    (*pcVar4)();
  }
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10067d7ac);
    (*pcVar4)();
  }
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = lVar9 / param_2;
  }
  uVar7 = lVar9 - lVar2 * param_2;
  if ((long)uVar7 < lVar3) {
    puVar1 = (undefined *)(lVar3 + ~uVar7);
    if ((long)puVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10067d7b0);
      (*pcVar4)();
    }
  }
  else {
    if (SCARRY8(param_2,lVar3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10067d7b4);
      (*pcVar4)();
    }
    lVar9 = param_2 + lVar3 + -1;
    if (SBORROW8(param_2 + lVar3,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10067d7b8);
      (*pcVar4)();
    }
    puVar1 = (undefined *)(lVar9 - uVar7);
    if (SBORROW8(lVar9,uVar7)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10067d7bc);
      (*pcVar4)();
    }
    if ((long)puVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10067d7c0);
      (*pcVar4)();
    }
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar1 != (undefined *)0x0) {
    puVar5 = puVar1;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (puVar1,PTR___ss5UInt8VN_100995d40);
    *(undefined **)(puVar5 + 0x10) = puVar1;
    _bzero(puVar5 + 0x20,(size_t)puVar1);
  }
  FUN_100628ae0(puVar5);
  return;
}

