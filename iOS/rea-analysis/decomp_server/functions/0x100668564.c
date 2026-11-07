// rea decompile_all
// name: FUN_100668564
// address: 0x100668564
// body: available
// range: 0x100668564-0x100668777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100668564(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  
  *(char *)(unaff_x20 + 0x18) = (char)param_2;
  *(long *)(unaff_x20 + 0x10) = param_1;
  uVar5 = *(ulong *)(param_1 + 0x10);
  uVar1 = param_2 >> 6 & 3;
  if (uVar1 == 0) {
    uVar4 = 0x40;
    if ((param_2 & 0xfe) != 0) {
      uVar4 = 0x80;
    }
    if (uVar4 < uVar5) goto LAB_100668650;
    goto LAB_10066861c;
  }
  if (uVar1 == 1) {
    if ((param_2 & 0x3f) < 7) {
      if (uVar5 <= *(ulong *)(&DAT_10084bf08 + (ulong)(param_2 & 0x3f) * 8)) goto LAB_10066861c;
LAB_100668650:
      lVar2 = param_1;
      _swift_bridgeObjectRetain();
      FUN_10066820c();
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
      *(long *)(unaff_x20 + 0x10) = lVar2;
      _swift_bridgeObjectRelease(uVar3);
      if (uVar1 == 0) goto LAB_100668628;
LAB_100668674:
      if (uVar1 != 1) {
        if ((0x81 < (param_2 & 0xff)) && ((param_2 & 0xff) != 0x82)) goto joined_r0x000100668608;
        goto joined_r0x000100668730;
      }
      if ((param_2 & 0x3f) < 7) {
        uVar4 = *(ulong *)(&DAT_10084bf08 + (ulong)(param_2 & 0x3f) * 8);
        goto joined_r0x00010066863c;
      }
      if (0x47 < uVar5) goto LAB_10066875c;
    }
    else {
      if (0x48 < uVar5) goto LAB_100668650;
LAB_10066861c:
      _swift_bridgeObjectRetain(param_1);
      if (uVar1 != 0) goto LAB_100668674;
LAB_100668628:
      uVar4 = 0x40;
      if ((param_2 & 0xfe) != 0) {
        uVar4 = 0x80;
      }
joined_r0x00010066863c:
      if (uVar4 <= uVar5) goto LAB_10066875c;
    }
    if ((param_2 & 0xff) < 0x40) {
      uVar3 = 0x40;
      if ((param_2 & 0xfe) != 0) {
        uVar3 = 0x80;
      }
    }
    else if ((param_2 & 0x3f) < 7) {
      uVar3 = *(undefined8 *)(&DAT_10084bf08 + (ulong)(param_2 & 0x3f) * 8);
    }
    else {
      uVar3 = 0x48;
    }
  }
  else if (((param_2 & 0xff) < 0x82) || ((param_2 & 0xff) == 0x82)) {
    if (0x40 < uVar5) goto LAB_100668650;
    _swift_bridgeObjectRetain(param_1);
joined_r0x000100668730:
    if (0x3f < uVar5) goto LAB_10066875c;
    uVar3 = 0x40;
  }
  else {
    if (0x80 < uVar5) goto LAB_100668650;
    _swift_bridgeObjectRetain(param_1);
joined_r0x000100668608:
    if (0x7f < uVar5) goto LAB_10066875c;
    uVar3 = 0x80;
  }
  lVar2 = param_1;
  FUN_10067e95c(param_1,uVar3);
  _swift_bridgeObjectRelease(param_1);
  param_1 = *(long *)(unaff_x20 + 0x10);
  *(long *)(unaff_x20 + 0x10) = lVar2;
LAB_10066875c:
  _swift_bridgeObjectRelease(param_1);
  return;
}

