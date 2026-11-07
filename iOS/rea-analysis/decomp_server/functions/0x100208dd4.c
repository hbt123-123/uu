// rea decompile_all
// name: FUN_100208dd4
// address: 0x100208dd4
// body: available
// range: 0x100208dd4-0x100208e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100208dd4(void)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 local_68;
  byte local_60;
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)0x6c696e;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    FUN_1000c7b64();
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
    bVar1 = *(byte *)(lVar3 + 0x48);
    bVar2 = *(byte *)(lVar3 + 0x49);
    _swift_release(lVar3);
    if ((bVar2 & 1) == 0) {
      local_60 = bVar1 & 1;
      puVar4 = &local_68;
      local_68 = uVar5;
      __sSS10describingSSx_tclufC(puVar4,&DAT_1009c0230);
    }
  }
  return puVar4;
}

