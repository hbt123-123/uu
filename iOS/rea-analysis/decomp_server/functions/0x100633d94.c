// rea decompile_all
// name: FUN_100633d94
// address: 0x100633d94
// body: available
// range: 0x100633d94-0x100633e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100633d94(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  ulong uVar7;
  
  uVar1 = unaff_x20[3];
  uVar7 = uVar1 >> 1;
  lVar2 = uVar7 - unaff_x20[2];
  if (SBORROW8(uVar7,unaff_x20[2])) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100633e38);
    (*pcVar4)();
  }
  lVar3 = param_1 - lVar2;
  if (SBORROW8(param_1,lVar2)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100633e3c);
    (*pcVar4)();
  }
  if (lVar3 != 0) {
    puVar6 = (undefined *)*unaff_x20;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar5 = puVar6;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (puVar5 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar6);
      puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    if (SCARRY8(*(long *)(puVar5 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100633e40);
      (*pcVar4)();
    }
    *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + lVar3;
    _swift_release();
    if (SCARRY8(uVar7,lVar3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100633e44);
      (*pcVar4)();
    }
    if ((long)(uVar7 + lVar3) < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100633e48);
      (*pcVar4)();
    }
    unaff_x20[3] = uVar1 & 1 | (uVar7 + lVar3) * 2;
  }
  return;
}

