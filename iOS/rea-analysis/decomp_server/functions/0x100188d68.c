// rea decompile_all
// name: FUN_100188d68
// address: 0x100188d68
// body: available
// range: 0x100188d68-0x100188ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100188d68(undefined8 param_1)

{
  uint uVar1;
  ID IVar2;
  char *pcVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  undefined1 auStack_70 [16];
  undefined8 local_60;
  ID IStack_58;
  char *local_50;
  
  pcVar3 = "dataForType:";
  IVar2 = _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"dataForType:",param_1);
  if (IVar2 == 0) {
    IVar2 = 0;
    pcVar3 = (char *)0xf000000000000000;
  }
  else {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_60 = param_1;
  IStack_58 = IVar2;
  local_50 = pcVar3;
  FUN_1003fb48c(FUN_10018b838,auStack_70,0xd0000000000000a2,0x8000000100893bb0,0xd000000000000012,
                0x80000001008986c0,0x2a,7);
  if ((ulong)pcVar3 >> 0x3c < 0xf) {
    uVar1 = (uint)((ulong)pcVar3 >> 0x20);
    uVar4 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar4 == 0) {
        if (((ulong)pcVar3 & 0xff000000000000) != 0) goto LAB_100188ea0;
      }
      else {
        lVar5 = (long)(int)IVar2;
        lVar6 = (long)IVar2 >> 0x20;
LAB_100188e84:
        if (lVar5 != lVar6) goto LAB_100188ea0;
      }
    }
    else if (uVar4 == 2) {
      lVar5 = *(long *)(IVar2 + 0x10);
      lVar6 = *(long *)(IVar2 + 0x18);
      goto LAB_100188e84;
    }
    FUN_100006cc8(IVar2,pcVar3);
  }
  IVar2 = 0;
  pcVar3 = (char *)0xc000000000000000;
LAB_100188ea0:
  auVar7._8_8_ = pcVar3;
  auVar7._0_8_ = IVar2;
  return auVar7;
}

