// rea decompile_all
// name: FUN_100646b94
// address: 0x100646b94
// body: available
// range: 0x100646b94-0x100646ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100646b94(void)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined *puVar6;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  if ((char)unaff_x20[2] == '\0') {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    *(undefined1 *)(unaff_x20 + 2) = 2;
    if (uVar2 == 0) {
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (uVar1 != 0) {
        puVar4 = &DAT_100ab7e10;
        FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
        _swift_allocObject();
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        *(ulong *)(puVar4 + 0x20) = uVar1;
      }
    }
    else {
      puVar4 = &DAT_100ab7e10;
      FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
      _swift_allocObject();
      *(undefined8 *)(puVar4 + 0x18) = 4;
      *(undefined8 *)(puVar4 + 0x10) = 2;
      *(ulong *)(puVar4 + 0x20) = uVar1;
      *(ulong *)(puVar4 + 0x28) = uVar2;
    }
    _swift_bridgeObjectRelease(unaff_x20[3]);
  }
  else {
    if ((char)unaff_x20[2] != '\x01') {
      return;
    }
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    *(undefined1 *)(unaff_x20 + 2) = 2;
    if ((long)uVar2 < (long)uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100646cc4);
      (*pcVar3)();
    }
    if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100646cc8);
      (*pcVar3)();
    }
    puVar6 = (undefined *)unaff_x20[3];
    uVar5 = *(ulong *)(puVar6 + 0x10);
    if (uVar5 < uVar1 || (long)uVar5 < (long)uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100646ccc);
      (*pcVar3)();
    }
    puVar4 = puVar6;
    if (uVar5 != uVar2 - uVar1) {
      FUN_100629b3c(puVar6,puVar6 + 0x20,uVar1,uVar2 << 1 | 1);
      _swift_bridgeObjectRelease(puVar6);
    }
  }
  unaff_x20[3] = (ulong)puVar4;
  return;
}

