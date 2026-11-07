// rea decompile_all
// name: FUN_10009c5d0
// address: 0x10009c5d0
// body: available
// range: 0x10009c5d0-0x10009c70b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10009c5d0(void)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  puVar2 = PTR___swiftEmptyArrayStorage_1000f0740;
  uVar6 = unaff_x20[2];
  if ((uVar6 & 0x8000000000000080) == 0x80) {
    uVar4 = *unaff_x20;
    lVar1 = unaff_x20[1];
    FUN_100079974(0,0,0);
    lVar5 = lVar1;
    FUN_100065610(uVar4,lVar1,uVar6);
    __sSS8IteratorV4nextSJSgyF();
    if (lVar5 != 0) {
      lVar7 = 0;
      do {
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c70c);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar6) {
          FUN_100079974(1 < *(ulong *)(puVar2 + 0x18),uVar6 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar6 + 1;
        *(long *)(puVar2 + uVar6 * 0x30 + 0x20) = lVar7;
        *(undefined8 *)(puVar2 + uVar6 * 0x30 + 0x28) = uVar4;
        *(long *)(puVar2 + uVar6 * 0x30 + 0x30) = lVar5;
        *(undefined8 *)(puVar2 + uVar6 * 0x30 + 0x38) = 0x40;
        *(undefined8 *)(puVar2 + uVar6 * 0x30 + 0x40) = 0;
        *(undefined8 *)(puVar2 + uVar6 * 0x30 + 0x48) = 0;
        __sSS8IteratorV4nextSJSgyF();
        lVar7 = lVar7 + 1;
      } while (lVar5 != 0);
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  return puVar2;
}

