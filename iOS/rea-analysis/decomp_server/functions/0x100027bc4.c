// rea decompile_all
// name: FUN_100027bc4
// address: 0x100027bc4
// body: available
// range: 0x100027bc4-0x100027d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_100027bc4(ulong param_1)

{
  int iVar1;
  ID IVar2;
  byte bVar3;
  int iVar4;
  long unaff_x20;
  int iVar5;
  long lVar6;
  undefined1 auStack_60 [16];
  int local_50;
  int iStack_4c;
  
  if ((int)param_1 < 0) {
    param_1 = _objc_msgSend(*(ID *)(unaff_x20 + 0x10),"screenId");
  }
  lVar6 = *(long *)(unaff_x20 + 0x38);
  iVar4 = (int)param_1;
  local_50 = iVar4;
  if (*(char *)(lVar6 + 0x14) == '\x01') {
    IVar2 = param_1;
    FUN_100039b50();
    if ((IVar2 & 1) != 0) {
      if ((*(byte *)(lVar6 + 0x14) & 1) == 0) {
        iVar1 = *(int *)(lVar6 + 0x10);
        iVar5 = -1;
        goto joined_r0x000100027c2c;
      }
      FUN_100039b50();
      if ((IVar2 & 1) == 0) goto LAB_100027c38;
      iVar5 = -1;
      goto LAB_100027cf0;
    }
LAB_100027c38:
    FUN_100027f54();
    if (param_1 != 0) {
      FUN_1003d541c();
      bVar3 = 0;
      param_1 = param_1 & 0xffffffff;
      goto LAB_100027d74;
    }
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb4ec(FUN_100040c08,auStack_60,0xd0000000000000a9,0x8000000100877660,0xd00000000000001c,
                  0x800000010087c6b0,0x567,0);
  }
  else {
    iVar1 = *(int *)(lVar6 + 0x10);
    iVar5 = iVar1;
joined_r0x000100027c2c:
    if ((-1 < iVar1) && (iVar4 == iVar1)) goto LAB_100027c38;
LAB_100027cf0:
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    iStack_4c = iVar5;
    FUN_1003fb4ec(FUN_100040c10,auStack_60,0xd0000000000000a9,0x8000000100877660,0xd00000000000001c,
                  0x800000010087c6b0,0x563,0);
  }
  bVar3 = 1;
  param_1 = 0;
LAB_100027d74:
  return param_1 | (ulong)bVar3 << 0x20;
}

