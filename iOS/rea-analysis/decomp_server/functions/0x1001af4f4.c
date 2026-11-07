// rea decompile_all
// name: FUN_1001af4f4
// address: 0x1001af4f4
// body: available
// range: 0x1001af4f4-0x1001af673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001af4f4(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0xd0);
  _swift_release();
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(*(long *)(unaff_x22 + 0xe8) + *(long *)(unaff_x22 + 0xf0)) & 1) == 0) {
      uVar2 = 0;
      FUN_100401b14(0);
      FUN_1003fb48c(uVar2,FUN_1001af8d4,0,0xd000000000000095,0x8000000100877f50,0x6574616572636572,
                    0xee0029286d6f6f52,0x99,0);
      FUN_1001af900(unaff_x22 + 0x10);
      FUN_1001b5838(unaff_x22 + 0x10);
      goto LAB_1001af65c;
    }
    FUN_1001b5838(unaff_x22 + 0x10);
    uVar2 = 0;
    FUN_100401b14(0);
    pcVar3 = FUN_1001af8a8;
    uVar4 = 0x95;
  }
  else {
    FUN_1001b5838(unaff_x22 + 0x10);
    uVar2 = 0;
    FUN_100401b14(0);
    pcVar3 = FUN_1001af87c;
    uVar4 = 0x90;
  }
  FUN_1003fb48c(uVar2,pcVar3,0,0xd000000000000095,0x8000000100877f50,0x6574616572636572,
                0xee0029286d6f6f52,uVar4,0);
LAB_1001af65c:
                    /* WARNING: Could not recover jumptable at 0x0001001af670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

