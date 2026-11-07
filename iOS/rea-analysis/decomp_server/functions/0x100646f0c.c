// rea decompile_all
// name: FUN_100646f0c
// address: 0x100646f0c
// body: available
// range: 0x100646f0c-0x100646faf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100646f0c(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  ulong *puVar3;
  
  puVar3 = unaff_x20 + 3;
  uVar1 = *puVar3;
  if (*(byte *)(unaff_x20 + 2) < 2) {
    _swift_bridgeObjectRelease();
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    *(undefined1 *)(unaff_x20 + 2) = 0;
    unaff_x20[3] = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = *puVar3;
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      FUN_100629f38(0,*(ulong *)(uVar2 + 0x18) >> 1);
      _swift_bridgeObjectRelease(uVar2);
      *puVar3 = uVar1;
    }
    else {
      FUN_100634e4c(0,*(undefined8 *)(uVar2 + 0x10));
    }
    FUN_100628ce8(0,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
  }
  return;
}

