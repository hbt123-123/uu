// rea decompile_all
// name: FUN_10063d80c
// address: 0x10063d80c
// body: available
// range: 0x10063d80c-0x10063d9ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10063d858 to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063d80c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar2 = PTR___ss5UInt8VN_100995d40;
  uVar9 = *(ulong *)(unaff_x20 + 0x88);
  lVar7 = *(long *)(uVar9 + 0x10);
  while( true ) {
    if (param_1 < lVar7) {
      if (-1 < param_1) {
        _swift_bridgeObjectRetain(*(undefined8 *)(uVar9 + param_1 * 8 + 0x20));
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10063d9ac);
      (*pcVar4)();
    }
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10063d9a4);
      (*pcVar4)();
    }
    lVar7 = *(long *)(uVar9 + lVar7 * 8 + 0x18);
    puVar11 = *(undefined **)(lVar7 + 0x10);
    if (puVar11 == (undefined *)0x0) {
      bVar8 = 0;
      puVar5 = puVar3;
    }
    else {
      _swift_bridgeObjectRetain(lVar7);
      puVar5 = puVar11;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(puVar11,puVar2);
      *(undefined **)(puVar5 + 0x10) = puVar11;
      _bzero(puVar5 + 0x20,(size_t)puVar11);
      bVar8 = 0;
      puVar11 = puVar11 + 0x1f;
      do {
        if (*(long *)(puVar5 + 0x10) <= (long)(puVar11 + -0x20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10063d9a0);
          (*pcVar4)();
        }
        bVar1 = puVar11[lVar7];
        puVar5[(long)puVar11] = bVar8 | bVar1 << 1;
        bVar8 = bVar1 >> 7;
        puVar11 = puVar11 + -1;
      } while (puVar11 != (undefined *)0x1f);
      _swift_bridgeObjectRelease(lVar7);
      bVar8 = (char)bVar1 >> 0x1f & 0x87;
    }
    if (*(ulong *)(puVar5 + 0x10) < 0x10) break;
    puVar5[0x2f] = puVar5[0x2f] ^ bVar8;
    uVar10 = *(ulong *)(unaff_x20 + 0x88);
    uVar9 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x88) = uVar10;
    uVar6 = uVar10;
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
      FUN_100629690(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      *(ulong *)(unaff_x20 + 0x88) = uVar6;
    }
    uVar10 = *(ulong *)(uVar6 + 0x10);
    uVar9 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar10) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_100629690(uVar9,uVar10 + 1,1,uVar6);
    }
    *(ulong *)(uVar9 + 0x10) = uVar10 + 1;
    *(undefined **)(uVar9 + uVar10 * 8 + 0x20) = puVar5;
    *(ulong *)(unaff_x20 + 0x88) = uVar9;
    lVar7 = *(long *)(uVar9 + 0x10);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10063d9a8);
  (*pcVar4)();
}

