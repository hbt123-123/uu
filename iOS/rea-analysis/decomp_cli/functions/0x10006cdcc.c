// rea decompile_all
// name: FUN_10006cdcc
// address: 0x10006cdcc
// body: available
// range: 0x10006cdcc-0x10006cf13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10006cdcc(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x70) + 0x10);
  puVar2 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (lVar6 != 0) {
    plVar7 = (long *)(*(long *)(unaff_x20 + 0x70) + 0x30);
    puVar4 = PTR___swiftEmptyArrayStorage_1000f0740;
    do {
      lVar5 = *plVar7;
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)(puVar4 + 0x10);
      if (SCARRY8(lVar9,lVar8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10006cf08);
        (*pcVar1)();
      }
      _swift_bridgeObjectRetain(lVar5);
      puVar2 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar2 == 0) || ((long)(*(ulong *)(puVar4 + 0x18) >> 1) < lVar9 + lVar8)) {
        FUN_10006e820();
        puVar4 = puVar2;
        if (*(long *)(lVar5 + 0x10) != 0) goto LAB_10006ce7c;
LAB_10006ce04:
        _swift_bridgeObjectRelease(lVar5);
        puVar2 = puVar4;
        if (lVar8 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10006cf0c);
          (*pcVar1)();
        }
      }
      else {
        puVar2 = puVar4;
        if (*(long *)(lVar5 + 0x10) == 0) goto LAB_10006ce04;
LAB_10006ce7c:
        if ((long)((*(ulong *)(puVar2 + 0x18) >> 1) - *(long *)(puVar2 + 0x10)) < lVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10006cf10);
          (*pcVar1)();
        }
        _memcpy(puVar2 + *(long *)(puVar2 + 0x10) * 0x10 + 0x20,(void *)(lVar5 + 0x20),lVar8 << 4);
        _swift_bridgeObjectRelease(lVar5);
        if (lVar8 != 0) {
          if (SCARRY8(*(long *)(puVar2 + 0x10),lVar8)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10006cf14);
            (*pcVar1)();
          }
          *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + lVar8;
        }
      }
      plVar7 = plVar7 + 3;
      lVar6 = lVar6 + -1;
      puVar4 = puVar2;
    } while (lVar6 != 0);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  _swift_bridgeObjectRetain();
  FUN_10006d728(puVar2);
  return uVar3;
}

