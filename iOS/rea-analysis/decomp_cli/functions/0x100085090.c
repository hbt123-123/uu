// rea decompile_all
// name: FUN_100085090
// address: 0x100085090
// body: available
// range: 0x100085090-0x10008510b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100085090(void)

{
  undefined *puVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  puVar1 = (undefined *)*unaff_x20;
  if (puVar1 < (undefined *)0x2) {
    lVar2 = *(long *)(PTR___swiftEmptyArrayStorage_1000f0740 + 0x10);
    puVar1 = PTR___swiftEmptyArrayStorage_1000f0740;
  }
  else {
    _swift_bridgeObjectRetain();
    lVar2 = *(long *)(puVar1 + 0x10);
  }
  if (lVar2 != 0) {
    pbVar3 = puVar1 + 0x30;
    do {
      if (((*pbVar3 & 0xc0) == 0x40) && ((*pbVar3 & 1) != 0)) {
        uVar4 = 1;
        goto LAB_1000850f8;
      }
      lVar2 = lVar2 + -1;
      pbVar3 = pbVar3 + 0x18;
    } while (lVar2 != 0);
  }
  uVar4 = 0;
LAB_1000850f8:
  _swift_bridgeObjectRelease();
  return uVar4;
}

