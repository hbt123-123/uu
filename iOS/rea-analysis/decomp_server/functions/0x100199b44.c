// rea decompile_all
// name: FUN_100199b44
// address: 0x100199b44
// body: available
// range: 0x100199b44-0x100199c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100199b44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [24];
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_100199c74,0,0xd0000000000000a1,0x800000010088d6c0,0xd000000000000019,
                0x8000000100899a00,0x52,0);
  if ((*(byte *)(unaff_x20 + 0x10) & 1) == 0) {
    _swift_beginAccess(unaff_x20 + 0x38,auStack_48,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar4 = *param_1;
    uVar6 = param_1[3];
    uVar5 = param_1[2];
    *(undefined8 *)(unaff_x20 + 0x40) = param_1[1];
    *(undefined8 *)(unaff_x20 + 0x38) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x50) = uVar6;
    *(undefined8 *)(unaff_x20 + 0x48) = uVar5;
    uVar4 = param_1[4];
    uVar6 = param_1[7];
    uVar5 = param_1[6];
    *(undefined8 *)(unaff_x20 + 0x60) = param_1[5];
    *(undefined8 *)(unaff_x20 + 0x58) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x70) = uVar6;
    *(undefined8 *)(unaff_x20 + 0x68) = uVar5;
    FUN_100121b5c(param_1,auStack_88);
    FUN_100006cdc(uVar1,uVar2);
    _swift_beginAccess(unaff_x20 + 0x18,auStack_88,0,0);
    lVar3 = unaff_x20 + 0x18;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar3 != 0) {
      FUN_1000ca734();
    }
  }
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  if (*(ID *)(unaff_x20 + 0x20) != 0) {
    _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"invalidate");
  }
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return 0;
}

